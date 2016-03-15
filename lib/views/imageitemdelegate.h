#ifndef IMAGEITEMDELEGATE_H
#define IMAGEITEMDELEGATE_H

#include <QStyledItemDelegate>
#include <QAction>
#include <opencv2/imgproc/imgproc.hpp> // Gaussian Blur
#include <opencv2/core/core.hpp> // Basic OpenCV structures (cv::Mat, Scalar)
#include <opencv2/highgui/highgui.hpp> // OpenCV window I/O
#include <opencv2/imgproc/imgproc_c.h>
#include <opencv2/core/mat.hpp>
#include "helpers/imagehelper.h"
#include <helpers/viewhelper.h>
#include <QPainter>
#include <lib/metatypes.h>

class ImageItemDelegate : public QStyledItemDelegate
{
    Q_OBJECT
public:
    explicit ImageItemDelegate(QWidget *parent = 0);
    ~ImageItemDelegate();
    void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const Q_DECL_OVERRIDE;


signals:

public slots:
};

#endif // IMAGEITEMDELEGATE_H
