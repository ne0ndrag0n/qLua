/****************************************************************************
** Meta object code from reading C++ file 'kahluaide.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../kahlua/kahluaide.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kahluaide.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_KahluaIDE_t {
    QByteArrayData data[4];
    char stringdata[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KahluaIDE_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KahluaIDE_t qt_meta_stringdata_KahluaIDE = {
    {
QT_MOC_LITERAL(0, 0, 9), // "KahluaIDE"
QT_MOC_LITERAL(1, 10, 24), // "on_actionE_xit_triggered"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 33) // "on_action_Output_Device_trigg..."

    },
    "KahluaIDE\0on_actionE_xit_triggered\0\0"
    "on_action_Output_Device_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KahluaIDE[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    0,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void KahluaIDE::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        KahluaIDE *_t = static_cast<KahluaIDE *>(_o);
        switch (_id) {
        case 0: _t->on_actionE_xit_triggered(); break;
        case 1: _t->on_action_Output_Device_triggered(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject KahluaIDE::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_KahluaIDE.data,
      qt_meta_data_KahluaIDE,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *KahluaIDE::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KahluaIDE::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_KahluaIDE.stringdata))
        return static_cast<void*>(const_cast< KahluaIDE*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int KahluaIDE::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
