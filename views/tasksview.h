#ifndef TASKSVIEW_H
#define TASKSVIEW_H

#include <QWidget>
#include "lib/slidingstackedwidget.h"
#include <QListView>
#include <QTreeView>
#include <QLayout>
#include "lib/model/standardmodel.h"
#include "QStringListModel"
#include "views/imageMerging/imagemergingview.h"
#include "views/imageSnap/imagesnapview.h"
#include <QHBoxLayout>
#include <helpers/viewhelper.h>
#include <lib/vent.h>
#include <QPainter>
#include <QRegion>
#include <QRect>
class TasksView : public SlidingStackedWidget
{
    Q_OBJECT
public:
    explicit TasksView(QWidget *parent = 0);
    ~TasksView();
    QWidget* task;
    QGridLayout* layout;
    enum TasksEnum {
        IMAGE_MERGING = 0,
        IMAGE_PROPERTIES = 1,
        IMAGE_SNAP = 2
    };
private:
    StandardModel* getListModel();
    void initTasksList();
    QIcon getImageMergingIcon();
    void addItemToModel(StandardModel* model, QIcon icon, QString name, TasksEnum type);

signals:

public slots:
    void showView(QModelIndex index);
    void back();
};

#endif // TASKSVIEW_H
