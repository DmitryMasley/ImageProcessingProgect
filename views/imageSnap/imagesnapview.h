#ifndef IMAGESNAPVIEW_H
#define IMAGESNAPVIEW_H

#include <QWidget>
#include <QWebView>
#include "lib/views/singleimageview.h"

class ImageSnapView : public QWidget
{
    Q_OBJECT
public:
    explicit ImageSnapView(QWidget *parent = 0);

signals:

public slots:
private:
    QWebView* webView;
    SingleImageView* imageView;
};

#endif // IMAGESNAPVIEW_H
