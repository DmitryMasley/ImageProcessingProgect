#ifndef IMAGESNAPVIEW_H
#define IMAGESNAPVIEW_H

#include <QWidget>
#include <QWebEngineView>
#include "lib/views/singleimageview.h"
#include <QGridLayout>
#include <QWebEnginePage>
#include <QPainter>
#include "helpers/viewhelper.h"
#include "controllers/imageSnap/webpageconnector.h"
#include "lib/slidingstackedwidget.h"
#include "lib/views/materialbutton.h"

class ImageSnapView : public SlidingStackedWidget
{
    Q_OBJECT
public:
    explicit ImageSnapView(QWidget *parent = 0);
    ~ImageSnapView();

signals:

public slots:
    void mainFrame_javaScriptWindowObjectCleared();
    void goToImgeView();
private:
    WebPageConnector* connector;
    QWebEngineView* webView;
    SingleImageView* mapImageView;
    SingleImageView* targetImageView;
    QImage* renderedPage=0;
    void createMapView();
    void createImagesView();
    void renderPage();
};

#endif // IMAGESNAPVIEW_H
