#include "imageitemdelegate.h"

ImageItemDelegate::ImageItemDelegate(QWidget *parent) : QStyledItemDelegate(parent)
{

}

ImageItemDelegate::~ImageItemDelegate()
{

}
void ImageItemDelegate::paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const {
    QStyledItemDelegate::paint(painter, option, index);
}

