/****************************************************************************
** Meta object code from reading C++ file 'inAndOutbord.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../stockManagenment/inAndOutbord.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'inAndOutbord.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSInAndOutbordENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSInAndOutbordENDCLASS = QtMocHelpers::stringData(
    "InAndOutbord",
    "oneOperationEnd",
    "",
    "on_addButton_clicked",
    "on_closeButton_clicked",
    "on_pushButton_clicked",
    "on_transButton_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSInAndOutbordENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[13];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[21];
    char stringdata4[23];
    char stringdata5[22];
    char stringdata6[23];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSInAndOutbordENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSInAndOutbordENDCLASS_t qt_meta_stringdata_CLASSInAndOutbordENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "InAndOutbord"
        QT_MOC_LITERAL(13, 15),  // "oneOperationEnd"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 20),  // "on_addButton_clicked"
        QT_MOC_LITERAL(51, 22),  // "on_closeButton_clicked"
        QT_MOC_LITERAL(74, 21),  // "on_pushButton_clicked"
        QT_MOC_LITERAL(96, 22)   // "on_transButton_clicked"
    },
    "InAndOutbord",
    "oneOperationEnd",
    "",
    "on_addButton_clicked",
    "on_closeButton_clicked",
    "on_pushButton_clicked",
    "on_transButton_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSInAndOutbordENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   45,    2, 0x08,    2 /* Private */,
       4,    0,   46,    2, 0x08,    3 /* Private */,
       5,    0,   47,    2, 0x08,    4 /* Private */,
       6,    0,   48,    2, 0x08,    5 /* Private */,

 // signals: parameters
    QMetaType::Int,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject InAndOutbord::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSInAndOutbordENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSInAndOutbordENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSInAndOutbordENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<InAndOutbord, std::true_type>,
        // method 'oneOperationEnd'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_addButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_closeButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_transButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void InAndOutbord::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InAndOutbord *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { int _r = _t->oneOperationEnd();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->on_addButton_clicked(); break;
        case 2: _t->on_closeButton_clicked(); break;
        case 3: _t->on_pushButton_clicked(); break;
        case 4: _t->on_transButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = int (InAndOutbord::*)();
            if (_t _q_method = &InAndOutbord::oneOperationEnd; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *InAndOutbord::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InAndOutbord::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSInAndOutbordENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int InAndOutbord::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
int InAndOutbord::oneOperationEnd()
{
    int _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}
QT_WARNING_POP
