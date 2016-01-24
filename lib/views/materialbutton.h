#ifndef MATERIALBUTTON_H
#define MATERIALBUTTON_H

#include <QPushButton>
#include <QGraphicsDropShadowEffect>
#include <QPropertyAnimation>

class MaterialButton : public QPushButton
{
    Q_OBJECT
public:
    explicit MaterialButton(QString text, QWidget *parent = 0);
    QGraphicsDropShadowEffect* shadow;
    ~MaterialButton();

signals:

public slots:
    void animatePressed();
    void animateReleased();
    void enterEvent(QEvent *);
    void leaveEvent(QEvent *);
};

#endif // MATERIALBUTTON_H
