#include "mergeresultview.h"
struct inputData {
    cv::Mat sources;
    cv::Mat panImage;
    StandardImageItem* item;
    QList<QString> names;
};

cv::Mat mergeGrayImages(inputData input){

}
cv::Mat mergeMultichannelImage(inputData input){

}
MergeResultView::MergeResultView(QWidget *parent) : QDialog(parent)
{
    QGridLayout* layout = new QGridLayout(this);
    this->setLayout(layout);
    QTreeView* results = new QTreeView(this);
    viewHelper::addShadow(results);
    resultModel = new StandardImageModel(results);
    results->setModel(resultModel);

    MaterialButton* save = new MaterialButton(tr("Save"));
    save->setIcon(viewHelper::awesome->icon(fa::save));

    layout->addWidget(results, 0, 0);
    layout->addWidget(save, 1, 0);
}

MergeResultView::~MergeResultView()
{

}
void MergeResultView::run(StandardImageModel *model, Mat panImage){
    QMap<QString, cv::Mat> grayImages;
    QMap<QString, cv::Mat> multichannelImages;
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
        inputData data;
        data.panImage = panImage;
        data.sources = graySources;
        data.names = names;
    }
}
cv::Mat MergeResultView::combineSourceImagesIntoMatrix(int cols, int rows, int type, QList<cv::Mat> sources)
{
    cv::Mat inputMatrix = cv::Mat::zeros(rows*cols, sources.count()+1, type);
    cv::Mat temp;
    for(int i = 0; i<sources.count(); i++)
    {
        cv::resize(sources.at(i), temp, cv::Size(cols, rows), cv::INTER_NEAREST);
        inputMatrix.col(i+1) = temp.reshape(0, 1).t()*1;
    }
    temp.release();
    return inputMatrix;
}

