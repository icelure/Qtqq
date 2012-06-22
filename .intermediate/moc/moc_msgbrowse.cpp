/****************************************************************************
** Meta object code from reading C++ file 'msgbrowse.h'
**
** Created: Fri Jun 22 12:48:04 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/msgbrowse.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'msgbrowse.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MsgBrowse[] = {

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
      25,   11,   10,   10, 0x0a,
      61,   57,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MsgBrowse[] = {
    "MsgBrowse\0\0id,local_path\0"
    "replaceRealImg(QString,QString)\0url\0"
    "onLinkClicked(QUrl)\0"
};

void MsgBrowse::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MsgBrowse *_t = static_cast<MsgBrowse *>(_o);
        switch (_id) {
        case 0: _t->replaceRealImg((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->onLinkClicked((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MsgBrowse::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MsgBrowse::staticMetaObject = {
    { &QWebView::staticMetaObject, qt_meta_stringdata_MsgBrowse,
      qt_meta_data_MsgBrowse, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MsgBrowse::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MsgBrowse::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MsgBrowse::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MsgBrowse))
        return static_cast<void*>(const_cast< MsgBrowse*>(this));
    return QWebView::qt_metacast(_clname);
}

int MsgBrowse::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWebView::qt_metacall(_c, _id, _a);
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
