/****************************************************************************
** Meta object code from reading C++ file 'standardimageitem.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../lib/model/image/standardimageitem.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'standardimageitem.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSStandardImageItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSStandardImageItemENDCLASS = QtMocHelpers::stringData(
    "StandardImageItem",
    "",
    "parent",
    "Mat",
    "image",
    "name",
    "fileName",
    "isRoot",
    "QMap<int,QMap<int,QVariant>>",
    "data",
    "StandardImageItem&",
    "item",
    "_isMultiChannel"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSStandardImageItemENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   92, // properties
       0,    0, // enums/sets
      14,   97, // constructors
       0,       // flags
       0,       // signalCount

 // constructors: parameters
    0x80000000 | 1, QMetaType::QObjectStar,    2,
    0x80000000 | 1,
    0x80000000 | 1, 0x80000000 | 3, QMetaType::QString, QMetaType::QString, QMetaType::Bool, QMetaType::QObjectStar,    4,    5,    6,    7,    2,
    0x80000000 | 1, 0x80000000 | 3, QMetaType::QString, QMetaType::QString, QMetaType::Bool,    4,    5,    6,    7,
    0x80000000 | 1, 0x80000000 | 3, QMetaType::QString, QMetaType::QString,    4,    5,    6,
    0x80000000 | 1, 0x80000000 | 3, QMetaType::QString,    4,    5,
    0x80000000 | 1, QMetaType::QString, QMetaType::QString, QMetaType::Bool, QMetaType::QObjectStar,    5,    6,    7,    2,
    0x80000000 | 1, QMetaType::QString, QMetaType::QString, QMetaType::Bool,    5,    6,    7,
    0x80000000 | 1, QMetaType::QString, QMetaType::QString,    5,    6,
    0x80000000 | 1, QMetaType::QString,    5,
    0x80000000 | 1, 0x80000000 | 8, QMetaType::Bool, QMetaType::QObjectStar,    9,    7,    2,
    0x80000000 | 1, 0x80000000 | 8, QMetaType::Bool,    9,    7,
    0x80000000 | 1, 0x80000000 | 8,    9,
    0x80000000 | 1, 0x80000000 | 10,   11,

 // properties: name, type, flags
      12, QMetaType::Bool, 0x00015003, uint(-1), 0,

 // constructors: name, argc, parameters, tag, flags, initial metatype offsets
       0,    1,   14,    1, 0x0e,    2 /* Public */,
       0,    0,   17,    1, 0x2e,    3 /* Public | MethodCloned */,
       0,    5,   18,    1, 0x0e,    3 /* Public */,
       0,    4,   29,    1, 0x2e,    8 /* Public | MethodCloned */,
       0,    3,   38,    1, 0x2e,   12 /* Public | MethodCloned */,
       0,    2,   45,    1, 0x2e,   15 /* Public | MethodCloned */,
       0,    4,   50,    1, 0x0e,   17 /* Public */,
       0,    3,   59,    1, 0x2e,   21 /* Public | MethodCloned */,
       0,    2,   66,    1, 0x2e,   24 /* Public | MethodCloned */,
       0,    1,   71,    1, 0x2e,   26 /* Public | MethodCloned */,
       0,    3,   74,    1, 0x0e,   27 /* Public */,
       0,    2,   81,    1, 0x2e,   30 /* Public | MethodCloned */,
       0,    1,   86,    1, 0x2e,   32 /* Public | MethodCloned */,
       0,    1,   89,    1, 0x0e,   33 /* Public */,

       0        // eod
};

Q_CONSTINIT const QMetaObject StandardImageItem::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSStandardImageItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSStandardImageItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSStandardImageItemENDCLASS_t,
        // property '_isMultiChannel'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<StandardImageItem, std::true_type>,
        // constructor 'StandardImageItem'
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>,
        // constructor 'StandardImageItem'
        QtPrivate::TypeAndForceComplete<Mat, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>,
        // constructor 'StandardImageItem'
        QtPrivate::TypeAndForceComplete<Mat, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // constructor 'StandardImageItem'
        QtPrivate::TypeAndForceComplete<Mat, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // constructor 'StandardImageItem'
        QtPrivate::TypeAndForceComplete<Mat, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // constructor 'StandardImageItem'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>,
        // constructor 'StandardImageItem'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // constructor 'StandardImageItem'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // constructor 'StandardImageItem'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // constructor 'StandardImageItem'
        QtPrivate::TypeAndForceComplete<const QMap<int,QMap<int,QVariant> > &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>,
        // constructor 'StandardImageItem'
        QtPrivate::TypeAndForceComplete<const QMap<int,QMap<int,QVariant> > &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // constructor 'StandardImageItem'
        QtPrivate::TypeAndForceComplete<const QMap<int,QMap<int,QVariant> > &, std::false_type>,
        // constructor 'StandardImageItem'
        QtPrivate::TypeAndForceComplete<StandardImageItem &, std::false_type>
    >,
    nullptr
} };

void StandardImageItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { StandardImageItem *_r = new StandardImageItem((*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 1: { StandardImageItem *_r = new StandardImageItem();
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 2: { StandardImageItem *_r = new StandardImageItem((*reinterpret_cast<std::add_pointer_t<Mat>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[5])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 3: { StandardImageItem *_r = new StandardImageItem((*reinterpret_cast<std::add_pointer_t<Mat>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[4])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 4: { StandardImageItem *_r = new StandardImageItem((*reinterpret_cast<std::add_pointer_t<Mat>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 5: { StandardImageItem *_r = new StandardImageItem((*reinterpret_cast<std::add_pointer_t<Mat>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 6: { StandardImageItem *_r = new StandardImageItem((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[4])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 7: { StandardImageItem *_r = new StandardImageItem((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[3])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 8: { StandardImageItem *_r = new StandardImageItem((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 9: { StandardImageItem *_r = new StandardImageItem((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 10: { StandardImageItem *_r = new StandardImageItem((*reinterpret_cast<std::add_pointer_t<QMap<int,QMap<int,QVariant>>>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[3])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 11: { StandardImageItem *_r = new StandardImageItem((*reinterpret_cast<std::add_pointer_t<QMap<int,QMap<int,QVariant>>>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 12: { StandardImageItem *_r = new StandardImageItem((*reinterpret_cast<std::add_pointer_t<QMap<int,QMap<int,QVariant>>>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 13: { StandardImageItem *_r = new StandardImageItem((*reinterpret_cast<std::add_pointer_t<StandardImageItem&>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    } else if (_c == QMetaObject::ConstructInPlace) {
        switch (_id) {
        case 0: { new (_a[0]) StandardImageItem((*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[1]))); } break;
        case 1: { new (_a[0]) StandardImageItem(); } break;
        case 2: { new (_a[0]) StandardImageItem((*reinterpret_cast<std::add_pointer_t<Mat>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[5]))); } break;
        case 3: { new (_a[0]) StandardImageItem((*reinterpret_cast<std::add_pointer_t<Mat>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[4]))); } break;
        case 4: { new (_a[0]) StandardImageItem((*reinterpret_cast<std::add_pointer_t<Mat>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3]))); } break;
        case 5: { new (_a[0]) StandardImageItem((*reinterpret_cast<std::add_pointer_t<Mat>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); } break;
        case 6: { new (_a[0]) StandardImageItem((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[4]))); } break;
        case 7: { new (_a[0]) StandardImageItem((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[3]))); } break;
        case 8: { new (_a[0]) StandardImageItem((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); } break;
        case 9: { new (_a[0]) StandardImageItem((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); } break;
        case 10: { new (_a[0]) StandardImageItem((*reinterpret_cast<std::add_pointer_t<QMap<int,QMap<int,QVariant>>>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[3]))); } break;
        case 11: { new (_a[0]) StandardImageItem((*reinterpret_cast<std::add_pointer_t<QMap<int,QMap<int,QVariant>>>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); } break;
        case 12: { new (_a[0]) StandardImageItem((*reinterpret_cast<std::add_pointer_t<QMap<int,QMap<int,QVariant>>>>(_a[1]))); } break;
        case 13: { new (_a[0]) StandardImageItem((*reinterpret_cast<std::add_pointer_t<StandardImageItem&>>(_a[1]))); } break;
        default: break;
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<StandardImageItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isMultichannel(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<StandardImageItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setIsMultichannel(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
}

const QMetaObject *StandardImageItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StandardImageItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSStandardImageItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return AbstractItem::qt_metacast(_clname);
}

int StandardImageItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
