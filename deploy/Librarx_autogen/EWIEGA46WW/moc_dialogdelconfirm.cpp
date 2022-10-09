/****************************************************************************
** Meta object code from reading C++ file 'dialogdelconfirm.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "dialogdelconfirm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialogdelconfirm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DialogDelConfirm_t {
    const uint offsetsAndSize[16];
    char stringdata0[143];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_DialogDelConfirm_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_DialogDelConfirm_t qt_meta_stringdata_DialogDelConfirm = {
    {
QT_MOC_LITERAL(0, 16), // "DialogDelConfirm"
QT_MOC_LITERAL(17, 14), // "onConfirmation"
QT_MOC_LITERAL(32, 0), // ""
QT_MOC_LITERAL(33, 21), // "on_buttonBox_accepted"
QT_MOC_LITERAL(55, 21), // "on_buttonBox_rejected"
QT_MOC_LITERAL(77, 29), // "on_DialogDelConfirm_destroyed"
QT_MOC_LITERAL(107, 28), // "on_DialogDelConfirm_finished"
QT_MOC_LITERAL(136, 6) // "result"

    },
    "DialogDelConfirm\0onConfirmation\0\0"
    "on_buttonBox_accepted\0on_buttonBox_rejected\0"
    "on_DialogDelConfirm_destroyed\0"
    "on_DialogDelConfirm_finished\0result"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DialogDelConfirm[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   45,    2, 0x08,    2 /* Private */,
       4,    0,   46,    2, 0x08,    3 /* Private */,
       5,    0,   47,    2, 0x08,    4 /* Private */,
       6,    1,   48,    2, 0x08,    5 /* Private */,

 // signals: parameters
    QMetaType::Int,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

void DialogDelConfirm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DialogDelConfirm *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { int _r = _t->onConfirmation();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->on_buttonBox_accepted(); break;
        case 2: _t->on_buttonBox_rejected(); break;
        case 3: _t->on_DialogDelConfirm_destroyed(); break;
        case 4: _t->on_DialogDelConfirm_finished((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = int (DialogDelConfirm::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DialogDelConfirm::onConfirmation)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject DialogDelConfirm::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_DialogDelConfirm.offsetsAndSize,
    qt_meta_data_DialogDelConfirm,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_DialogDelConfirm_t
, QtPrivate::TypeAndForceComplete<DialogDelConfirm, std::true_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *DialogDelConfirm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DialogDelConfirm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DialogDelConfirm.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int DialogDelConfirm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
int DialogDelConfirm::onConfirmation()
{
    int _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
