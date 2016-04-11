#include "imagemergingprocessor.h"

ImageMergingProcessor::ImageMergingProcessor(ImageMergingInputData data, QObject *parent) : QObject(parent)
{
    _data = data;
     watcher = new QFutureWatcher<QMap<QString, cv::Mat> >();
     QObject::connect(watcher, SIGNAL(finished()), this, SLOT(done()));
}
ImageMergingProcessor::~ImageMergingProcessor(){
    delete watcher;
}

void ImageMergingProcessor::run(){
    this->done(ImageMergingProcessor::computeQRmerge(_data));
//    future = QtConcurrent::run(QThreadPool::globalInstance(), ImageMergingProcessor::computeQRmerge, _data);
//    watcher->setFuture(future);
}
QMap<QString, cv::Mat> ImageMergingProcessor::computeQRmerge(ImageMergingInputData data){
    QMap<QString, cv::Mat> results;
    int panRows = data.panImage.rows;
    int type = data.panImage.type();
    QRresult inputMatrixQR = ImageHelper::mgs_qr(data.sources);
    data.sources.release();

    // vector form pan image
    data.panImage = data.panImage.reshape(0, 1).t();
    // QR transform of pan image
    QRresult panImageQR = ImageHelper::mgs_qr(data.panImage);
    panImageQR.R.release();
    data.panImage.release();
    inputMatrixQR.Q.col(0) = panImageQR.Q.col(0)*1;
    panImageQR.Q.release();



    cv::Mat resultMatrix = inputMatrixQR.Q*inputMatrixQR.R;
    inputMatrixQR.Q.release();
    inputMatrixQR.R.release();

    resultMatrix.convertTo(resultMatrix, type);
    resultMatrix.colRange(1, resultMatrix.cols).copyTo(resultMatrix);

    for(int i = 0; i<resultMatrix.cols; i++)
    {
        cv::Mat temp;
        QString name = data.names.at(i);
        resultMatrix.col(i).copyTo(temp);
        temp = temp.reshape(0, panRows);
//        if(_UseNormalization->isChecked())
//        {
//            cv::Mat source = sourceItem->getCVImage();
//            this->correctBritness(temp, source);
//        }
        results.insert(name, temp);
    }
    return results;
}
void ImageMergingProcessor::done(QMap<QString, cv::Mat> data){
    QMap<QString, cv::Mat> resultData = data;
    emit this->processFinished(data);
}
void ImageMergingProcessor::done(){
    QMap<QString, cv::Mat> resultData = future.result();
    emit this->processFinished(resultData);
}
void ImageMergingProcessor::correctBritness(cv::Mat& image, cv::Mat source)
{
    float colRatioDb = image.cols/source.cols;
    float rowRatioDb = image.rows/source.rows;
    float val;

    if(std::modf(colRatioDb, &val)!= 0 || std::modf(rowRatioDb, &val) != 0)
    {
        return;
    }
    int colRatio = (int)(colRatioDb);
    int rowRatio = (int)(rowRatioDb);
    if(colRatio<=1 || rowRatio<=1)
    {
        return;
    }
    cv::Mat sourceConverted;
    source.convertTo(sourceConverted, CV_32F);
    int rows = source.rows;
    int cols = source.cols;
    for(int i = 0; i<rows-1; i++)
    {
        const float* Mi = sourceConverted.ptr<float>(i);
        for(int j = 0; j<cols-1; j++)
        {
            cv::Mat temp = cv::Mat(image, cv::Rect(j*colRatio, i*rowRatio, colRatio, rowRatio));
            cv::Scalar mean = cv::mean(temp);
            mean.val[0] = Mi[j]-mean.val[0];
            cv::add(temp, mean, temp);
        }
    }
}
