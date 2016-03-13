#ifndef SINGLEIMAGEVIEW_H
#define SINGLEIMAGEVIEW_H

#include <QObject>

class singleImageView : public QObject
{
    Q_OBJECT
public:
    explicit singleImageView(QObject *parent = 0);
    ~singleImageView();

signals:

public slots:
};

#endif // SINGLEIMAGEVIEW_H
