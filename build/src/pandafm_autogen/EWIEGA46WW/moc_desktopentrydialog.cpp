/****************************************************************************
** Meta object code from reading C++ file 'desktopentrydialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/desktopentrydialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'desktopentrydialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PCManFM__DesktopEntryDialog_t {
    QByteArrayData data[8];
    char stringdata0[119];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PCManFM__DesktopEntryDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PCManFM__DesktopEntryDialog_t qt_meta_stringdata_PCManFM__DesktopEntryDialog = {
    {
QT_MOC_LITERAL(0, 0, 27), // "PCManFM::DesktopEntryDialog"
QT_MOC_LITERAL(1, 28, 19), // "desktopEntryCreated"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 4), // "name"
QT_MOC_LITERAL(4, 54, 14), // "onChangingType"
QT_MOC_LITERAL(5, 69, 4), // "type"
QT_MOC_LITERAL(6, 74, 20), // "onClickingIconButton"
QT_MOC_LITERAL(7, 95, 23) // "onClickingCommandButton"

    },
    "PCManFM::DesktopEntryDialog\0"
    "desktopEntryCreated\0\0name\0onChangingType\0"
    "type\0onClickingIconButton\0"
    "onClickingCommandButton"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PCManFM__DesktopEntryDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   37,    2, 0x08 /* Private */,
       6,    0,   40,    2, 0x08 /* Private */,
       7,    0,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PCManFM::DesktopEntryDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DesktopEntryDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->desktopEntryCreated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->onChangingType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->onClickingIconButton(); break;
        case 3: _t->onClickingCommandButton(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DesktopEntryDialog::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DesktopEntryDialog::desktopEntryCreated)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PCManFM::DesktopEntryDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_PCManFM__DesktopEntryDialog.data,
    qt_meta_data_PCManFM__DesktopEntryDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PCManFM::DesktopEntryDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PCManFM::DesktopEntryDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PCManFM__DesktopEntryDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int PCManFM::DesktopEntryDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void PCManFM::DesktopEntryDialog::desktopEntryCreated(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
