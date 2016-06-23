#include "webpageconnector.h"

WebPageConnector::WebPageConnector(QObject *parent) : QObject(parent)
{

}
void WebPageConnector::mapInitialized(){
    emit this->webPageRendered();
}
