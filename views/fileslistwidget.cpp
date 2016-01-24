#include "fileslistwidget.h"

filesListWidget::filesListWidget(QWidget *parent) : QWidget(parent)
{
    QVBoxLayout* layout = new QVBoxLayout(this);
    this->setLayout(layout);

    QTreeView* dirTree = new QTreeView(this);
    dirTree->setObjectName(QString("dirTree"));
    dirTree->setMaximumHeight(maxDirTreeHeight);
    QFileSystemModel* treeModel = this->getTreeFileSystemModel();
    dirTree->setModel(treeModel);
    layout->addWidget(dirTree);

    QListView* filesList = new QListView(this);
    filesList->setIconSize(QSize(70, 70));
    filesList->setViewMode(QListView::IconMode);
    filesList->setDragEnabled(true);
    filesList->setObjectName(QString("filesList"));
    filesList->setModel(getListFileSystemModel());
    layout->addWidget(filesList);

    QObject::connect(dirTree->selectionModel(), SIGNAL(currentChanged(QModelIndex,QModelIndex)), this, SLOT(dirTreeSelectionChanged(QModelIndex, QModelIndex)));

    dirTree->setCurrentIndex(treeModel->index(QDir::currentPath()));
}

filesListWidget::~filesListWidget()
{

}
QStringList filesListWidget::getFileNameFilters(){
    QStringList filters;
    filters << "*.jpeg"
            << "*.jpg"
            << "*.png"
            << "*.tiff"
            << "*.tif";
    return filters;
}
QFileSystemModel* filesListWidget::getTreeFileSystemModel(){
     QFileSystemModel* model = new QFileSystemModel();
     model->setRootPath(QDir::currentPath());
     model->setFilter(QDir::Dirs);
     return model;
}
QFileSystemModel* filesListWidget::getListFileSystemModel(){
    QFileSystemModel* model = new QFileSystemModel();
    model->setRootPath(QDir::currentPath());
    model->setNameFilters(this->getFileNameFilters());
    model->setNameFilterDisables(false);
    model->setFilter(QDir::Files);
    return model;
}

void filesListWidget::expandDirTree(){
    QTreeView* view = this->getDirTreeView();
    QPropertyAnimation* anim = new QPropertyAnimation(view, "maximumHeight", this);
    anim->setDuration(1000);
    anim->setEndValue(view->maximumHeight());
    anim->setStartValue(maxDirTreeHeight);
    anim->setEasingCurve(QEasingCurve::InBack);
    anim->start();

}
void filesListWidget::collapseDirTree(){
    QTreeView* view = this->getDirTreeView();
    QPropertyAnimation* anim = new QPropertyAnimation(view, "maximumHeight", this);
    anim->setDuration(1000);
    anim->setEndValue(0);
    anim->setStartValue(view->maximumHeight());
    anim->setEasingCurve(QEasingCurve::InBack);
    anim->start();
}
void filesListWidget::dirTreeSelectionChanged(QModelIndex selected, QModelIndex deselected){
    QTreeView* treeView = getDirTreeView();
    QFileSystemModel* model = static_cast<QFileSystemModel*>(treeView->model());
    QListView* list = this->getFileListView();
    QFileSystemModel* lisModel = static_cast<QFileSystemModel*>(list->model());
    list->setRootIndex(lisModel->setRootPath(model->fileInfo(selected).absoluteFilePath()));
}

QTreeView* filesListWidget::getDirTreeView(){
     return this->findChild<QTreeView*>(QString("dirTree"));
}
QListView* filesListWidget::getFileListView(){
     return this->findChild<QListView*>(QString("filesList"));
}

