#ifndef IMAGEMERGINGPROCESSOR_H
#define IMAGEMERGINGPROCESSOR_H

#include <QObject>
#include <QFuture>
#include <QFutureWatcher>
#include <QtConcurrent/QtConcurrent>
#include "imagemerginginputdata.h"
#include <opencv2/opencv.hpp>
#include <opencv2/core/cuda.hpp>

class ImageMergingProcessor : public QObject
{
    Q_OBJECT
public:
    explicit ImageMergingProcessor(ImageMergingInputData data, QObject *parent = 0);
    void run();
    static QMap<QString, cv::Mat> computeQRmerge(ImageMergingInputData data);
signals:
    void finished(QMap<QString, cv::Mat> resultData);
public slots:
    void done(QMap<QString, Mat> data);
private:
    QFuture<QMap<QString, cv::Mat> > future;
    ImageMergingInputData _data;
    QMap<QString, cv::Mat> resultData;
};

#endif // IMAGEMERGINGPROCESSOR_H
