#ifndef STANDARDMODEL_H
#define STANDARDMODEL_H

#include <QObject>
#include <QAbstractItemModel>
#include "abstractitem.h"
#include <QModelIndex>
#include "standardmimedata.h"
#include <qstringlist.h>
#include <QMimeData>
#include <QFileInfo>
#include <QUrl>
struct InsertPoint
{
    int row;
    int column;
    QModelIndex parent;
};
class StandardModel : public QAbstractItemModel
{
    Q_OBJECT
public:
    explicit StandardModel(QObject *parent = 0);
    explicit StandardModel(AbstractItem * rootObj, QObject *parent = 0);
    explicit StandardModel(QStringList headers, QObject *parent = 0);
    Q_PROPERTY(AbstractItem* root READ root WRITE setRoot NOTIFY rootChanged)
    AbstractItem* root() const;
    void setRoot(AbstractItem *rootObj);

    // virtual from QAbstractItemModel
    QVariant data(const QModelIndex &index, int role) const;
    QVariant headerData(int section, Qt::Orientation orientation,
                        int role = Qt::DisplayRole) const;
    QModelIndex index(int row, int column,
                      const QModelIndex &parent = QModelIndex()) const;
    QModelIndex parent(const QModelIndex &index) const;
    int rowCount(const QModelIndex &parent = QModelIndex()) const;
    int columnCount(const QModelIndex &parent = QModelIndex()) const;
    bool setData ( const QModelIndex & index, const QVariant & value, int role = Qt::EditRole );
    bool setItemData(const QModelIndex &index, const QMap<int, QMap<int, QVariant> > &data);
    bool insertRows(int position, int rows, const QModelIndex &parent = QModelIndex());
    bool removeRows(int position, int rows, const QModelIndex &parent = QModelIndex());
    virtual QStringList mimeTypes() const;
    virtual QMimeData* mimeData(const QModelIndexList &indexes) const;
    QString getItemClassName() const;
    virtual bool dropMimeData(const QMimeData *data, Qt::DropAction action, int row, int column, const QModelIndex &parent);
    Qt::DropActions supportedDropActions() const;
    virtual bool canDropMimeData(const QMimeData * data,
                                             Qt::DropAction action,
                                             int row,
                                             int column,
                                             const QModelIndex & parent) const;
    QModelIndexList virtual parseDropData(QModelIndexList indexes);
    AbstractItem *getItem(const QModelIndex& index) const;
    void insertItem(int row, AbstractItem* itemToCopy, QModelIndex parent);
    void empty();
    void addItem(AbstractItem* item, AbstractItem* parent = 0);
    Qt::ItemFlags flags(const QModelIndex &index) const;
    void removeItem(QModelIndex item);
    bool canAcceptFiles() const;
    void setCanAcceptFiles(bool value);
protected:
    InsertPoint findParentForDrop(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex parent);
    void addCustomData(QMimeData* data, const QModelIndexList indexes) const;
    virtual AbstractItem* createItem();
    virtual bool readFiles(QList<QUrl> files);
private:
    AbstractItem* _root = 0;
    bool _canAcceptFiles = false;
signals:
    void rootChanged(QObject* root);
public slots:

};

#endif // STANDARDMODEL_H
