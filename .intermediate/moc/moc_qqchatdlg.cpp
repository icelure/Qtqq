/****************************************************************************
** Meta object code from reading C++ file 'qqchatdlg.h'
**
** Created: Fri Jun 22 12:47:49 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/qqchatdlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qqchatdlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QQChatDlg[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   11,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      43,   10,   10,   10, 0x08,
      64,   10,   10,   10, 0x08,
      82,   10,   10,   10, 0x08,
      99,   10,   10,   10, 0x08,
     129,  109,   10,   10, 0x08,
     167,  159,   10,   10, 0x08,
     189,  159,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QQChatDlg[] = {
    "QQChatDlg\0\0listener\0chatFinish(QQChatDlg*)\0"
    "openPathDialog(bool)\0openQQFacePanel()\0"
    "openChatLogWin()\0sendMsg()\0"
    "unique_id,file_info\0setFileInfo(QString,FileInfo)\0"
    "checked\0setSendByReturn(bool)\0"
    "setSendByCtrlReturn(bool)\0"
};

void QQChatDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QQChatDlg *_t = static_cast<QQChatDlg *>(_o);
        switch (_id) {
        case 0: _t->chatFinish((*reinterpret_cast< QQChatDlg*(*)>(_a[1]))); break;
        case 1: _t->openPathDialog((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->openQQFacePanel(); break;
        case 3: _t->openChatLogWin(); break;
        case 4: _t->sendMsg(); break;
        case 5: _t->setFileInfo((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< FileInfo(*)>(_a[2]))); break;
        case 6: _t->setSendByReturn((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setSendByCtrlReturn((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QQChatDlg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QQChatDlg::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QQChatDlg,
      qt_meta_data_QQChatDlg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QQChatDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QQChatDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QQChatDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QQChatDlg))
        return static_cast<void*>(const_cast< QQChatDlg*>(this));
    if (!strcmp(_clname, "QQMsgListener"))
        return static_cast< QQMsgListener*>(const_cast< QQChatDlg*>(this));
    return QWidget::qt_metacast(_clname);
}

int QQChatDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void QQChatDlg::chatFinish(QQChatDlg * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
