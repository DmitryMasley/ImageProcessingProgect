#ifndef VIEWHELPER_H
#define VIEWHELPER_H

#include <QObject>
#include "QtAwesome.h"

class viewHelper
{
public:
    explicit viewHelper(QObject *parent = 0);
    ~viewHelper();
    static QtAwesome* awesome;
    static void setQtAwesome(QtAwesome* a);

signals:

public slots:
};

#endif // VIEWHELPER_H
