#include "mergeresultview.h"

ImageMergingProcessor* MergeResultView::runExecutor(ImageMergingProcessor* p){
    p->run();
    return p;
}
cv::Mat mergeGrayImages(ImageMergingInputData input){

}
cv::Mat mergeMultichannelImage(ImageMergingInputData input){

}
MergeResultView::MergeResultView(QWidget *parent) : QDialog(parent)
{
    QGridLayout* layout = new QGridLayout(this);
    this->setLayout(layout);
    results = new QTreeView(this);
    results->setIconSize(QSize(40, 40));
    viewHelper::addShadow(results);
    resultModel = new StandardImageModel(results);
    resultModel->root()->setData(0, tr("Image Name"), Qt::DisplayRole);
    results->setModel(resultModel);

    QMovie* m = new QMovie(":/resources/images/ajax-loader.gif");
    spinner = new QLabel(this);
    spinner->setMovie(m);
    spinner->setAlignment(Qt::AlignCenter);
    MaterialButton* save = new MaterialButton(tr("Save"));
    save->setIcon(viewHelper::awesome->icon(fa::save));

    layout->addWidget(spinner, 0, 0);
    layout->addWidget(results, 1, 0);
    layout->addWidget(save, 2, 0);

    QObject::connect(results, SIGNAL(doubleClicked(QModelIndex)), this, SLOT(showImage(QModelIndex)));
    QObject::connect(save, SIGNAL(clicked(bool)), this, SLOT(save()));
}

MergeResultView::~MergeResultView()
{

}
void MergeResultView::run(StandardImageModel *model, Mat panImage){
    QMap<QString, cv::Mat> grayImages;
    QMap<QString, cv::Mat> multichannelImages;
    QList<ImageMergingProcessor*> executorsList;
    foreach(QObject* item, model->root()->children()){
        StandardImageItem* imageItem = qobject_cast<StandardImageItem*>(item);
        cv::Mat image = imageItem->getCVImage();
        QString name = imageItem->getName();
        if(image.channels() == 1){
            grayImages.insert(name, image);
        } else if(image.channels()>1){
            multichannelImages.insert(name, image);
        }
    }
    if(grayImages.count()>0){
        QList<QString> names = grayImages.keys();
        cv::Mat graySources = combineSourceImagesIntoMatrix(panImage.cols, panImage.rows, panImage.type(), grayImages.values());
        ImageMergingInputData data;
        data.panImage = panImage;
        data.sources = graySources;
        data.names = names;
//        showImageInTable(data.sources);
        ImageMergingProcessor* processor = new ImageMergingProcessor(data, this);
        QObject::connect(
                    processor, SIGNAL(processFinished(QMap<QString,cv::Mat>)),
                    this, SLOT(gotMergeResult(QMap<QString,cv::Mat>))
                    );
        executorsList << processor;
//        processor->run();

    }
    if(multichannelImages.count()>0){
        QMap<QString, cv::Mat>::const_iterator i = multichannelImages.constBegin();
        while(i != multichannelImages.constEnd()){
            QString name = i.key();
            cv::Mat image = i.value();
            cv::Mat colorSources = combineSourceMultichannerlImageIntoMatrix(panImage.cols, panImage.rows, panImage.type(), image);
            ImageMergingInputData data;
            data.panImage = panImage;
            data.sources = colorSources;
            QHash<int, QString> ChannelsStrings;
            ChannelsStrings[0] = QString("Red");
            ChannelsStrings[1] = QString("Green");
            ChannelsStrings[2] = QString("Blue");
            ChannelsStrings[3] = QString("Alpha");
            QList<QString> names;
            int channelsCount = image.channels();
            for(int i = 0; i<channelsCount; i++)
            {
                names << name+QString(" ")+ChannelsStrings[i];
            }
            data.names = names;
            i++;
            ImageMergingProcessor* processor = new ImageMergingProcessor(data, this);
            QObject::connect(
                        processor, SIGNAL(processFinished(QMap<QString,cv::Mat>)),
                        this, SLOT(gotMergeResult(QMap<QString,cv::Mat>))
                        );
            executorsList << processor;
//            processor->run();
        }
    }
    QFuture<ImageMergingProcessor*> future = QtConcurrent::mapped(executorsList, MergeResultView::runExecutor);
    QFutureWatcher<ImageMergingProcessor*>* watcher = new QFutureWatcher<ImageMergingProcessor*>();
    watcher->setFuture(future);
    QObject::connect(watcher, SIGNAL(progressValueChanged(int)), this, SLOT(progressChange(int)));
    QObject::connect(watcher, SIGNAL(finished()), this, SLOT(finished()));

}
cv::Mat MergeResultView::combineSourceImagesIntoMatrix(int cols, int rows, int type, QList<cv::Mat> sources)
{
    cv::Mat inputMatrix = cv::Mat::ones(rows*cols, sources.count()+1, type);
    cv::Mat temp;
    for(int i = 0; i<sources.count(); i++)
    {
        cv::resize(sources.at(i), temp, cv::Size(cols, rows), cv::INTER_NEAREST);
        inputMatrix.col(i+1) = temp.reshape(0, 1).t()*1;
    }
    temp.release();
    return inputMatrix;
}
cv::Mat MergeResultView::combineSourceMultichannerlImageIntoMatrix(int cols, int rows, int type, cv::Mat sourceImage){
    cv::Mat inputMatrix = cv::Mat::ones(rows*cols, sourceImage.channels()+1, type);
    cv::Mat temp;
    vector<cv::Mat> imageChannels;
    cv::split(sourceImage, imageChannels);
    int channelsCount = sourceImage.channels();
    for(int i=0; i<channelsCount; i++){
        cv::resize(imageChannels[i], temp, cv::Size(cols, rows), cv::INTER_NEAREST);
        inputMatrix.col(i+1) = temp.reshape(0, 1).t()*1;
    }
    temp.release();
    return inputMatrix;
}
void MergeResultView::gotMergeResult(QMap<QString, Mat> resultData){
    QMap<QString, cv::Mat>::const_iterator i = resultData.constBegin();
    while(i != resultData.constEnd()){
        StandardImageItem* item = new StandardImageItem(i.value(), i.key());
        this->resultModel->addItem(item);
        i++;
    }
    delete this->sender();
}
void MergeResultView::showImage(QModelIndex index){
    StandardImageItem* item = static_cast<StandardImageItem*>(resultModel->getItem(index));
    cv::Mat image = item->getCVImage();
    QString name = item->getFileName();
    cv::namedWindow(ImageHelper::convertToStdString(name), CV_WINDOW_NORMAL | CV_WINDOW_KEEPRATIO | CV_GUI_EXPANDED);
    cv::imshow(ImageHelper::convertToStdString(name), ImageHelper::RGB2BGR(image));
}
void MergeResultView::showImageInTable(Mat image){
//    MatModel* model = new MatModel(image, image.type(), this);
//    table1->setModel(model);
}
void MergeResultView::progressChange(int progress){
    spinner->movie()->start();
}
void MergeResultView::finished(){
    spinner->movie()->stop();
    spinner->setText(tr("Complete!"));
    delete this->sender();
}
void MergeResultView::save(){
    QModelIndexList selected = results->selectionModel()->selectedIndexes();
    resultModel->getItem(selected.first());
}
