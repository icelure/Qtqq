/****************************************************************************
** Meta object code from reading C++ file 'qqlogincore.h'
**
** Created: Fri Jun 22 12:48:07 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/core/qqlogincore.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qqlogincore.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QQLoginCore[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   13,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      71,   65,   60,   12, 0x08,
     106,   98,   12,   12, 0x08,
     128,   12,   12,   12, 0x08,
     162,  158,  147,   12, 0x08,
     190,  186,  147,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QQLoginCore[] = {
    "QQLoginCore\0\0result\0"
    "sig_loginDone(QQLoginCore::LoginResult)\0"
    "char\0array\0getResultState(QByteArray)\0"
    "ptwebqq\0getLoginInfo(QString)\0"
    "getLoginInfoDone()\0QByteArray\0str\0"
    "hexchar2bin(QByteArray)\0pwd\0"
    "getPwMd5(QString)\0"
};

void QQLoginCore::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QQLoginCore *_t = static_cast<QQLoginCore *>(_o);
        switch (_id) {
        case 0: _t->sig_loginDone((*reinterpret_cast< QQLoginCore::LoginResult(*)>(_a[1]))); break;
        case 1: { char _r = _t->getResultState((*reinterpret_cast< const QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< char*>(_a[0]) = _r; }  break;
        case 2: _t->getLoginInfo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->getLoginInfoDone(); break;
        case 4: { QByteArray _r = _t->hexchar2bin((*reinterpret_cast< const QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 5: { QByteArray _r = _t->getPwMd5((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QQLoginCore::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QQLoginCore::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQLoginCore,
      qt_meta_data_QQLoginCore, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QQLoginCore::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QQLoginCore::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QQLoginCore::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QQLoginCore))
        return static_cast<void*>(const_cast< QQLoginCore*>(this));
    return QObject::qt_metacast(_clname);
}

int QQLoginCore::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QQLoginCore::sig_loginDone(QQLoginCore::LoginResult _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
