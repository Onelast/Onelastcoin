/****************************************************************************
** Meta object code from reading C++ file 'addressbookpage.h'
**
** Created: Wed Jun 12 04:00:20 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/addressbookpage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addressbookpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AddressBookPage[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   17,   16,   16, 0x05,
      43,   17,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      73,   66,   16,   16, 0x0a,
      83,   16,   16,   16, 0x0a,
      99,   16,   16,   16, 0x08,
     125,   16,   16,   16, 0x08,
     155,   16,   16,   16, 0x08,
     184,   16,   16,   16, 0x08,
     209,   16,   16,   16, 0x08,
     236,   16,   16,   16, 0x08,
     255,   16,   16,   16, 0x08,
     285,  279,   16,   16, 0x08,
     308,   16,   16,   16, 0x08,
     328,   16,   16,   16, 0x08,
     360,  343,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AddressBookPage[] = {
    "AddressBookPage\0\0addr\0signMessage(QString)\0"
    "verifyMessage(QString)\0retval\0done(int)\0"
    "exportClicked()\0on_deleteButton_clicked()\0"
    "on_newAddressButton_clicked()\0"
    "on_copyToClipboard_clicked()\0"
    "on_signMessage_clicked()\0"
    "on_verifyMessage_clicked()\0"
    "selectionChanged()\0on_showQRCode_clicked()\0"
    "point\0contextualMenu(QPoint)\0"
    "onCopyLabelAction()\0onEditAction()\0"
    "parent,begin,end\0selectNewAddress(QModelIndex,int,int)\0"
};

void AddressBookPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AddressBookPage *_t = static_cast<AddressBookPage *>(_o);
        switch (_id) {
        case 0: _t->signMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->verifyMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->done((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->exportClicked(); break;
        case 4: _t->on_deleteButton_clicked(); break;
        case 5: _t->on_newAddressButton_clicked(); break;
        case 6: _t->on_copyToClipboard_clicked(); break;
        case 7: _t->on_signMessage_clicked(); break;
        case 8: _t->on_verifyMessage_clicked(); break;
        case 9: _t->selectionChanged(); break;
        case 10: _t->on_showQRCode_clicked(); break;
        case 11: _t->contextualMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 12: _t->onCopyLabelAction(); break;
        case 13: _t->onEditAction(); break;
        case 14: _t->selectNewAddress((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AddressBookPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AddressBookPage::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AddressBookPage,
      qt_meta_data_AddressBookPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AddressBookPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AddressBookPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AddressBookPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddressBookPage))
        return static_cast<void*>(const_cast< AddressBookPage*>(this));
    return QDialog::qt_metacast(_clname);
}

int AddressBookPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void AddressBookPage::signMessage(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AddressBookPage::verifyMessage(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
