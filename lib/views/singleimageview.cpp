#include "singleimageview.h"

QString SingleImageView::fileExtentions = ".*\\.jpg$|.*\\.png$|.*\\.tif$|.*\\.tiff$|.*\\.jpeg$";

SingleImageView::SingleImageView(bool gray, QWidget* w):QGraphicsView(w)
{
    currentImage = 0;
    _gray = gray;
    QGraphicsScene* scene = new QGraphicsScene();
    this->setDragMode(QGraphicsView::ScrollHandDrag);
    this->setScene(scene);
}
SingleImageView::SingleImageView(QWidget* w) : SingleImageView(false, w)
{

}
SingleImageView::~SingleImageView()
{
    if(currentImage !=0){
        delete currentImage;
    }
    delete this->scene();
}
void SingleImageView::fitIntoView()
{
    fitImage();
}
void SingleImageView::showPreview(QImage* img)
{
    currentImage = img;
    QList<QGraphicsItem*> items =  this->scene()->items(); int count = items.count();
    QMutableListIterator <QGraphicsItem*> i(items);
    while(i.hasNext()){
        QGraphicsItem* item = i.next();
        this->scene()->removeItem(item);
        delete item;
    }
    QPixmap pixmap = QPixmap::fromImage(*img);
    QGraphicsPixmapItem* imgitem = new QGraphicsPixmapItem(pixmap);
    this->scene()->addItem(imgitem);
    this->scene()->setSceneRect(0, 0, pixmap.width(), pixmap.height());
    fitImage();
}

void SingleImageView::showImage(QImage *img)
{
    this->showPreview(img);
}
void SingleImageView::fitImage()
{
    if(currentImage)
    {
        double imageHeight = currentImage->height()*1.1;
        double imageWidth = currentImage->width()*1.1;
        double sceneHeight = this->viewport()->height();
        double sceneWidth = this->viewport()->width();
        if(imageWidth && imageHeight)
        {
            double xRatio = sceneWidth/imageWidth;
            double yRatio = sceneHeight/imageHeight;
            h11 = h22 = std::min(xRatio, yRatio);
            this->setTransformationAnchor(QGraphicsView::AnchorUnderMouse);
            this->setTransform(QTransform(h11, h12, h21, h22, 0, 0));
        }
    }
}

void SingleImageView::resizeEvent(QResizeEvent *event)
{
    QGraphicsView::resizeEvent(event);
    this->updateGeometry();
}
void SingleImageView::dragEnterEvent(QDragEnterEvent *event){
    const StandardMimeData *mimeData = qobject_cast<const StandardMimeData*>(event->mimeData());
     if(event->mimeData()->hasUrls() || (mimeData &&  mimeData->getIndexes().count())){
        event->accept();
     }
}

void SingleImageView::dragMoveEvent(QDragMoveEvent *event)
{
    const StandardMimeData *mimeData = qobject_cast<const StandardMimeData*>(event->mimeData());
     if(event->mimeData()->hasUrls() || (mimeData &&  mimeData->getIndexes().count())){
        event->accept();
     }
}
void SingleImageView::dropEvent(QDropEvent *event)
{
    const StandardMimeData *mimeData = qobject_cast<const StandardMimeData*>(event->mimeData());
    if(mimeData && mimeData->getIndexes().count())
    {
        QModelIndexList indexes = mimeData->getIndexes();
        QModelIndex index = indexes.first();
        if (index.isValid())
        {
            StandardImageItem* item = static_cast<StandardImageItem*>(index.internalPointer());

            if(this->_gray)
            {
                // check if we have colored image. If so, prevent to add it to the view.
                cv::Mat image = item->getCVImage();
                if(image.channels()>1)
                {
                    return;
                }
            }
            cvImage = item->getCVImage();
            showPreview(ImageHelper::convertToQImage(cvImage));
            emit this->imageChanged(cvImage);
        }
    } else if(event->mimeData()->hasUrls()){
        QUrl url = event->mimeData()->urls().last();
        QString fileName = url.toLocalFile();
        if(!fileName.isEmpty() && QFileInfo(fileName).exists())
        {
            QRegExp regex = QRegExp(SingleImageView::fileExtentions);
            if(regex.exactMatch(fileName))
            {
                cv::Mat image = ImageHelper::readImage(fileName);
                if(!!image.data && (!_gray || image.channels() == 1))
                {
                    cvImage = image;
                    showPreview(ImageHelper::convertToQImage(cvImage));
                    emit this->imageChanged(cvImage);
                }
            }

        }
    }
}

void SingleImageView::wheelEvent(QWheelEvent *event)
{
    const int degrees = event->delta();
    int steps  = degrees;
    if(steps>0)
    {
        h11 = (h11 >= maxFactor) ? h11 : (h11*scaleFactor);
        h22 = (h22 >= maxFactor) ? h22 : (h22*scaleFactor);
    }
    else
    {
        h11 = (h11 <= minFactor) ? minFactor : (h11/scaleFactor);
        h22 = (h22 <= minFactor) ? minFactor : (h22/scaleFactor);
    }
    this->setTransformationAnchor(QGraphicsView::AnchorUnderMouse);
    this->setTransform(QTransform(h11, h12, h21, h22, 0, 0));
}
cv::Mat SingleImageView::getCVImage(){
    return cvImage;
}
