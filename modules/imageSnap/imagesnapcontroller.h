#ifndef IMAGESNAPCONTROLLER_H
#define IMAGESNAPCONTROLLER_H

#include "lib/vent.h"

#include <QObject>

class imageSnapController : public QObject
{
    Q_OBJECT
public:
    explicit imageSnapController(QObject *parent = 0);

signals:

public slots:
};

#endif // IMAGESNAPCONTROLLER_H
