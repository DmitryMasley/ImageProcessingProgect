#ifndef IMAGEMERGINGCONTROLLER_H
#define IMAGEMERGINGCONTROLLER_H

#include <QObject>
#include <lib/model/image/standardimagemodel.h>
#include <helpers/imagehelper.h>
#include <opencv2/opencv.hpp>
#include <opencv2/core/cuda.hpp>
#include <QString>
#include <QImage>
#include <QIcon>
#include <QPixmap>

class ImageMergingController : public QObject
{
    Q_OBJECT
public:
    explicit ImageMergingController(StandardImageModel* model, cv::Mat panImage, QObject *parent = 0);
    ~ImageMergingController();

signals:

public slots:
};

#endif // IMAGEMERGINGCONTROLLER_H
