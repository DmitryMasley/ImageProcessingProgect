#include "materialbutton.h"

MaterialButton::MaterialButton(QString text, QWidget *parent) : QPushButton(text, parent)
{
    shadow = new QGraphicsDropShadowEffect(this);
    shadow->setXOffset(0);
    shadow->setYOffset(2);
    shadow->setBlurRadius(10);
    this->setGraphicsEffect(shadow);
    QObject::connect(this, SIGNAL(pressed()), this, SLOT(animatePressed()));
        QObject::connect(this, SIGNAL(released()), this, SLOT(animateReleased()));
}

MaterialButton::~MaterialButton()
{

}
void MaterialButton::animatePressed(){
    QPropertyAnimation* animation = new QPropertyAnimation(shadow, "offset");
    animation->setDuration(200);
    animation->setStartValue(shadow->offset());
    animation->setEndValue(QPointF(0, 4));
    animation->start(QPropertyAnimation::DeleteWhenStopped);

}
void MaterialButton::animateReleased(){
    QPropertyAnimation* animation = new QPropertyAnimation(shadow, "offset");
    animation->setDuration(200);
    animation->setStartValue(QPointF(0, 4));
    animation->setEndValue(QPointF(0, 3));
    animation->start(QPropertyAnimation::DeleteWhenStopped);

}
void MaterialButton::enterEvent(QEvent *e){
    shadow->setYOffset(3);
}
void MaterialButton::leaveEvent(QEvent *e){
    shadow->setYOffset(2);
}

