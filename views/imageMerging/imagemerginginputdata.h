#ifndef IMAGEMERGINGINPUTDATA_H
#define IMAGEMERGINGINPUTDATA_H
#include <QList>
#include <QString>
#include <lib/model/image/standardimageitem.h>
#include <opencv2/core.hpp>

struct ImageMergingInputData {
    cv::Mat sources;
    cv::Mat panImage;
    StandardImageItem* item;
    QList<QString> names;
};

#endif // IMAGEMERGINGINPUTDATA_H
