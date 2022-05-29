/****************************************************************************
** Meta object code from reading C++ file 'sudokuwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Sudoku/sudokuwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sudokuwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SudokuWindow_t {
    QByteArrayData data[14];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SudokuWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SudokuWindow_t qt_meta_stringdata_SudokuWindow = {
    {
QT_MOC_LITERAL(0, 0, 12), // "SudokuWindow"
QT_MOC_LITERAL(1, 13, 12), // "SetItemColor"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 1), // "x"
QT_MOC_LITERAL(4, 29, 1), // "y"
QT_MOC_LITERAL(5, 31, 1), // "t"
QT_MOC_LITERAL(6, 33, 8), // "CheckNum"
QT_MOC_LITERAL(7, 42, 3), // "row"
QT_MOC_LITERAL(8, 46, 6), // "column"
QT_MOC_LITERAL(9, 53, 3), // "Num"
QT_MOC_LITERAL(10, 57, 10), // "CheckTable"
QT_MOC_LITERAL(11, 68, 21), // "on_BackButton_clicked"
QT_MOC_LITERAL(12, 90, 26), // "on_SudokuTable_cellChanged"
QT_MOC_LITERAL(13, 117, 23) // "on_Finishbutton_clicked"

    },
    "SudokuWindow\0SetItemColor\0\0x\0y\0t\0"
    "CheckNum\0row\0column\0Num\0CheckTable\0"
    "on_BackButton_clicked\0on_SudokuTable_cellChanged\0"
    "on_Finishbutton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SudokuWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   44,    2, 0x08 /* Private */,
       6,    3,   51,    2, 0x08 /* Private */,
      10,    0,   58,    2, 0x08 /* Private */,
      11,    0,   59,    2, 0x08 /* Private */,
      12,    2,   60,    2, 0x08 /* Private */,
      13,    0,   65,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,    4,    5,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int, QMetaType::Int,    7,    8,    9,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    7,    8,
    QMetaType::Void,

       0        // eod
};

void SudokuWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SudokuWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 1: { bool _r = _t->CheckNum((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->CheckTable();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->on_BackButton_clicked(); break;
        case 4: _t->on_SudokuTable_cellChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->on_Finishbutton_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SudokuWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_SudokuWindow.data,
    qt_meta_data_SudokuWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SudokuWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SudokuWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SudokuWindow.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int SudokuWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
