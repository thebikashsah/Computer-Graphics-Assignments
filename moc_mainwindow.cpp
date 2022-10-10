/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[68];
    char stringdata0[317];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 13), // "Mouse_Pressed"
QT_MOC_LITERAL(25, 0), // ""
QT_MOC_LITERAL(26, 17), // "showMousePosition"
QT_MOC_LITERAL(44, 7), // "QPoint&"
QT_MOC_LITERAL(52, 3), // "pos"
QT_MOC_LITERAL(56, 20), // "on_show_axes_clicked"
QT_MOC_LITERAL(77, 15), // "on_Draw_clicked"
QT_MOC_LITERAL(93, 4), // "swap"
QT_MOC_LITERAL(98, 4), // "int&"
QT_MOC_LITERAL(103, 1), // "a"
QT_MOC_LITERAL(105, 1), // "b"
QT_MOC_LITERAL(107, 21), // "on_set_point1_clicked"
QT_MOC_LITERAL(129, 21), // "on_set_point2_clicked"
QT_MOC_LITERAL(151, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(173, 11), // "interpolate"
QT_MOC_LITERAL(185, 5), // "point"
QT_MOC_LITERAL(191, 1), // "x"
QT_MOC_LITERAL(193, 1), // "y"
QT_MOC_LITERAL(195, 1), // "r"
QT_MOC_LITERAL(197, 1), // "g"
QT_MOC_LITERAL(199, 4), // "blue"
QT_MOC_LITERAL(204, 5), // "delay"
QT_MOC_LITERAL(210, 15), // "DDA_for_Polygon"
QT_MOC_LITERAL(226, 2), // "x1"
QT_MOC_LITERAL(229, 2), // "y1"
QT_MOC_LITERAL(232, 2), // "x2"
QT_MOC_LITERAL(235, 2), // "y2"
QT_MOC_LITERAL(238, 16), // "boundaryfillutil"
QT_MOC_LITERAL(255, 4), // "QRgb"
QT_MOC_LITERAL(260, 10), // "edgecolour"
QT_MOC_LITERAL(271, 8), // "gridsize"
QT_MOC_LITERAL(280, 13), // "floodfillutil"
QT_MOC_LITERAL(294, 22) // "on_fill_button_clicked"

    },
    "MainWindow\0Mouse_Pressed\0\0showMousePosition\0"
    "QPoint&\0pos\0on_show_axes_clicked\0"
    "on_Draw_clicked\0swap\0int&\0a\0b\0"
    "on_set_point1_clicked\0on_set_point2_clicked\0"
    "on_pushButton_clicked\0interpolate\0"
    "point\0x\0y\0r\0g\0blue\0delay\0DDA_for_Polygon\0"
    "x1\0y1\0x2\0y2\0boundaryfillutil\0QRgb\0"
    "edgecolour\0gridsize\0floodfillutil\0"
    "on_fill_button_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  104,    2, 0x0a,    1 /* Public */,
       3,    1,  105,    2, 0x0a,    2 /* Public */,
       6,    0,  108,    2, 0x08,    4 /* Private */,
       7,    0,  109,    2, 0x08,    5 /* Private */,
       8,    2,  110,    2, 0x08,    6 /* Private */,
      12,    0,  115,    2, 0x08,    9 /* Private */,
      13,    0,  116,    2, 0x08,   10 /* Private */,
      14,    0,  117,    2, 0x08,   11 /* Private */,
      15,    0,  118,    2, 0x08,   12 /* Private */,
      16,    5,  119,    2, 0x08,   13 /* Private */,
      22,    0,  130,    2, 0x08,   19 /* Private */,
      23,    4,  131,    2, 0x08,   20 /* Private */,
      28,    7,  140,    2, 0x08,   25 /* Private */,
      32,    6,  155,    2, 0x08,   33 /* Private */,
      33,    0,  168,    2, 0x08,   40 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 9,   10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   17,   18,   19,   20,   21,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   24,   25,   26,   27,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 29, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   17,   18,   30,   19,   20,   11,   31,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   17,   18,   19,   20,   11,   31,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Mouse_Pressed(); break;
        case 1: _t->showMousePosition((*reinterpret_cast< std::add_pointer_t<QPoint&>>(_a[1]))); break;
        case 2: _t->on_show_axes_clicked(); break;
        case 3: _t->on_Draw_clicked(); break;
        case 4: _t->swap((*reinterpret_cast< std::add_pointer_t<int&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int&>>(_a[2]))); break;
        case 5: _t->on_set_point1_clicked(); break;
        case 6: _t->on_set_point2_clicked(); break;
        case 7: _t->on_pushButton_clicked(); break;
        case 8: _t->interpolate(); break;
        case 9: _t->point((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5]))); break;
        case 10: _t->delay(); break;
        case 11: _t->DDA_for_Polygon((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 12: _t->boundaryfillutil((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QRgb>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[7]))); break;
        case 13: _t->floodfillutil((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[6]))); break;
        case 14: _t->on_fill_button_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPoint &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int &, std::false_type>, QtPrivate::TypeAndForceComplete<int &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QRgb, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
