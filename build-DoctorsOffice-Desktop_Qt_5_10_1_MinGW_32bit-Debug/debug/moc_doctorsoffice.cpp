/****************************************************************************
** Meta object code from reading C++ file 'doctorsoffice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../DoctorsOffice/doctorsoffice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'doctorsoffice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DoctorsOffice_t {
    QByteArrayData data[20];
    char stringdata0[463];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DoctorsOffice_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DoctorsOffice_t qt_meta_stringdata_DoctorsOffice = {
    {
QT_MOC_LITERAL(0, 0, 13), // "DoctorsOffice"
QT_MOC_LITERAL(1, 14, 25), // "on_calendarWidget_clicked"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 4), // "date"
QT_MOC_LITERAL(4, 46, 25), // "on_saveApptButton_clicked"
QT_MOC_LITERAL(5, 72, 15), // "clearCreateAppt"
QT_MOC_LITERAL(6, 88, 28), // "on_savePatientButton_clicked"
QT_MOC_LITERAL(7, 117, 18), // "clearCreatePatient"
QT_MOC_LITERAL(8, 136, 32), // "on_editPatientInfoButton_clicked"
QT_MOC_LITERAL(9, 169, 32), // "on_savePatientInfoButton_clicked"
QT_MOC_LITERAL(10, 202, 11), // "clearReport"
QT_MOC_LITERAL(11, 214, 23), // "disablePatientLineEdits"
QT_MOC_LITERAL(12, 238, 27), // "on_deleteApptButton_clicked"
QT_MOC_LITERAL(13, 266, 29), // "on_saveCreateEmployee_clicked"
QT_MOC_LITERAL(14, 296, 19), // "clearCreateEmployee"
QT_MOC_LITERAL(15, 316, 33), // "on_editEmployeeInfoButton_cli..."
QT_MOC_LITERAL(16, 350, 33), // "on_saveEmployeeInfoButton_cli..."
QT_MOC_LITERAL(17, 384, 31), // "on_selectEmployeeButton_clicked"
QT_MOC_LITERAL(18, 416, 30), // "on_selectPatientButton_clicked"
QT_MOC_LITERAL(19, 447, 15) // "validateIfEmpty"

    },
    "DoctorsOffice\0on_calendarWidget_clicked\0"
    "\0date\0on_saveApptButton_clicked\0"
    "clearCreateAppt\0on_savePatientButton_clicked\0"
    "clearCreatePatient\0on_editPatientInfoButton_clicked\0"
    "on_savePatientInfoButton_clicked\0"
    "clearReport\0disablePatientLineEdits\0"
    "on_deleteApptButton_clicked\0"
    "on_saveCreateEmployee_clicked\0"
    "clearCreateEmployee\0"
    "on_editEmployeeInfoButton_clicked\0"
    "on_saveEmployeeInfoButton_clicked\0"
    "on_selectEmployeeButton_clicked\0"
    "on_selectPatientButton_clicked\0"
    "validateIfEmpty"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DoctorsOffice[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x08 /* Private */,
       4,    0,  102,    2, 0x08 /* Private */,
       5,    0,  103,    2, 0x08 /* Private */,
       6,    0,  104,    2, 0x08 /* Private */,
       7,    0,  105,    2, 0x08 /* Private */,
       8,    0,  106,    2, 0x08 /* Private */,
       9,    0,  107,    2, 0x08 /* Private */,
      10,    0,  108,    2, 0x08 /* Private */,
      11,    0,  109,    2, 0x08 /* Private */,
      12,    0,  110,    2, 0x08 /* Private */,
      13,    0,  111,    2, 0x08 /* Private */,
      14,    0,  112,    2, 0x08 /* Private */,
      15,    0,  113,    2, 0x08 /* Private */,
      16,    0,  114,    2, 0x08 /* Private */,
      17,    0,  115,    2, 0x08 /* Private */,
      18,    0,  116,    2, 0x08 /* Private */,
      19,    0,  117,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QDate,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DoctorsOffice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DoctorsOffice *_t = static_cast<DoctorsOffice *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_calendarWidget_clicked((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 1: _t->on_saveApptButton_clicked(); break;
        case 2: _t->clearCreateAppt(); break;
        case 3: _t->on_savePatientButton_clicked(); break;
        case 4: _t->clearCreatePatient(); break;
        case 5: _t->on_editPatientInfoButton_clicked(); break;
        case 6: _t->on_savePatientInfoButton_clicked(); break;
        case 7: _t->clearReport(); break;
        case 8: _t->disablePatientLineEdits(); break;
        case 9: _t->on_deleteApptButton_clicked(); break;
        case 10: _t->on_saveCreateEmployee_clicked(); break;
        case 11: _t->clearCreateEmployee(); break;
        case 12: _t->on_editEmployeeInfoButton_clicked(); break;
        case 13: _t->on_saveEmployeeInfoButton_clicked(); break;
        case 14: _t->on_selectEmployeeButton_clicked(); break;
        case 15: _t->on_selectPatientButton_clicked(); break;
        case 16: _t->validateIfEmpty(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DoctorsOffice::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_DoctorsOffice.data,
      qt_meta_data_DoctorsOffice,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DoctorsOffice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DoctorsOffice::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DoctorsOffice.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int DoctorsOffice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
