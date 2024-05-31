#include "imagesnapview.h"

ImageSnapView::ImageSnapView(QWidget *parent) : SlidingStackedWidget(parent)
{
//    m_animationtype = QEasingCurve::OutExpo;
    setAnimation(QEasingCurve::OutExpo);
    setVerticalMode(true);
    this->createMapView();
    this->createImagesView();
    // this->createResultView();

}
ImageSnapView::~ImageSnapView(){
    if(renderedPage != 0){
        delete renderedPage;
    }
}
void ImageSnapView::createMapView(){

    QWidget* view = new QWidget(this);
    this->addWidget(view);

    QGridLayout* layout = new QGridLayout(this);
    view->setLayout(layout);

    connector = new WebPageConnector(this);
    webView = new QWebEngineView(this);

    layout->addWidget(webView, 0, 0, 1, 2);
    MaterialButton* button = new MaterialButton(QString("Select Image"));
    button->setIcon(viewHelper::awesome->icon(fa::arrowdown));
    layout->addWidget(button, 1, 1, 1, 1);
    button->setSizePolicy(QSizePolicy());

    webView->load(QUrl("qrc:/views/imageSnap/index.html"));
    QObject::connect(button, SIGNAL(clicked(bool)), this, SLOT(goToImgeView()));

    // webView->page()->addToJavaScriptWindowObject("connector", connector);
}
void ImageSnapView::goToImgeView(){
    this->slideInNext();
    this->renderPage();
}

void ImageSnapView::createImagesView(){
    QWidget* view = new QWidget(this);
    this->addWidget(view);

    QGridLayout* layout = new QGridLayout(this);
    view->setLayout(layout);


    MaterialButton* button = new MaterialButton(QString("Back to Map"));
    layout->addWidget(button, 0, 1, 1, 1, Qt::AlignRight);
    button->setSizePolicy(QSizePolicy());
    button->setIcon(viewHelper::awesome->icon(fa::arrowup));

    mapImageView = new SingleImageView(this);
    layout->addWidget(mapImageView, 1, 0, 1, 1);

    targetImageView = new SingleImageView(this);
    layout->addWidget(targetImageView, 1, 1, 1, 1);

    MaterialButton* nextButton = new MaterialButton(QString("Match Images"));
    layout->addWidget(nextButton, 2, 1, 1, 1, Qt::AlignRight);
    nextButton->setSizePolicy(QSizePolicy());
    nextButton->setIcon(viewHelper::awesome->icon(fa::arrowdown));

    QObject::connect(button, SIGNAL(clicked(bool)), this, SLOT(slideInPrev()));
}

void ImageSnapView::mainFrame_javaScriptWindowObjectCleared() {
    // webView->page()->mainFrame()->addToJavaScriptWindowObject("connector", connector);
}
void ImageSnapView::renderPage(){
    QWebEnginePage* frame = webView->page();
    if(renderedPage != 0){
        delete renderedPage;
    }
    renderedPage = new QImage(webView->size(), QImage::Format::Format_ARGB32) ;
    QPainter painter(renderedPage);
    // TODO descide what to do with it
    // frame->render(&painter);
    painter.end();
    mapImageView->showImage(renderedPage);
}
