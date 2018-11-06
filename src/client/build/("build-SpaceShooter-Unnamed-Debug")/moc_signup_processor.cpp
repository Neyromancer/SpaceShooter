/****************************************************************************
** Meta object code from reading C++ file 'signup_processor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../controller/signup_processor/signup_processor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'signup_processor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_space_shooter__client__SignupProcessor_t {
    QByteArrayData data[10];
    char stringdata0[167];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_space_shooter__client__SignupProcessor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_space_shooter__client__SignupProcessor_t qt_meta_stringdata_space_shooter__client__SignupProcessor = {
    {
QT_MOC_LITERAL(0, 0, 38), // "space_shooter::client::Signup..."
QT_MOC_LITERAL(1, 39, 12), // "invalidEmail"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 27), // "invalidPasswordConfirmation"
QT_MOC_LITERAL(4, 81, 19), // "isPasswordConfirmed"
QT_MOC_LITERAL(5, 101, 8), // "password"
QT_MOC_LITERAL(6, 110, 21), // "password_confirmation"
QT_MOC_LITERAL(7, 132, 23), // "setNameEmailAndPassword"
QT_MOC_LITERAL(8, 156, 4), // "name"
QT_MOC_LITERAL(9, 161, 5) // "email"

    },
    "space_shooter::client::SignupProcessor\0"
    "invalidEmail\0\0invalidPasswordConfirmation\0"
    "isPasswordConfirmed\0password\0"
    "password_confirmation\0setNameEmailAndPassword\0"
    "name\0email"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_space_shooter__client__SignupProcessor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   48, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    2,   36,    2, 0x02 /* Public */,
       7,    3,   41,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,    5,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    8,    9,    5,

 // properties: name, type, flags
       6, QMetaType::QString, 0x00495003,
       9, QMetaType::QString, 0x00495003,

 // properties: notify_signal_id
       1,
       0,

       0        // eod
};

void space_shooter::client::SignupProcessor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SignupProcessor *_t = static_cast<SignupProcessor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->invalidEmail(); break;
        case 1: _t->invalidPasswordConfirmation(); break;
        case 2: { bool _r = _t->isPasswordConfirmed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->setNameEmailAndPassword((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SignupProcessor::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SignupProcessor::invalidEmail)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SignupProcessor::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SignupProcessor::invalidPasswordConfirmation)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        SignupProcessor *_t = static_cast<SignupProcessor *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->password_confirmation_; break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->email_; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        SignupProcessor *_t = static_cast<SignupProcessor *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->password_confirmation_ != *reinterpret_cast< QString*>(_v)) {
                _t->password_confirmation_ = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->invalidPasswordConfirmation();
            }
            break;
        case 1:
            if (_t->email_ != *reinterpret_cast< QString*>(_v)) {
                _t->email_ = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->invalidEmail();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject space_shooter::client::SignupProcessor::staticMetaObject = {
    { &LoginProcessor::staticMetaObject, qt_meta_stringdata_space_shooter__client__SignupProcessor.data,
      qt_meta_data_space_shooter__client__SignupProcessor,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *space_shooter::client::SignupProcessor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *space_shooter::client::SignupProcessor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_space_shooter__client__SignupProcessor.stringdata0))
        return static_cast<void*>(this);
    return LoginProcessor::qt_metacast(_clname);
}

int space_shooter::client::SignupProcessor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LoginProcessor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void space_shooter::client::SignupProcessor::invalidEmail()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void space_shooter::client::SignupProcessor::invalidPasswordConfirmation()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
