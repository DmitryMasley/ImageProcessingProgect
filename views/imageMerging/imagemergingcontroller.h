#ifndef IMAGEMERGINGCONTROLLER_H
#define IMAGEMERGINGCONTROLLER_H

#include <QObject>

class ImageMergingController : public QObject
{
    Q_OBJECT
public:
    explicit ImageMergingController(QObject *parent = 0);
    ~ImageMergingController();

signals:

public slots:
};

#endif // IMAGEMERGINGCONTROLLER_H
