#ifndef VIEWHELPER_H
#define VIEWHELPER_H

#include <QObject>
#include "QtAwesome.h"
#include <QFileDialog>
#include <QWidget>
#include <QStringList>
#include <QApplication>
#include <QGraphicsDropShadowEffect>

class viewHelper
{
public:
    explicit viewHelper(QObject *parent = 0);
    ~viewHelper();
    static QtAwesome* awesome;
    static void setQtAwesome(QtAwesome* a);
    static QStringList getImages();
    static void addShadow(QWidget* widget);
signals:

public slots:
};

#endif // VIEWHELPER_H
