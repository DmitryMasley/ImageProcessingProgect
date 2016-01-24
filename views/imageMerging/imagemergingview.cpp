#include "imagemergingview.h"

ImageMergingView::ImageMergingView(QWidget *parent) : QWidget(parent)
{
    MaterialButton* button = new MaterialButton(tr("Back"), this);
    QGridLayout* layout = new QGridLayout(this);
    this->setLayout(layout);
    layout->addWidget(button, 0, 0, 1, 2);
    button->setSizePolicy(QSizePolicy());
    QWidget* content = new QWidget(this);
    layout->addWidget(content);
    QObject::connect(button, SIGNAL(clicked()), this, SLOT(goBack()));
}

ImageMergingView::~ImageMergingView()
{

}
void ImageMergingView::goBack(){
    emit back(this);
}

