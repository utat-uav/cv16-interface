/****************************************************************************
** Meta object code from reading C++ file 'targetlistwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../targetlistwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'targetlistwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TargetListWindow_t {
    QByteArrayData data[12];
    char stringdata0[194];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TargetListWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TargetListWindow_t qt_meta_stringdata_TargetListWindow = {
    {
QT_MOC_LITERAL(0, 0, 16), // "TargetListWindow"
QT_MOC_LITERAL(1, 17, 18), // "on_newItem_clicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 15), // "on_edit_clicked"
QT_MOC_LITERAL(4, 53, 23), // "on_deleteButton_clicked"
QT_MOC_LITERAL(5, 77, 19), // "on_upButton_clicked"
QT_MOC_LITERAL(6, 97, 21), // "on_downButton_clicked"
QT_MOC_LITERAL(7, 119, 4), // "sort"
QT_MOC_LITERAL(8, 124, 3), // "col"
QT_MOC_LITERAL(9, 128, 32), // "on_targetListTable_doubleClicked"
QT_MOC_LITERAL(10, 161, 5), // "index"
QT_MOC_LITERAL(11, 167, 26) // "on_targetListTable_clicked"

    },
    "TargetListWindow\0on_newItem_clicked\0"
    "\0on_edit_clicked\0on_deleteButton_clicked\0"
    "on_upButton_clicked\0on_downButton_clicked\0"
    "sort\0col\0on_targetListTable_doubleClicked\0"
    "index\0on_targetListTable_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TargetListWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    1,   59,    2, 0x08 /* Private */,
       9,    1,   62,    2, 0x08 /* Private */,
      11,    1,   65,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::QModelIndex,   10,
    QMetaType::Void, QMetaType::QModelIndex,   10,

       0        // eod
};

void TargetListWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TargetListWindow *_t = static_cast<TargetListWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_newItem_clicked(); break;
        case 1: _t->on_edit_clicked(); break;
        case 2: _t->on_deleteButton_clicked(); break;
        case 3: _t->on_upButton_clicked(); break;
        case 4: _t->on_downButton_clicked(); break;
        case 5: _t->sort((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_targetListTable_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 7: _t->on_targetListTable_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject TargetListWindow::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_TargetListWindow.data,
      qt_meta_data_TargetListWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TargetListWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TargetListWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TargetListWindow.stringdata0))
        return static_cast<void*>(const_cast< TargetListWindow*>(this));
    return QDialog::qt_metacast(_clname);
}

int TargetListWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
struct qt_meta_stringdata_CustomLabel_t {
    QByteArrayData data[3];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CustomLabel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CustomLabel_t qt_meta_stringdata_CustomLabel = {
    {
QT_MOC_LITERAL(0, 0, 11), // "CustomLabel"
QT_MOC_LITERAL(1, 12, 12), // "mousePressed"
QT_MOC_LITERAL(2, 25, 0) // ""

    },
    "CustomLabel\0mousePressed\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CustomLabel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPoint,    2,

       0        // eod
};

void CustomLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CustomLabel *_t = static_cast<CustomLabel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mousePressed((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CustomLabel::*_t)(const QPoint & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CustomLabel::mousePressed)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject CustomLabel::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_CustomLabel.data,
      qt_meta_data_CustomLabel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CustomLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CustomLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CustomLabel.stringdata0))
        return static_cast<void*>(const_cast< CustomLabel*>(this));
    return QLabel::qt_metacast(_clname);
}

int CustomLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void CustomLabel::mousePressed(const QPoint & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
