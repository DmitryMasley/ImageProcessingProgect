/****************************************************************************
** Meta object code from reading C++ file 'abstractitem.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../lib/model/abstractitem.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'abstractitem.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSAbstractItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSAbstractItemENDCLASS = QtMocHelpers::stringData(
    "AbstractItem",
    "headerChanged",
    "",
    "QMap<int,QVariant>",
    "header",
    "rootChanged",
    "parent",
    "isRoot",
    "QMap<int,QMap<int,QVariant>>",
    "_data",
    "item",
    "_header",
    "IntVariantMap",
    "_root"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAbstractItemENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   60, // properties
       0,    0, // enums/sets
       8,   70, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x06,    3 /* Public */,
       5,    0,   29,    2, 0x06,    5 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // constructors: parameters
    0x80000000 | 2, QMetaType::QObjectStar,    6,
    0x80000000 | 2,
    0x80000000 | 2, QMetaType::Bool, QMetaType::QObjectStar,    7,    6,
    0x80000000 | 2, QMetaType::Bool,    7,
    0x80000000 | 2, 0x80000000 | 8, QMetaType::QObjectStar, QMetaType::Bool,    9,    6,    7,
    0x80000000 | 2, 0x80000000 | 8, QMetaType::QObjectStar,    9,    6,
    0x80000000 | 2, 0x80000000 | 8,    9,
    0x80000000 | 2, 0x80000000 | 0,   10,

 // properties: name, type, flags
      11, 0x80000000 | 12, 0x0001500b, uint(0), 0,
      13, QMetaType::Bool, 0x00015003, uint(1), 0,

 // constructors: name, argc, parameters, tag, flags, initial metatype offsets
       0,    1,   30,    2, 0x0e,    6 /* Public */,
       0,    0,   33,    2, 0x2e,    7 /* Public | MethodCloned */,
       0,    2,   34,    2, 0x0e,    7 /* Public */,
       0,    1,   39,    2, 0x2e,    9 /* Public | MethodCloned */,
       0,    3,   42,    2, 0x0e,   10 /* Public */,
       0,    2,   49,    2, 0x2e,   13 /* Public | MethodCloned */,
       0,    1,   54,    2, 0x2e,   15 /* Public | MethodCloned */,
       0,    1,   57,    2, 0x0e,   16 /* Public */,

       0        // eod
};

Q_CONSTINIT const QMetaObject AbstractItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSAbstractItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAbstractItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAbstractItemENDCLASS_t,
        // property '_header'
        QtPrivate::TypeAndForceComplete<IntVariantMap, std::true_type>,
        // property '_root'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AbstractItem, std::true_type>,
        // method 'headerChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMap<int,QVariant>, std::false_type>,
        // method 'rootChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // constructor 'AbstractItem'
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>,
        // constructor 'AbstractItem'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>,
        // constructor 'AbstractItem'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // constructor 'AbstractItem'
        QtPrivate::TypeAndForceComplete<QMap<int,QMap<int,QVariant> >, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // constructor 'AbstractItem'
        QtPrivate::TypeAndForceComplete<QMap<int,QMap<int,QVariant> >, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>,
        // constructor 'AbstractItem'
        QtPrivate::TypeAndForceComplete<QMap<int,QMap<int,QVariant> >, std::false_type>,
        // constructor 'AbstractItem'
        QtPrivate::TypeAndForceComplete<const AbstractItem &, std::false_type>
    >,
    nullptr
} };

void AbstractItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { AbstractItem *_r = new AbstractItem((*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 1: { AbstractItem *_r = new AbstractItem();
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 2: { AbstractItem *_r = new AbstractItem((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 3: { AbstractItem *_r = new AbstractItem((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 4: { AbstractItem *_r = new AbstractItem((*reinterpret_cast<std::add_pointer_t<QMap<int,QMap<int,QVariant>>>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[3])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 5: { AbstractItem *_r = new AbstractItem((*reinterpret_cast<std::add_pointer_t<QMap<int,QMap<int,QVariant>>>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 6: { AbstractItem *_r = new AbstractItem((*reinterpret_cast<std::add_pointer_t<QMap<int,QMap<int,QVariant>>>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 7: { AbstractItem *_r = new AbstractItem((*reinterpret_cast<std::add_pointer_t<AbstractItem>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    } else if (_c == QMetaObject::ConstructInPlace) {
        switch (_id) {
        case 0: { new (_a[0]) AbstractItem((*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[1]))); } break;
        case 1: { new (_a[0]) AbstractItem(); } break;
        case 2: { new (_a[0]) AbstractItem((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[2]))); } break;
        case 3: { new (_a[0]) AbstractItem((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); } break;
        case 4: { new (_a[0]) AbstractItem((*reinterpret_cast<std::add_pointer_t<QMap<int,QMap<int,QVariant>>>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[3]))); } break;
        case 5: { new (_a[0]) AbstractItem((*reinterpret_cast<std::add_pointer_t<QMap<int,QMap<int,QVariant>>>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[2]))); } break;
        case 6: { new (_a[0]) AbstractItem((*reinterpret_cast<std::add_pointer_t<QMap<int,QMap<int,QVariant>>>>(_a[1]))); } break;
        case 7: { new (_a[0]) AbstractItem((*reinterpret_cast<std::add_pointer_t<AbstractItem>>(_a[1]))); } break;
        default: break;
        }
    } else if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AbstractItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->headerChanged((*reinterpret_cast< std::add_pointer_t<QMap<int,QVariant>>>(_a[1]))); break;
        case 1: _t->rootChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AbstractItem::*)(QMap<int,QVariant> );
            if (_t _q_method = &AbstractItem::headerChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AbstractItem::*)();
            if (_t _q_method = &AbstractItem::rootChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AbstractItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< IntVariantMap*>(_v) = _t->header(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->root(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<AbstractItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setHeader(*reinterpret_cast< IntVariantMap*>(_v)); break;
        case 1: _t->setRoot(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *AbstractItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AbstractItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAbstractItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AbstractItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void AbstractItem::headerChanged(QMap<int,QVariant> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AbstractItem::rootChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
