#ifndef TASKSVIEW_H
#define TASKSVIEW_H

#include <QWidget>
#include "lib/slidingstackedwidget.h"
#include <QListView>
#include <QLayout>
#include "lib/model/standardmodel.h"
#include "QStringListModel"
#include "views/imageMerging/imagemergingview.h"
#include <QHBoxLayout>

class TasksView : public SlidingStackedWidget
{
    Q_OBJECT
public:
    explicit TasksView(QWidget *parent = 0);
    ~TasksView();
    QStringListModel* model;
    QWidget* task;
    QHBoxLayout* layout;

signals:

public slots:
    void showView(QModelIndex index);
    void back(QWidget*);
};

#endif // TASKSVIEW_H
