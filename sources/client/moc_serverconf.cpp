/****************************************************************************
** Meta object code from reading C++ file 'serverconf.h'
**
** Created: Wed Jan 27 01:03:49 2010
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "serverconf.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'serverconf.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ServerConf[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      16,   12,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      31,   11,   11,   11, 0x0a,
      45,   11,   11,   11, 0x0a,
      66,   62,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ServerConf[] = {
    "ServerConf\0\0how\0Connected(int)\0"
    "onInputEdit()\0ConnectAttempt()\0rez\0"
    "ConnectAnswer(int)\0"
};

const QMetaObject ServerConf::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ServerConf,
      qt_meta_data_ServerConf, 0 }
};

const QMetaObject *ServerConf::metaObject() const
{
    return &staticMetaObject;
}

void *ServerConf::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ServerConf))
        return static_cast<void*>(const_cast< ServerConf*>(this));
    return QWidget::qt_metacast(_clname);
}

int ServerConf::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: Connected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: onInputEdit(); break;
        case 2: ConnectAttempt(); break;
        case 3: ConnectAnswer((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void ServerConf::Connected(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
