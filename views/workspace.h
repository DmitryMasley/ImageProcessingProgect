#ifndef WORKSPACE_H
#define WORKSPACE_H

#include <QApplication>
#include <QWidget>
#include <QGridLayout>
#include <QTreeView>
#include <QPushButton>
#include <QFileDialog>
#include "lib/model/image/standardimagemodel.h"
#include "helpers/imagehelper.h"
#include <QGraphicsDropShadowEffect>
#include "lib/views/materialbutton.h"
#include "lib/views/imageitemdelegate.h"
class Workspace : public QWidget
{
    Q_OBJECT
public:
    explicit Workspace(QWidget *parent = 0);
    QTreeView* imageTreeView;
    StandardImageModel* mainModel;
    MaterialButton* addImageButton;
    MaterialButton* removeImageBtn;
    ~Workspace();

signals:
    void ImageAdded(cv::Mat, QString);
public slots:
    void addImage();
    void showImage(QModelIndex);
    void removeSelectedImage();
private:
    void initEvents();
};

#endif // WORKSPACE_H
