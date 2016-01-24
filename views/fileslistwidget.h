#ifndef FILESLISTWIDGET_H
#define FILESLISTWIDGET_H

#include <QWidget>
#include <QTreeView>
#include <QListView>
#include <QFileSystemModel>
#include <QVBoxLayout>
#include <QPropertyAnimation>

class filesListWidget : public QWidget
{
    Q_OBJECT
public:
    explicit filesListWidget(QWidget *parent = 0);
    ~filesListWidget();
    QStringList getFileNameFilters();
    QFileSystemModel* getTreeFileSystemModel();
    QFileSystemModel* getListFileSystemModel();
    QTreeView* getDirTreeView();
    QListView* getFileListView();

signals:

public slots:
    void collapseDirTree();
    void expandDirTree();
    void dirTreeSelectionChanged(QModelIndex selected, QModelIndex deselected);
private:
    int maxDirTreeHeight=250;
};

#endif // FILESLISTWIDGET_H
