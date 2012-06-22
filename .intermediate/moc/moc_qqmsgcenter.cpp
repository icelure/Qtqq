/****************************************************************************
** Meta object code from reading C++ file 'qqmsgcenter.h'
**
** Created: Fri Jun 22 12:48:08 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/core/qqmsgcenter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qqmsgcenter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QQMsgCenter[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      26,   13,   12,   12, 0x05,
     104,   82,   12,   12, 0x05,
     168,  165,   12,   12, 0x05,
     196,  165,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
     229,  225,   12,   12, 0x0a,
     252,   13,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QQMsgCenter[] = {
    "QQMsgCenter\0\0listener,msg\0"
    "distributeMsgInMainThread(QQMsgListener*,ShareQQMsgPtr)\0"
    "uin,state,client_type\0"
    "buddiesStateChangeMsgArrive(QString,FriendStatus,ClientType)\0"
    "id\0groupChatMsgArrive(QString)\0"
    "friendChatMsgArrive(QString)\0msg\0"
    "pushMsg(ShareQQMsgPtr)\0"
    "distributeMsg(QQMsgListener*,ShareQQMsgPtr)\0"
};

void QQMsgCenter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QQMsgCenter *_t = static_cast<QQMsgCenter *>(_o);
        switch (_id) {
        case 0: _t->distributeMsgInMainThread((*reinterpret_cast< QQMsgListener*(*)>(_a[1])),(*reinterpret_cast< ShareQQMsgPtr(*)>(_a[2]))); break;
        case 1: _t->buddiesStateChangeMsgArrive((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< FriendStatus(*)>(_a[2])),(*reinterpret_cast< ClientType(*)>(_a[3]))); break;
        case 2: _t->groupChatMsgArrive((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->friendChatMsgArrive((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->pushMsg((*reinterpret_cast< ShareQQMsgPtr(*)>(_a[1]))); break;
        case 5: _t->distributeMsg((*reinterpret_cast< QQMsgListener*(*)>(_a[1])),(*reinterpret_cast< ShareQQMsgPtr(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QQMsgCenter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QQMsgCenter::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_QQMsgCenter,
      qt_meta_data_QQMsgCenter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QQMsgCenter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QQMsgCenter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QQMsgCenter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QQMsgCenter))
        return static_cast<void*>(const_cast< QQMsgCenter*>(this));
    return QThread::qt_metacast(_clname);
}

int QQMsgCenter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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
void QQMsgCenter::distributeMsgInMainThread(QQMsgListener * _t1, ShareQQMsgPtr _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QQMsgCenter::buddiesStateChangeMsgArrive(QString _t1, FriendStatus _t2, ClientType _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QQMsgCenter::groupChatMsgArrive(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QQMsgCenter::friendChatMsgArrive(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
