/****************************************************************************
** Meta object code from reading C++ file 'databaseform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Project4/databaseform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'databaseform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DatabaseForm_t {
    QByteArrayData data[7];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DatabaseForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DatabaseForm_t qt_meta_stringdata_DatabaseForm = {
    {
QT_MOC_LITERAL(0, 0, 12), // "DatabaseForm"
QT_MOC_LITERAL(1, 13, 21), // "on_addRButton_clicked"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 15), // "receiveEmployee"
QT_MOC_LITERAL(4, 52, 9), // "Employee*"
QT_MOC_LITERAL(5, 62, 19), // "on_okButton_clicked"
QT_MOC_LITERAL(6, 82, 10) // "sortingEmp"

    },
    "DatabaseForm\0on_addRButton_clicked\0\0"
    "receiveEmployee\0Employee*\0on_okButton_clicked\0"
    "sortingEmp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DatabaseForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    1,   35,    2, 0x0a /* Public */,
       5,    0,   38,    2, 0x08 /* Private */,
       6,    1,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void DatabaseForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DatabaseForm *_t = static_cast<DatabaseForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_addRButton_clicked(); break;
        case 1: _t->receiveEmployee((*reinterpret_cast< Employee*(*)>(_a[1]))); break;
        case 2: _t->on_okButton_clicked(); break;
        case 3: _t->sortingEmp((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject DatabaseForm::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_DatabaseForm.data,
      qt_meta_data_DatabaseForm,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DatabaseForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DatabaseForm::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DatabaseForm.stringdata0))
        return static_cast<void*>(const_cast< DatabaseForm*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int DatabaseForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
