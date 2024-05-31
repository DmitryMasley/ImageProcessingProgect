#-------------------------------------------------
#
# Project created by QtCreator 2016-01-09T23:47:55
#
#-------------------------------------------------

QT       += core gui widgets network qml quick quickwidgets concurrent webenginequick webenginewidgets webview

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
    # modules/imageSnap/imagesnapcontroller.h

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
    # LIBS += "C:/opencv/build-current/lib/libopencv_video300.dll.a"
    # LIBS += "C:/opencv/build-current/lib/libopencv_videoio300.dll.a"
    # LIBS += "C:/opencv/build-current/lib/libopencv_videostab300.dll.a"
}
macx {
    LIBS += -stdlib=libc++

    QMAKE_CXXFLAGS += -stdlib=libc++
    QMAKE_CXXFLAGS += -libstd=libc++
    QMAKE_CXXFLAGS += -std=c++11
    QMAKE_CXXFLAGS += -mmacosx-version-min=10.9
    QMAKE_LFLAGS += -mmacosx-version-min=10.9
    INCLUDEPATH += "/usr/local/include/opencv4"
    LIBS += -L/usr/local/lib
    # INCLUDEPATH += "/opt/homebrew/Cellar/opencv/4.9.0_8/include/opencv4"
    # LIBS += -L/opt/homebrew/Cellar/opencv/4.9.0_8/lib

    LIBS += /usr/local/lib/libopencv_calib3d.4.10.0.dylib
    LIBS += /usr/local/lib/libopencv_core.4.10.0.dylib
    LIBS += /usr/local/lib/libopencv_dnn.4.10.0.dylib
    LIBS += /usr/local/lib/libopencv_features2d.4.10.0.dylib
    LIBS += /usr/local/lib/libopencv_flann.4.10.0.dylib
    LIBS += /usr/local/lib/libopencv_gapi.4.10.0.dylib
    LIBS += /usr/local/lib/libopencv_highgui.4.10.0.dylib
    LIBS += /usr/local/lib/libopencv_imgcodecs.4.10.0.dylib
    LIBS += /usr/local/lib/libopencv_imgproc.4.10.0.dylib
    LIBS += /usr/local/lib/libopencv_ml.4.10.0.dylib
    LIBS += /usr/local/lib/libopencv_objdetect.4.10.0.dylib
    LIBS += /usr/local/lib/libopencv_photo.4.10.0.dylib
    LIBS += /usr/local/lib/libopencv_stitching.4.10.0.dylib
    LIBS += /usr/local/lib/libopencv_video.4.10.0.dylib
    LIBS += /usr/local/lib/libopencv_videoio.4.10.0.dylib

#     LIBS += "/opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_calib3d.4.9.0.dylib"
#     LIBS += "/opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_core.4.9.0.dylib"
#     LIBS += "/opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_features2d.4.9.0.dylib"
#     LIBS += "/opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_flann.4.9.0.dylib"
#     LIBS += "/opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_highgui.4.9.0.dylib"
#     LIBS += "/opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_imgcodecs.4.9.0.dylib"
#     LIBS += "/opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_imgproc.4.9.0.dylib"
# #    LIBS += "/opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_java.4.9.0.dylib"

#     LIBS += "/opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_ml.4.9.0.dylib"
#     LIBS += "/opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_objdetect.4.9.0.dylib"
# #    LIBS += "/opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_photo.3.4.9.0.dylib"
#     LIBS += "/opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_shape.4.9.0.dylib"
#     LIBS += "/opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_stitching.4.9.0.dylib"
#     LIBS += "/opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_superres.4.9.0.dylib"
#     # LIBS += "/opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_video.4.9.0.dylib"
#     # LIBS += "/opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_videoio.4.9.0.dylib"
#     # LIBS += "/opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_videostab.4.9.0.dylib"
#     LIBS += "/opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_imgcodecs.4.9.0.dylib"

#     # LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_cudaimgproc.dylib
#     # LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_cudaobjdetect.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_reg.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_features2d.4.9.0.dylib
#     # LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_cudev.dylib
#     # LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_cudev.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_imgproc.4.9.0.dylib
#     # LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_cudaarithm.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_bgsegm.4.9.0.dylib
#     # LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_cudaobjdetect.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_optflow.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_ximgproc.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_aruco.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_surface_matching.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_tracking.dylib
#     # LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_cudalegacy.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_line_descriptor.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_xobjdetect.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_flann.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_imgcodecs.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_dpm.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_xphoto.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_line_descriptor.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_bioinspired.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_stereo.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_text.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_aruco.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_plot.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_xobjdetect.4.9.0.dylib
#     # LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_ts.a
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_bioinspired.4.9.0.dylib
#     # LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_cudastereo.dylib
#     # LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_cudafilters.dylib
#     # LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_cudafilters.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_superres.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_xobjdetect.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_highgui.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_face.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_datasets.dylib
#     # LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_cudaobjdetect.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_reg.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_stitching.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_text.4.9.0.dylib
#     # LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_videoio.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_objdetect.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_calib3d.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_optflow.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_ximgproc.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_rgbd.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_objdetect.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_stitching.4.9.0.dylib
#     # LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_cudafeatures2d.4.9.0.dylib
#     # LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_cudalegacy.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_videostab.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_video.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_xfeatures2d.4.9.0.dylib
#     # LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_cvv.dylib
#     # LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_cudastereo.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_stereo.4.9.0.dylib
#     # LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_cudawarping.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_ml.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_saliency.4.9.0.dylib
#     # LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_cudabgsegm.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_dnn.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_ml.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_dnn.dylib
#     # LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_cudabgsegm.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_highgui.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_imgcodecs.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_structured_light.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_video.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_photo.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_shape.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_surface_matching.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_video.dylib
#     # LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_cudaarithm.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_highgui.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_saliency.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_datasets.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_ccalib.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_ml.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_imgproc.dylib
#     # LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_cvv.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_flann.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_optflow.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_saliency.dylib
#     # LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_cudabgsegm.4.9.0.dylib
#     # LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_cudalegacy.dylib
#     # LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_cudaimgproc.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_xfeatures2d.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_superres.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_bioinspired.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_ccalib.dylib
#     # LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_cudaoptflow.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_fuzzy.dylib
#     # LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_videoio.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_dnn.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_reg.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_videostab.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_dpm.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_features2d.dylib
#     # LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_cudaimgproc.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_core.4.9.0.dylib
#     # LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_videoio.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_datasets.4.9.0.dylib
#     # LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_cudaoptflow.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_tracking.4.9.0.dylib
#     # LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_cudawarping.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_bgsegm.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_fuzzy.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_structured_light.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_imgcodecs.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_face.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_xphoto.4.9.0.dylib
#     # LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_cvv.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_imgproc.4.9.0.dylib
#     # LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_cudafeatures2d.dylib
#     # LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_cudafilters.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_text.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_core.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_rgbd.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_plot.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_stereo.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_shape.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_face.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_photo.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_xfeatures2d.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_photo.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_ccalib.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_line_descriptor.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_calib3d.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_fuzzy.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_shape.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_structured_light.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_stitching.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_xphoto.dylib
#     # LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_cudastereo.4.9.0.dylib
#     # LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_cudafeatures2d.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_videostab.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_ximgproc.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_aruco.dylib
#     # LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_cudaoptflow.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_objdetect.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_rgbd.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_dpm.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_superres.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_core.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_plot.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_calib3d.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_surface_matching.4.9.0.dylib
#     # LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_cudaarithm.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_bgsegm.dylib
#     # LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_cudawarping.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_flann.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_features2d.4.9.0.dylib
#     LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_tracking.4.9.0.dylib
#     # LIBS += /opt/homebrew/Cellar/opencv/4.9.0_8/lib/libopencv_cudev.4.9.0.dylib

}
RESOURCES += \
    resources.qrc
include(./QtAwesome/QtAwesome.pri)

DISTFILES += \
    views/imageSnap/index.html \
    views/imageSnap/package.json
