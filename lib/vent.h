#ifndef VENT_H
#define VENT_H

#include <QObject>


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
public slots:

};


#endif // VENT_H
