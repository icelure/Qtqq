/****************************************************************************
** Meta object code from reading C++ file 'qqgroupchatdlg.h'
**
** Created: Fri Jun 22 12:47:54 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/qqgroupchatdlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qqgroupchatdlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QQGroupChatDlg[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   16,   15,   15, 0x08,
      42,   16,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QQGroupChatDlg[] = {
    "QQGroupChatDlg\0\0err\0getGfaceSigDone(bool)\0"
    "getGroupMemberListDone(bool)\0"
};

void QQGroupChatDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QQGroupChatDlg *_t = static_cast<QQGroupChatDlg *>(_o);
        switch (_id) {
        case 0: _t->getGfaceSigDone((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->getGroupMemberListDone((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QQGroupChatDlg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QQGroupChatDlg::staticMetaObject = {
    { &QQChatDlg::staticMetaObject, qt_meta_stringdata_QQGroupChatDlg,
      qt_meta_data_QQGroupChatDlg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QQGroupChatDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QQGroupChatDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QQGroupChatDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QQGroupChatDlg))
        return static_cast<void*>(const_cast< QQGroupChatDlg*>(this));
    return QQChatDlg::qt_metacast(_clname);
}

int QQGroupChatDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQChatDlg::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
