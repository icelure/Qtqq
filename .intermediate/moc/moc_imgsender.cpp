/****************************************************************************
** Meta object code from reading C++ file 'imgsender.h'
**
** Created: Fri Jun 22 12:48:07 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/core/imgsender.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'imgsender.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ImgSender[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   11,   10,   10, 0x05,
      53,   51,   10,   10, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_ImgSender[] = {
    "ImgSender\0\0,file_info\0"
    "postResult(QString,FileInfo)\0,\0"
    "sendDone(QString,QString)\0"
};

void ImgSender::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ImgSender *_t = static_cast<ImgSender *>(_o);
        switch (_id) {
        case 0: _t->postResult((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< FileInfo(*)>(_a[2]))); break;
        case 1: _t->sendDone((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ImgSender::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ImgSender::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_ImgSender,
      qt_meta_data_ImgSender, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ImgSender::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ImgSender::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ImgSender::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ImgSender))
        return static_cast<void*>(const_cast< ImgSender*>(this));
    return QThread::qt_metacast(_clname);
}

int ImgSender::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void ImgSender::postResult(const QString _t1, FileInfo _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ImgSender::sendDone(const QString & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
