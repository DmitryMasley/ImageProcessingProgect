#ifndef IMAGEMERGINGVIEW_H
#define IMAGEMERGINGVIEW_H

#include <QWidget>
#include "lib/views/materialbutton.h"
#include <QGridLayout>
#include "helpers/viewhelper.h"

class ImageMergingView : public QWidget
{
    Q_OBJECT
public:
    explicit ImageMergingView(QWidget *parent = 0);
    ~ImageMergingView();

signals:
    void back(QWidget* widget);
public slots:
    void goBack();
};

#endif // IMAGEMERGINGVIEW_H
