#-------------------------------------------------
#
# Project created by QtCreator 2016-01-09T23:47:55
#
#-------------------------------------------------

QT       += core gui widgets network  webkit qml quick quickwidgets concurrent webkitwidgets

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
    controllers/imagemergingworker.cpp \
    views/imageMerging/imagemergingprocessor.cpp \
    lib/model/matmodel.cpp \
    lib/model/matmodelitem.cpp \
    views/imageSnap/imagesnapview.cpp \
    controllers/imageSnap/webpageconnector.cpp

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
    controllers/imagemergingworker.h \
    views/imageMerging/imagemergingprocessor.h \
    views/imageMerging/imagemerginginputdata.h \
    lib/model/matmodel.h \
    lib/model/matmodelitem.h \
    views/imageSnap/imagesnapview.h \
    controllers/imageSnap/webpageconnector.h \
    modules/imageSnap/imagesnapcontroller.h

FORMS    += mainwindow.ui
win32 {
    INCLUDEPATH += "C:/opencv/build/include"
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
}
macx {
    LIBS += -stdlib=libc++

    QMAKE_CXXFLAGS += -stdlib=libc++
    QMAKE_CXXFLAGS += -libstd=libc++
    QMAKE_CXXFLAGS += -std=c++11
    QMAKE_CXXFLAGS += -mmacosx-version-min=10.9
    QMAKE_LFLAGS += -mmacosx-version-min=10.9
    INCLUDEPATH += "/usr/local/Cellar/opencv3/3.1.0_1/include"
    LIBS += -L/usr/local/Cellar/opencv3/3.1.0_1/lib

    LIBS += "/usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_calib3d.3.1.0.dylib"
    LIBS += "/usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_core.3.1.0.dylib"
    LIBS += "/usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_features2d.3.1.0.dylib"
    LIBS += "/usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_flann.3.1.0.dylib"
    LIBS += "/usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_highgui.3.1.0.dylib"
    LIBS += "/usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_imgcodecs.3.1.0.dylib"
    LIBS += "/usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_imgproc.3.1.0.dylib"
#    LIBS += "/usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_java.3.1.0.dylib"

    LIBS += "/usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_ml.3.1.0.dylib"
    LIBS += "/usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_objdetect.3.1.0.dylib"
#    LIBS += "/usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_photo.3.3.1.0.dylib"
    LIBS += "/usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_shape.3.1.0.dylib"
    LIBS += "/usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_stitching.3.1.0.dylib"
    LIBS += "/usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_superres.3.1.0.dylib"
    LIBS += "/usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_video.3.1.0.dylib"
    LIBS += "/usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_videoio.3.1.0.dylib"
    LIBS += "/usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_videostab.3.1.0.dylib"
    LIBS += "/usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_imgcodecs.3.1.0.dylib"

    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_cudaimgproc.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_cudaobjdetect.3.1.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_reg.3.1.0.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_features2d.3.1.0.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_cudev.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_cudev.3.1.0.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_imgproc.3.1.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_cudaarithm.3.1.0.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_bgsegm.3.1.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_cudaobjdetect.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_optflow.3.1.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_ximgproc.3.1.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_aruco.3.1.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_surface_matching.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_tracking.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_cudalegacy.3.1.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_line_descriptor.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_xobjdetect.3.1.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_flann.3.1.0.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_imgcodecs.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_dpm.3.1.0.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_xphoto.3.1.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_line_descriptor.3.1.0.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_bioinspired.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_stereo.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_text.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_aruco.3.1.0.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_plot.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_xobjdetect.3.1.0.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_ts.a
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_bioinspired.3.1.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_cudastereo.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_cudafilters.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_cudafilters.3.1.0.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_superres.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_xobjdetect.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_highgui.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_face.3.1.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_datasets.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_cudaobjdetect.3.1.0.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_reg.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_stitching.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_text.3.1.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_videoio.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_objdetect.3.1.0.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_calib3d.3.1.0.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_optflow.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_ximgproc.3.1.0.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_rgbd.3.1.0.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_objdetect.3.1.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_stitching.3.1.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_cudafeatures2d.3.1.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_cudalegacy.3.1.0.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_videostab.3.1.0.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_video.3.1.0.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_xfeatures2d.3.1.0.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_cvv.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_cudastereo.3.1.0.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_stereo.3.1.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_cudawarping.3.1.0.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_ml.3.1.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_saliency.3.1.0.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_cudabgsegm.3.1.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_dnn.3.1.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_ml.3.1.0.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_dnn.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_cudabgsegm.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_highgui.3.1.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_imgcodecs.3.1.0.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_structured_light.3.1.0.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_video.3.1.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_photo.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_shape.3.1.0.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_surface_matching.3.1.0.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_video.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_cudaarithm.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_highgui.3.1.0.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_saliency.3.1.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_datasets.3.1.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_ccalib.3.1.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_ml.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_imgproc.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_cvv.3.1.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_flann.3.1.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_optflow.3.1.0.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_saliency.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_cudabgsegm.3.1.0.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_cudalegacy.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_cudaimgproc.3.1.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_xfeatures2d.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_superres.3.1.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_bioinspired.3.1.0.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_ccalib.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_cudaoptflow.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_fuzzy.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_videoio.3.1.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_dnn.3.1.0.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_reg.3.1.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_videostab.3.1.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_dpm.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_features2d.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_cudaimgproc.3.1.0.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_core.3.1.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_videoio.3.1.0.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_datasets.3.1.0.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_cudaoptflow.3.1.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_tracking.3.1.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_cudawarping.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_bgsegm.3.1.0.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_fuzzy.3.1.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_structured_light.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_imgcodecs.3.1.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_face.3.1.0.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_xphoto.3.1.0.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_cvv.3.1.0.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_imgproc.3.1.0.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_cudafeatures2d.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_cudafilters.3.1.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_text.3.1.0.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_core.3.1.0.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_rgbd.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_plot.3.1.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_stereo.3.1.0.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_shape.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_face.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_photo.3.1.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_xfeatures2d.3.1.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_photo.3.1.0.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_ccalib.3.1.0.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_line_descriptor.3.1.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_calib3d.3.1.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_fuzzy.3.1.0.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_shape.3.1.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_structured_light.3.1.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_stitching.3.1.0.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_xphoto.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_cudastereo.3.1.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_cudafeatures2d.3.1.0.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_videostab.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_ximgproc.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_aruco.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_cudaoptflow.3.1.0.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_objdetect.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_rgbd.3.1.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_dpm.3.1.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_superres.3.1.0.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_core.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_plot.3.1.0.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_calib3d.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_surface_matching.3.1.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_cudaarithm.3.1.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_bgsegm.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_cudawarping.3.1.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_flann.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_features2d.3.1.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_tracking.3.1.0.dylib
    LIBS += /usr/local/Cellar/opencv3/3.1.0_1/lib/libopencv_cudev.3.1.dylib

}
RESOURCES += \
    resources.qrc
include(./QtAwesome/QtAwesome.pri)

DISTFILES += \
    views/imageSnap/index.html \
    views/imageSnap/package.json
