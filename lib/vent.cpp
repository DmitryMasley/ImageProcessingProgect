#include "vent.h"
bool Vent::flag = false;
Vent* Vent::instance = NULL;

Vent::~Vent()
{
    flag = false;
}

Vent* Vent::getInstance(){
    if(!flag){
        instance = new Vent();
        flag = true;
    }
    return instance;
}
