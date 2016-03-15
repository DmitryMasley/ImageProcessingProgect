#-------------------------------------------------
#
# Project created by QtCreator 2016-01-09T23:47:55
#
#-------------------------------------------------

QT       += core gui widgets network  webkit qml quick quickwidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SatImageManager
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    helpers/imagehelper.cpp \
    lib/slidingstackedwidget.cpp \
    views/fileslistwidget.cpp \
    views/workspace.cpp \
    lib/model/abstractitem.cpp \
    lib/model/standardmimedata.cpp \
    lib/model/standardmodel.cpp \
    lib/model/image/imageparameter.cpp \
    lib/model/image/standardimageitem.cpp \
    lib/model/image/standardimagemodel.cpp \
    controllers/workspacecontroller.cpp \
    helpers/viewhelper.cpp \
    lib/views/materialbutton.cpp \
    views/tasksview.cpp \
    views/imageMerging/imagemergingview.cpp \
    lib/views/imageitemdelegate.cpp \
    lib/model/image/imageparametersmodel.cpp \
    lib/vent.cpp \
    lib/views/singleimageview.cpp \
    views/imageMerging/mergeresultview.cpp \
    views/imageMerging/imagemergingcontroller.cpp \
    controllers/imagemergingworker.cpp

HEADERS  += mainwindow.h \
    helpers/imagehelper.h \
    lib/slidingstackedwidget.h \
    views/fileslistwidget.h \
    views/workspace.h \
    lib/model/abstractitem.h \
    lib/model/standardmimedata.h \
    lib/model/standardmodel.h \
    lib/model/image/imageparameter.h \
    lib/model/image/standardimageitem.h \
    lib/model/image/standardimagemodel.h \
    lib/metatypes.h \
    controllers/workspacecontroller.h \
    helpers/viewhelper.h \
    lib/views/materialbutton.h \
    views/tasksview.h \
    views/imageMerging/imagemergingview.h \
    lib/views/imageitemdelegate.h \
    lib/model/image/imageparametersmodel.h \
    lib/vent.h \
    lib/views/singleimageview.h \
    views/imageMerging/mergeresultview.h \
    views/imageMerging/imagemergingcontroller.h \
    controllers/imagemergingworker.h

FORMS    += mainwindow.ui
INCLUDEPATH += "C:/opencv/build/include"
LIBS += -L"C:/opencv/build-current/lib" -opencv
LIBS += "C:/opencv/build-current/lib/libopencv_calib3d300.dll.a"
LIBS += "C:/opencv/build-current/lib/libopencv_core300.dll.a"
LIBS += "C:/opencv/build-current/lib/libopencv_features2d300.dll.a"
LIBS += "C:/opencv/build-current/lib/libopencv_flann300.dll.a"
LIBS += "C:/opencv/build-current/lib/libopencv_highgui300.dll.a"
LIBS += "C:/opencv/build-current/lib/libopencv_imgcodecs300.dll.a"
LIBS += "C:/opencv/build-current/lib/libopencv_imgproc300.dll.a"
LIBS += "C:/opencv/build-current/lib/libopencv_java300.dll.a"

LIBS += "C:/opencv/build-current/lib/libopencv_ml300.dll.a"
LIBS += "C:/opencv/build-current/lib/libopencv_objdetect300.dll.a"
LIBS += "C:/opencv/build-current/lib/libopencv_photo300.dll.a"
LIBS += "C:/opencv/build-current/lib/libopencv_shape300.dll.a"
LIBS += "C:/opencv/build-current/lib/libopencv_stitching300.dll.a"
LIBS += "C:/opencv/build-current/lib/libopencv_superres300.dll.a"
LIBS += "C:/opencv/build-current/lib/libopencv_video300.dll.a"
LIBS += "C:/opencv/build-current/lib/libopencv_videoio300.dll.a"
LIBS += "C:/opencv/build-current/lib/libopencv_videostab300.dll.a"

RESOURCES += \
    resources.qrc
include(./QtAwesome/QtAwesome.pri)
