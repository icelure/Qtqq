/****************************************************************************
** Meta object code from reading C++ file 'qqchatlogwin.h'
**
** Created: Fri Jun 22 12:48:13 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/qqchatlogwin.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qqchatlogwin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QQChatLogWin[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x0a,
      28,   13,   13,   13, 0x0a,
      41,   13,   13,   13, 0x0a,
      55,   13,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QQChatLogWin[] = {
    "QQChatLogWin\0\0getNextPage()\0getPrePage()\0"
    "getLastPage()\0getFirstPage()\0"
};

void QQChatLogWin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QQChatLogWin *_t = static_cast<QQChatLogWin *>(_o);
        switch (_id) {
        case 0: _t->getNextPage(); break;
        case 1: _t->getPrePage(); break;
        case 2: _t->getLastPage(); break;
        case 3: _t->getFirstPage(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QQChatLogWin::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QQChatLogWin::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QQChatLogWin,
      qt_meta_data_QQChatLogWin, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QQChatLogWin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QQChatLogWin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QQChatLogWin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QQChatLogWin))
        return static_cast<void*>(const_cast< QQChatLogWin*>(this));
    return QWidget::qt_metacast(_clname);
}

int QQChatLogWin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
