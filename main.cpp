#include "mainwindow.h"
#include <QApplication>
#include <QtAwesome.h>
#include "helpers/viewhelper.h"
#include <QWebSettings>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QFontDatabase database;
    int id = database.addApplicationFont(":/resource/fonts/FontAwesome.otf");
    viewHelper::setQtAwesome(new QtAwesome(QApplication::instance()));
    viewHelper::awesome->initFontAwesome();
    QWebSettings::globalSettings()->setAttribute(QWebSettings::DeveloperExtrasEnabled, true);
    MainWindow w;

    w.show();
    QFile file(":/stylesheets/stylesheet.css");
        if(file.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QByteArray data = file.readAll();
            a.setStyleSheet(data);
            w.setStyleSheet(data);
            file.close();
        }


    return a.exec();
}
