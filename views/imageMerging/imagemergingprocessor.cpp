#include "imagemergingprocessor.h"

ImageMergingProcessor::ImageMergingProcessor(ImageMergingInputData data, QObject *parent) : QObject(parent)
{
    _data = data;
}
void ImageMergingProcessor::run(){
    QFutureWatcher<QMap<QString, cv::Mat> > watcher;
    future = QtConcurrent::run(QThreadPool::globalInstance(), ImageMergingProcessor::computeQRmerge, _data);
    watcher.setFuture(future);
    QObject::connect(&watcher, SIGNAL(finished(QMap<QString, cv::Mat>)), this, SLOT(done(QMap<QString, cv::Mat>)));
}
QMap<QString, cv::Mat> ImageMergingProcessor::computeQRmerge(ImageMergingInputData data){
    QMap<QString, cv::Mat> results;
    return results;
}
void ImageMergingProcessor::done(QMap<QString, cv::Mat> data){
    QMap<QString, cv::Mat> resultData = data;
    emit this->finished(data);
}
