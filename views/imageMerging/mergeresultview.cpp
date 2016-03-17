#include "mergeresultview.h"

cv::Mat mergeGrayImages(ImageMergingInputData input){

}
cv::Mat mergeMultichannelImage(ImageMergingInputData input){

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
        ImageMergingInputData data;
        data.panImage = panImage;
        data.sources = graySources;
        data.names = names;
        ImageMergingProcessor processor(data, this);
        QObject::connect(
                    &processor, SIGNAL(finished(QMap<QString, cv::Mat> resultData)),
                    this, SLOT(gotMergeResult(QMap<QString,cv::Mat>))
                    );
        processor.run();

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
        }
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
cv::Mat MergeResultView::combineSourceMultichannerlImageIntoMatrix(int cols, int rows, int type, cv::Mat sourceImage){
    cv::Mat inputMatrix = cv::Mat::zeros(rows*cols, sourceImage.channels()+1, type);
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
    resultData;
}
