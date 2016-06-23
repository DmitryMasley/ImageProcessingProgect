#ifndef WEBPAGECONNECTOR_H
#define WEBPAGECONNECTOR_H

#include <QObject>

class WebPageConnector : public QObject
{
    Q_OBJECT
public:
    explicit WebPageConnector(QObject *parent = 0);
    Q_INVOKABLE void mapInitialized();
signals:
    void setCenterCoordinates(float lat, float lgt);
    void webPageRendered();
public slots:
};

#endif // WEBPAGECONNECTOR_H
