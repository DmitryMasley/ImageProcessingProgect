#ifndef IMAGEMERGINGWORKER_H
#define IMAGEMERGINGWORKER_H

#include <QObject>

class ImageMergingWorker : public QObject
{
    Q_OBJECT
public:
    explicit ImageMergingWorker(QObject *parent = 0);
    ~ImageMergingWorker();

signals:

public slots:
};

#endif // IMAGEMERGINGWORKER_H
