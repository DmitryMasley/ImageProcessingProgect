#ifndef IMAGEMERGINGVIEW_H
#define IMAGEMERGINGVIEW_H

#include <QWidget>
#include "lib/views/materialbutton.h"
#include <QGridLayout>
#include "helpers/viewhelper.h"
#include <QApplication>
#include <lib/vent.h>
#include <QTreeView>
#include <QTableView>
#include <QLabel>
#include <lib/views/singleimageview.h>
#include <lib/model/image/standardimagemodel.h>
#include "./mergeresultview.h"
#include <lib/model/matmodel.h>

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
    void addImage();
    void removeImage();
    void getResult();
private:
    StandardImageModel* sourceModel;
    SingleImageView* panImageView;
};

#endif // IMAGEMERGINGVIEW_H
