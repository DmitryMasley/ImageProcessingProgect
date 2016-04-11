#ifndef IMAGEMERGINGPROCESSOR_H
#define IMAGEMERGINGPROCESSOR_H

#include <QObject>
#include <QFuture>
#include <QFutureWatcher>
#include <QFutureInterface>
#include <QtConcurrent/QtConcurrent>
#include "imagemerginginputdata.h"
#include <helpers/imagehelper.h>
#include <opencv2/opencv.hpp>
#include <opencv2/core/cuda.hpp>
#include <QDialog>
#include <QGridLayout>
#include <QTableView>
#include <lib/model/matmodel.h>

class ImageMergingProcessor : public QObject
{
    Q_OBJECT
public:
    explicit ImageMergingProcessor(ImageMergingInputData data, QObject *parent = 0);
    ~ImageMergingProcessor();
    void run();
    static QMap<QString, cv::Mat> computeQRmerge(ImageMergingInputData data);
signals:
    void processFinished(QMap<QString, cv::Mat>);
public slots:
    void done();
    void done(QMap<QString, cv::Mat> data);
private:
    QFuture<QMap<QString, cv::Mat> > future;
    QFutureWatcher<QMap<QString, cv::Mat> >* watcher;
    ImageMergingInputData _data;
    QMap<QString, cv::Mat> resultData;
    void correctBritness(cv::Mat& image, cv::Mat source);
};

#endif // IMAGEMERGINGPROCESSOR_H
