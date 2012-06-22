/****************************************************************************
** Meta object code from reading C++ file 'qqmainwindow.h'
**
** Created: Fri Jun 22 12:47:59 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/qqmainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qqmainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QQMainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      31,   27,   13,   13, 0x08,
      55,   51,   13,   13, 0x08,
      79,   51,   13,   13, 0x08,
     102,   51,   13,   13, 0x08,
     127,   51,   13,   13, 0x08,
     166,  151,   13,   13, 0x08,
     219,  210,   13,   13, 0x08,
     250,  244,   13,   13, 0x08,
     292,  288,   13,   13, 0x08,
     328,  288,   13,   13, 0x08,
     385,  363,   13,   13, 0x08,
     444,  437,   13,   13, 0x08,
     493,   13,   13,   13, 0x08,
     513,  508,   13,   13, 0x08,
     527,   13,   13,   13, 0x08,
     541,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QQMainWindow[] = {
    "QQMainWindow\0\0sig_logout()\0idx\0"
    "changeMyStatus(int)\0err\0getFriendListDone(bool)\0"
    "getGroupListDone(bool)\0getOnlineBuddyDone(bool)\0"
    "getRecentListDone(bool)\0type,gid,gcode\0"
    "openChatDlg(QQMsg::MsgType,QString,QString)\0"
    "listener\0closeChatDlg(QQChatDlg*)\0"
    "index\0openChatDlgByDoubleClick(QModelIndex)\0"
    "msg\0openFriendRequestDlg(ShareQQMsgPtr)\0"
    "openGroupRequestDlg(ShareQQMsgPtr)\0"
    "id,status,client_type\0"
    "changeFriendStatus(QString,FriendStatus,ClientType)\0"
    "reason\0trayActivated(QSystemTrayIcon::ActivationReason)\0"
    "openMainMenu()\0mute\0setMute(bool)\0"
    "slot_logout()\0openFirstChatDlg()\0"
};

void QQMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QQMainWindow *_t = static_cast<QQMainWindow *>(_o);
        switch (_id) {
        case 0: _t->sig_logout(); break;
        case 1: _t->changeMyStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->getFriendListDone((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->getGroupListDone((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->getOnlineBuddyDone((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->getRecentListDone((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->openChatDlg((*reinterpret_cast< QQMsg::MsgType(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 7: _t->closeChatDlg((*reinterpret_cast< QQChatDlg*(*)>(_a[1]))); break;
        case 8: _t->openChatDlgByDoubleClick((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 9: _t->openFriendRequestDlg((*reinterpret_cast< ShareQQMsgPtr(*)>(_a[1]))); break;
        case 10: _t->openGroupRequestDlg((*reinterpret_cast< ShareQQMsgPtr(*)>(_a[1]))); break;
        case 11: _t->changeFriendStatus((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< FriendStatus(*)>(_a[2])),(*reinterpret_cast< ClientType(*)>(_a[3]))); break;
        case 12: _t->trayActivated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 13: _t->openMainMenu(); break;
        case 14: _t->setMute((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->slot_logout(); break;
        case 16: _t->openFirstChatDlg(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QQMainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QQMainWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QQMainWindow,
      qt_meta_data_QQMainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QQMainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QQMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QQMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QQMainWindow))
        return static_cast<void*>(const_cast< QQMainWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int QQMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void QQMainWindow::sig_logout()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
