/****************************************************************************
** Meta object code from reading C++ file 'shakkikello.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../shakkikello.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'shakkikello.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.1. It"
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
struct qt_meta_tag_ZN11ShakkikelloE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN11ShakkikelloE = QtMocHelpers::stringData(
    "Shakkikello",
    "on_p1Btn_clicked",
    "",
    "on_p2Btn_clicked",
    "on_timeBtn1_clicked",
    "on_timeBtn2_clicked",
    "on_startBtn_clicked",
    "on_stopBtn_clicked",
    "updateProgBar"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN11ShakkikelloE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x08,    1 /* Private */,
       3,    0,   57,    2, 0x08,    2 /* Private */,
       4,    0,   58,    2, 0x08,    3 /* Private */,
       5,    0,   59,    2, 0x08,    4 /* Private */,
       6,    0,   60,    2, 0x08,    5 /* Private */,
       7,    0,   61,    2, 0x08,    6 /* Private */,
       8,    0,   62,    2, 0x08,    7 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Shakkikello::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_ZN11ShakkikelloE.offsetsAndSizes,
    qt_meta_data_ZN11ShakkikelloE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN11ShakkikelloE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Shakkikello, std::true_type>,
        // method 'on_p1Btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_p2Btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_timeBtn1_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_timeBtn2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_startBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_stopBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateProgBar'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Shakkikello::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Shakkikello *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->on_p1Btn_clicked(); break;
        case 1: _t->on_p2Btn_clicked(); break;
        case 2: _t->on_timeBtn1_clicked(); break;
        case 3: _t->on_timeBtn2_clicked(); break;
        case 4: _t->on_startBtn_clicked(); break;
        case 5: _t->on_stopBtn_clicked(); break;
        case 6: _t->updateProgBar(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *Shakkikello::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Shakkikello::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN11ShakkikelloE.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Shakkikello::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
