#include "viewhelper.h"
QtAwesome* viewHelper::awesome = 0;
viewHelper::viewHelper(QObject *parent)
{

}

viewHelper::~viewHelper()
{

}
void viewHelper::setQtAwesome(QtAwesome *a){
    awesome = a;
}
