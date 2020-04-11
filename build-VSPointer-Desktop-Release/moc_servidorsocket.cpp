/****************************************************************************
** Meta object code from reading C++ file 'servidorsocket.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../VSPointer/servidorsocket.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'servidorsocket.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ServidorSocket_t {
    QByteArrayData data[9];
    char stringdata0[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ServidorSocket_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ServidorSocket_t qt_meta_stringdata_ServidorSocket = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ServidorSocket"
QT_MOC_LITERAL(1, 15, 15), // "mensajeRecibido"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 11), // "enumeracion"
QT_MOC_LITERAL(4, 44, 7), // "mensaje"
QT_MOC_LITERAL(5, 52, 14), // "ClienteSocket*"
QT_MOC_LITERAL(6, 67, 6), // "socket"
QT_MOC_LITERAL(7, 74, 16), // "clienteConectado"
QT_MOC_LITERAL(8, 91, 19) // "clienteDesconectado"

    },
    "ServidorSocket\0mensajeRecibido\0\0"
    "enumeracion\0mensaje\0ClienteSocket*\0"
    "socket\0clienteConectado\0clienteDesconectado"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ServidorSocket[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   29,    2, 0x06 /* Public */,
       7,    1,   36,    2, 0x06 /* Public */,
       8,    1,   39,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString, 0x80000000 | 5,    3,    4,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void ServidorSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ServidorSocket *_t = static_cast<ServidorSocket *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mensajeRecibido((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< ClienteSocket*(*)>(_a[3]))); break;
        case 1: _t->clienteConectado((*reinterpret_cast< ClienteSocket*(*)>(_a[1]))); break;
        case 2: _t->clienteDesconectado((*reinterpret_cast< ClienteSocket*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ServidorSocket::*_t)(int , const QString & , ClienteSocket * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ServidorSocket::mensajeRecibido)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ServidorSocket::*_t)(ClienteSocket * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ServidorSocket::clienteConectado)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ServidorSocket::*_t)(ClienteSocket * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ServidorSocket::clienteDesconectado)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject ServidorSocket::staticMetaObject = {
    { &QTcpServer::staticMetaObject, qt_meta_stringdata_ServidorSocket.data,
      qt_meta_data_ServidorSocket,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ServidorSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ServidorSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ServidorSocket.stringdata0))
        return static_cast<void*>(this);
    return QTcpServer::qt_metacast(_clname);
}

int ServidorSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpServer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void ServidorSocket::mensajeRecibido(int _t1, const QString & _t2, ClienteSocket * _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ServidorSocket::clienteConectado(ClienteSocket * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ServidorSocket::clienteDesconectado(ClienteSocket * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
