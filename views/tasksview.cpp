#include "tasksview.h"

TasksView::TasksView(QWidget *parent) : SlidingStackedWidget(parent)
{
    QListView* taskList = new QListView(this);
    task = new QWidget(this);
    layout = new QHBoxLayout(task);
    task->setLayout(layout);
    this->addWidget(taskList);
    this->addWidget(task);
    taskList->setIconSize(QSize(100, 100));
    model = new QStringListModel(this);
    QStringList list;
    list << "Image Merging";
    model->setStringList(list);
    taskList->setViewMode(QListView::IconMode);
    taskList->setModel(model);
    QObject::connect(taskList, SIGNAL(clicked(QModelIndex)), this, SLOT(showView(QModelIndex)));
}

TasksView::~TasksView()
{

}
void TasksView::showView(QModelIndex index){
    QString name = model->data(index, Qt::DisplayRole).toString();
    if(name == "Image Merging"){
        ImageMergingView* view = new ImageMergingView(this);
        view->setObjectName("task");
        foreach (QWidget * w, task->findChildren<QWidget*>("task")){
            delete w;
        }
        layout->addWidget(view);
        this->slideInNext();
        QObject::connect(view, SIGNAL(back(QWidget*)), this, SLOT(back(QWidget*)));
    }
}
void TasksView::back(QWidget * widget){
    this->slideInPrev();
}

