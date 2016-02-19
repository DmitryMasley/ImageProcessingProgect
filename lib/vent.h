#ifndef VENT_H
#define VENT_H

#include <QObject>

class Vent : public QObject
{
    Q_OBJECT
public:
    explicit Vent(QObject *parent = 0);
    ~Vent();

signals:

public slots:
};

#endif // VENT_H
