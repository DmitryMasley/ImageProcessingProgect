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


}
void MaterialButton::animateReleased(){


}
void MaterialButton::enterEvent(QEvent *e){
    QPropertyAnimation* animation = new QPropertyAnimation(shadow, "offset");
    animation->setDuration(200);
    animation->setStartValue(shadow->offset());
    animation->setEndValue(QPointF(0, 4));
    animation->start(QPropertyAnimation::DeleteWhenStopped);
}
void MaterialButton::leaveEvent(QEvent *e){
    QPropertyAnimation* animation = new QPropertyAnimation(shadow, "offset");
    animation->setDuration(200);
    animation->setStartValue(QPointF(0, 4));
    animation->setEndValue(QPointF(0, 2));
    animation->start(QPropertyAnimation::DeleteWhenStopped);
}

