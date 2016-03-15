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
QStringList viewHelper::getImages(){
     QStringList fileNames = QFileDialog::getOpenFileNames(QApplication::topLevelWidgets().first(), "Open image",  "//", "Images (*.jpg *.png *.tif *.tiff *.jpeg)");
     return fileNames;
}
void viewHelper::addShadow(QWidget* widget){
    QGraphicsDropShadowEffect* shadow = new QGraphicsDropShadowEffect(widget);
    shadow->setXOffset(0);
    shadow->setYOffset(2);
    shadow->setBlurRadius(10);
    widget->setGraphicsEffect(shadow);
}
