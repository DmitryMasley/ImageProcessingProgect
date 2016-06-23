cmake_minimum_required(VERSION 3.5)
project(ImageProcessingProgect)

find_package( Qt5Core REQUIRED )
find_package( Qt5Widgets REQUIRED )
find_package( Qt5Gui REQUIRED )
qt5_use_modules( core gui widgets network  webkit qml quick quickwidgets concurrent webkitwidgets )

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    controllers/imageSnap/webpageconnector.cpp
    controllers/imageSnap/webpageconnector.h
    controllers/imagemergingworker.cpp
    controllers/imagemergingworker.h
    controllers/workspacecontroller.cpp
    controllers/workspacecontroller.h
    helpers/imagehelper.cpp
    helpers/imagehelper.h
    helpers/viewhelper.cpp
    helpers/viewhelper.h
    lib/model/image/imageparameter.cpp
    lib/model/image/imageparameter.h
    lib/model/image/imageparametersmodel.cpp
    lib/model/image/imageparametersmodel.h
    lib/model/image/standardimageitem.cpp
    lib/model/image/standardimageitem.h
    lib/model/image/standardimagemodel.cpp
    lib/model/image/standardimagemodel.h
    lib/model/abstractitem.cpp
    lib/model/abstractitem.h
    lib/model/matmodel.cpp
    lib/model/matmodel.h
    lib/model/matmodelitem.cpp
    lib/model/matmodelitem.h
    lib/model/standardmimedata.cpp
    lib/model/standardmimedata.h
    lib/model/standardmodel.cpp
    lib/model/standardmodel.h
    lib/views/imageitemdelegate.cpp
    lib/views/imageitemdelegate.h
    lib/views/materialbutton.cpp
    lib/views/materialbutton.h
    lib/views/singleimageview.cpp
    lib/views/singleimageview.h
    lib/metatypes.h
    lib/slidingstackedwidget.cpp
    lib/slidingstackedwidget.h
    lib/vent.cpp
    lib/vent.h
    QtAwesome/QtAwesome.cpp
    QtAwesome/QtAwesome.h
    views/imageMerging/imagemergingcontroller.cpp
    views/imageMerging/imagemergingcontroller.h
    views/imageMerging/imagemerginginputdata.h
    views/imageMerging/imagemergingprocessor.cpp
    views/imageMerging/imagemergingprocessor.h
    views/imageMerging/imagemergingview.cpp
    views/imageMerging/imagemergingview.h
    views/imageMerging/mergeresultview.cpp
    views/imageMerging/mergeresultview.h
    views/imageSnap/node_modules/fsevents/node_modules/node-uuid/benchmark/benchmark-native.c
    views/imageSnap/node_modules/fsevents/src/async.cc
    views/imageSnap/node_modules/fsevents/src/constants.cc
    views/imageSnap/node_modules/fsevents/src/locking.cc
    views/imageSnap/node_modules/fsevents/src/methods.cc
    views/imageSnap/node_modules/fsevents/src/storage.cc
    views/imageSnap/node_modules/fsevents/src/thread.cc
    views/imageSnap/node_modules/fsevents/fsevents.cc
    views/imageSnap/node_modules/nan/nan.h
    views/imageSnap/node_modules/nan/nan_callbacks.h
    views/imageSnap/node_modules/nan/nan_callbacks_12_inl.h
    views/imageSnap/node_modules/nan/nan_callbacks_pre_12_inl.h
    views/imageSnap/node_modules/nan/nan_converters.h
    views/imageSnap/node_modules/nan/nan_converters_43_inl.h
    views/imageSnap/node_modules/nan/nan_converters_pre_43_inl.h
    views/imageSnap/node_modules/nan/nan_implementation_12_inl.h
    views/imageSnap/node_modules/nan/nan_implementation_pre_12_inl.h
    views/imageSnap/node_modules/nan/nan_maybe_43_inl.h
    views/imageSnap/node_modules/nan/nan_maybe_pre_43_inl.h
    views/imageSnap/node_modules/nan/nan_new.h
    views/imageSnap/node_modules/nan/nan_object_wrap.h
    views/imageSnap/node_modules/nan/nan_persistent_12_inl.h
    views/imageSnap/node_modules/nan/nan_persistent_pre_12_inl.h
    views/imageSnap/node_modules/nan/nan_string_bytes.h
    views/imageSnap/node_modules/nan/nan_typedarray_contents.h
    views/imageSnap/node_modules/nan/nan_weak.h
    views/imageSnap/imagesnapview.cpp
    views/imageSnap/imagesnapview.h
    views/fileslistwidget.cpp
    views/fileslistwidget.h
    views/tasksview.cpp
    views/tasksview.h
    views/workspace.cpp
    views/workspace.h
    main.cpp
    mainwindow.cpp
    mainwindow.h)

add_executable(ImageProcessingProgect ${SOURCE_FILES})