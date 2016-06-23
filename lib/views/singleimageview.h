#ifndef SINGLEIMAGEVIEW_H
#define SINGLEIMAGEVIEW_H
#include <QWidget>
#include <QObject>
#include <QGraphicsView>
#include <QGraphicsPixmapItem>
#include <QDropEvent>
#include <QDragMoveEvent>
#include <QWheelEvent>
#include <lib/model/standardmimedata.h>
#include <lib/model/image/standardimageitem.h>
#include <helpers/imagehelper.h>
#include <QMutableListIterator>
#include <QFileInfo>

class SingleImageView : public QGraphicsView
{
    Q_OBJECT

public:
    SingleImageView(bool gray = false, QWidget* w = 0);
    SingleImageView(QWidget* w = 0);
    ~SingleImageView();
    bool _gray=false;
    void showImage(QImage* img);
    void showImage(Mat cvImg);
    void resizeEvent(QResizeEvent *event);
    void dragEnterEvent(QDragEnterEvent * event);
    void dragMoveEvent(QDragMoveEvent *event);
    void dropEvent(QDropEvent *event);
    void wheelEvent(QWheelEvent *event);
    void fitImage();
    cv::Mat getCVImage();
    void readImage(QString fileName);
    void setZoomEnabled(bool value);
private slots:
    void fitIntoView();
private:
    bool _zoomEnabled = false;
    Mat cvImage;
    QString imageName;
    qreal h11 = 1.0;
    qreal h12 = 0;
    qreal h21 = 0;
    qreal h22 = 1.0;
    qreal minFactor = 0.001;
    qreal maxFactor = 10.0;
    double scaleFactor = 1.25;
    QImage* currentImage = 0;
    static QString fileExtentions;
    void showPreview(QImage* img);
signals:
    void imageChanged(Mat image);
    void showImageError(QString error);
};

#endif // SINGLEIMAGEVIEW_H
