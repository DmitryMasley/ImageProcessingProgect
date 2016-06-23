#ifndef VENT_H
#define VENT_H

#include <QObject>
#include <QVariant>
#include <QString>


class Vent : public QObject
{
    Q_OBJECT
public:
    static Vent* getInstance();
    ~Vent();
private:
     static bool flag;
     static Vent* instance;
     Vent(){

     }
signals:
    void TASKS_BACK_TO_LIST(QWidget*);
    void dispatch(QString eventName, QVariant data);
public slots:

};


#endif // VENT_H
