#include "tasksview.h"

TasksView::TasksView(QWidget *parent) : SlidingStackedWidget(parent)
{
    m_animationtype = QEasingCurve::OutExpo;
    this->initTasksList();

    task = new QWidget(this);
    layout = new QGridLayout(this);
    task->setLayout(layout);
    MaterialButton* button = new MaterialButton(tr("Back"), this);
    button->setIcon(viewHelper::awesome->icon(fa::arrowleft));
    layout->addWidget(button, 0, 0, 1, 2);
    layout->setContentsMargins(10, 10, 0, 0);
    // set auto size by inner text
    button->setSizePolicy(QSizePolicy());

    QWidget* content = new QWidget(this);
    layout->addWidget(content);

    QObject::connect(button, SIGNAL(clicked()), this, SLOT(back()));
    this->addWidget(task);

}

TasksView::~TasksView()
{


}
void TasksView::initTasksList(){
    QListView* taskList = new QListView(this);
    this->addWidget(taskList);

    taskList->setIconSize(QSize(100, 100));
    taskList->setViewMode(QListView::IconMode);
    taskList->setDragDropMode(QAbstractItemView::NoDragDrop);
    taskList->setSpacing(20);
    taskList->setSelectionMode(QAbstractItemView::NoSelection);
    taskList->setModel(this->getListModel());
    taskList->setStyleSheet("QListView::item {padding:10px; border:1px solid #BDBDBD;cursor:pointer}QListView::item:hover {background-color:'lightgray';}");

    QObject::connect(taskList, SIGNAL(clicked(QModelIndex)), this, SLOT(showView(QModelIndex)));
}

void TasksView::showView(QModelIndex index){
    QVariant type = index.model()->data(index, Qt::UserRole);
    TasksEnum typeName = static_cast<TasksEnum>(type.toInt());
    foreach (QWidget * w, task->findChildren<QWidget*>("task")){
        w->close();
        delete w;
    }
    QWidget* view;
    switch(typeName){
    case TasksView::IMAGE_MERGING:
        view = new ImageMergingView(this);
        break;
    case TasksView::IMAGE_PROPERTIES:
        view = new ImageSnapView(this);
        break;
    case TasksView::IMAGE_SNAP:
        view = new ImageSnapView(this);
        break;
    }
    view->setObjectName("task");
    layout->addWidget(view);
    this->slideInNext();
}
void TasksView::back(){
    this->slideInPrev();
}
StandardModel* TasksView::getListModel(){
    StandardModel* model = new StandardModel(this);
    model->root()->setData(0, tr("Task"),  Qt::DisplayRole);

    // Image Merging
    this->addItemToModel(model, this->getImageMergingIcon(), tr("Image Merging"),  TasksView::IMAGE_MERGING);

    //
    // Image Properties
    QVariantMap options;
    options.insert("color" , QColor("#4A148C"));
    QIcon propertiesIcon = viewHelper::awesome->icon(fa::barcharto, options);
    this->addItemToModel(model, propertiesIcon, tr("Image Properties"),  TasksView::IMAGE_PROPERTIES);
    //
    // Snap
    QVariantMap snapOptions;
    snapOptions.insert("color" , QColor("#8BC34A"));
    QIcon snapIcon = viewHelper::awesome->icon(fa::map, snapOptions);
    this->addItemToModel(model, snapIcon, tr("Image Snap"),  TasksView::IMAGE_SNAP);
    //
    return model;
}
QIcon TasksView::getImageMergingIcon(){
    QImage mergingIcon = QImage(100, 100,  QImage::Format_ARGB32);
    QPainter painter(&mergingIcon);
    painter.setCompositionMode(QPainter::CompositionMode_Source);
    painter.fillRect(mergingIcon.rect(), Qt::transparent);
    QVariantMap firstOptions;
    firstOptions.insert("color" , QColor("#D32F2F"));
    painter.setCompositionMode(QPainter::CompositionMode_SourceOver);
    painter.drawImage(0, 0, viewHelper::awesome->icon(fa::pictureo, firstOptions).pixmap(80, 80).toImage());
    painter.setCompositionMode(QPainter::CompositionMode_SourceOver);
    QVariantMap secondOptions;
    secondOptions.insert("color" , QColor("#0D47A1"));
    painter.drawImage(20, 20, viewHelper::awesome->icon(fa::pictureo, secondOptions).pixmap(80, 80).toImage());
    return QIcon(QPixmap::fromImage(mergingIcon));

}
void TasksView::addItemToModel(StandardModel* model, QIcon icon, QString name, TasksEnum type){
    AbstractItem* item = new AbstractItem(model->root());
    item->setData(0, icon, Qt::DecorationRole);
    item->setData(0, name,  Qt::DisplayRole);
    item->setData(0, QVariant(static_cast<int>(type)), Qt::UserRole);
    model->addItem(item);
}
