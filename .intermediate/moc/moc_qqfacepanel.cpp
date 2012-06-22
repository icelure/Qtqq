/****************************************************************************
** Meta object code from reading C++ file 'qqfacepanel.h'
**
** Created: Fri Jun 22 12:47:50 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/qqfacepanel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qqfacepanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QQFacePanel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   13,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      44,   39,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QQFacePanel[] = {
    "QQFacePanel\0\0id\0qqfaceClicked(QString)\0"
    "item\0onItemClicked(QTableWidgetItem*)\0"
};

void QQFacePanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QQFacePanel *_t = static_cast<QQFacePanel *>(_o);
        switch (_id) {
        case 0: _t->qqfaceClicked((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->onItemClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QQFacePanel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QQFacePanel::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QQFacePanel,
      qt_meta_data_QQFacePanel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QQFacePanel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QQFacePanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QQFacePanel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QQFacePanel))
        return static_cast<void*>(const_cast< QQFacePanel*>(this));
    return QDialog::qt_metacast(_clname);
}

int QQFacePanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void QQFacePanel::qqfaceClicked(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
