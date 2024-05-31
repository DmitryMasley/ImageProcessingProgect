/****************************************************************************
** Meta object code from reading C++ file 'imageparameter.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../lib/model/image/imageparameter.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'imageparameter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSImageParameterENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSImageParameterENDCLASS = QtMocHelpers::stringData(
    "ImageParameter",
    "",
    "parent",
    "isRoot",
    "QMap<int,QMap<int,QVariant>>",
    "_data"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSImageParameterENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       7,   41, // constructors
       0,       // flags
       0,       // signalCount

 // constructors: parameters
    0x80000000 | 1, QMetaType::QObjectStar,    2,
    0x80000000 | 1,
    0x80000000 | 1, QMetaType::Bool, QMetaType::QObjectStar,    3,    2,
    0x80000000 | 1, QMetaType::Bool,    3,
    0x80000000 | 1, 0x80000000 | 4, QMetaType::QObjectStar, QMetaType::Bool,    5,    2,    3,
    0x80000000 | 1, 0x80000000 | 4, QMetaType::QObjectStar,    5,    2,
    0x80000000 | 1, 0x80000000 | 4,    5,

 // constructors: name, argc, parameters, tag, flags, initial metatype offsets
       0,    1,   14,    1, 0x0e,    1 /* Public */,
       0,    0,   17,    1, 0x2e,    2 /* Public | MethodCloned */,
       0,    2,   18,    1, 0x0e,    2 /* Public */,
       0,    1,   23,    1, 0x2e,    4 /* Public | MethodCloned */,
       0,    3,   26,    1, 0x0e,    5 /* Public */,
       0,    2,   33,    1, 0x2e,    8 /* Public | MethodCloned */,
       0,    1,   38,    1, 0x2e,   10 /* Public | MethodCloned */,

       0        // eod
};

Q_CONSTINIT const QMetaObject ImageParameter::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSImageParameterENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSImageParameterENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSImageParameterENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ImageParameter, std::true_type>,
        // constructor 'ImageParameter'
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>,
        // constructor 'ImageParameter'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>,
        // constructor 'ImageParameter'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // constructor 'ImageParameter'
        QtPrivate::TypeAndForceComplete<QMap<int,QMap<int,QVariant> >, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // constructor 'ImageParameter'
        QtPrivate::TypeAndForceComplete<QMap<int,QMap<int,QVariant> >, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>,
        // constructor 'ImageParameter'
        QtPrivate::TypeAndForceComplete<QMap<int,QMap<int,QVariant> >, std::false_type>
    >,
    nullptr
} };

void ImageParameter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { ImageParameter *_r = new ImageParameter((*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 1: { ImageParameter *_r = new ImageParameter();
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 2: { ImageParameter *_r = new ImageParameter((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 3: { ImageParameter *_r = new ImageParameter((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 4: { ImageParameter *_r = new ImageParameter((*reinterpret_cast<std::add_pointer_t<QMap<int,QMap<int,QVariant>>>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[3])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 5: { ImageParameter *_r = new ImageParameter((*reinterpret_cast<std::add_pointer_t<QMap<int,QMap<int,QVariant>>>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 6: { ImageParameter *_r = new ImageParameter((*reinterpret_cast<std::add_pointer_t<QMap<int,QMap<int,QVariant>>>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    } else if (_c == QMetaObject::ConstructInPlace) {
        switch (_id) {
        case 0: { new (_a[0]) ImageParameter((*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[1]))); } break;
        case 1: { new (_a[0]) ImageParameter(); } break;
        case 2: { new (_a[0]) ImageParameter((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[2]))); } break;
        case 3: { new (_a[0]) ImageParameter((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); } break;
        case 4: { new (_a[0]) ImageParameter((*reinterpret_cast<std::add_pointer_t<QMap<int,QMap<int,QVariant>>>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[3]))); } break;
        case 5: { new (_a[0]) ImageParameter((*reinterpret_cast<std::add_pointer_t<QMap<int,QMap<int,QVariant>>>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[2]))); } break;
        case 6: { new (_a[0]) ImageParameter((*reinterpret_cast<std::add_pointer_t<QMap<int,QMap<int,QVariant>>>>(_a[1]))); } break;
        default: break;
        }
    }
    (void)_o;
}

const QMetaObject *ImageParameter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ImageParameter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSImageParameterENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return AbstractItem::qt_metacast(_clname);
}

int ImageParameter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractItem::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
