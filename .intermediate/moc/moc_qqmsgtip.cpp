/****************************************************************************
** Meta object code from reading C++ file 'qqmsgtip.h'
**
** Created: Fri Jun 22 12:48:01 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/qqmsgtip.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qqmsgtip.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QQMsgTip[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,
      43,   24,    9,    9, 0x05,
      96,   92,    9,    9, 0x05,
     136,   92,    9,    9, 0x05,
     180,  175,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
     217,  211,    9,    9, 0x0a,
     236,  175,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QQMsgTip[] = {
    "QQMsgTip\0\0addItemDone()\0type,talk_to,gcode\0"
    "activatedChatDlg(QQMsg::MsgType,QString,QString)\0"
    "msg\0activateFriendRequestDlg(ShareQQMsgPtr)\0"
    "activateGroupRequestDlg(ShareQQMsgPtr)\0"
    "type\0bibibi(SoundPlayer::SoundType)\0"
    "index\0slotActivated(int)\0"
    "beginBibibi(SoundPlayer::SoundType)\0"
};

void QQMsgTip::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QQMsgTip *_t = static_cast<QQMsgTip *>(_o);
        switch (_id) {
        case 0: _t->addItemDone(); break;
        case 1: _t->activatedChatDlg((*reinterpret_cast< QQMsg::MsgType(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 2: _t->activateFriendRequestDlg((*reinterpret_cast< ShareQQMsgPtr(*)>(_a[1]))); break;
        case 3: _t->activateGroupRequestDlg((*reinterpret_cast< ShareQQMsgPtr(*)>(_a[1]))); break;
        case 4: _t->bibibi((*reinterpret_cast< SoundPlayer::SoundType(*)>(_a[1]))); break;
        case 5: _t->slotActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->beginBibibi((*reinterpret_cast< SoundPlayer::SoundType(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QQMsgTip::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QQMsgTip::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QQMsgTip,
      qt_meta_data_QQMsgTip, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QQMsgTip::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QQMsgTip::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QQMsgTip::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QQMsgTip))
        return static_cast<void*>(const_cast< QQMsgTip*>(this));
    return QWidget::qt_metacast(_clname);
}

int QQMsgTip::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void QQMsgTip::addItemDone()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QQMsgTip::activatedChatDlg(QQMsg::MsgType _t1, QString _t2, QString _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QQMsgTip::activateFriendRequestDlg(ShareQQMsgPtr _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QQMsgTip::activateGroupRequestDlg(ShareQQMsgPtr _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QQMsgTip::bibibi(SoundPlayer::SoundType _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
