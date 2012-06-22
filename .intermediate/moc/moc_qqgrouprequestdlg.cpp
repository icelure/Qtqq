/****************************************************************************
** Meta object code from reading C++ file 'qqgrouprequestdlg.h'
**
** Created: Fri Jun 22 12:47:56 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/qqgrouprequestdlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qqgrouprequestdlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QQGroupRequestDlg[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x08,
      35,   18,   18,   18, 0x08,
      61,   55,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QQGroupRequestDlg[] = {
    "QQGroupRequestDlg\0\0slotOkClicked()\0"
    "slotIgnoreClicked()\0check\0"
    "slotToggleDenyReason(bool)\0"
};

void QQGroupRequestDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QQGroupRequestDlg *_t = static_cast<QQGroupRequestDlg *>(_o);
        switch (_id) {
        case 0: _t->slotOkClicked(); break;
        case 1: _t->slotIgnoreClicked(); break;
        case 2: _t->slotToggleDenyReason((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QQGroupRequestDlg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QQGroupRequestDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QQGroupRequestDlg,
      qt_meta_data_QQGroupRequestDlg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QQGroupRequestDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QQGroupRequestDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QQGroupRequestDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QQGroupRequestDlg))
        return static_cast<void*>(const_cast< QQGroupRequestDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int QQGroupRequestDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
