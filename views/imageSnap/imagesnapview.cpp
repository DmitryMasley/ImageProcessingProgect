#include "imagesnapview.h"

ImageSnapView::ImageSnapView(QWidget *parent) : QWidget(parent)
{
    webView = new QWebView(this);
    webView->load(QUrl("https://www.google.com.ua/maps"));
}
