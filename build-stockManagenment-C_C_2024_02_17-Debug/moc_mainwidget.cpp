/****************************************************************************
** Meta object code from reading C++ file 'mainwidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../stockManagenment/mainwidget.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSMainWidgetENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWidgetENDCLASS = QtMocHelpers::stringData(
    "MainWidget",
    "on_newbutton_clicked",
    "",
    "on_deletebutton_clicked",
    "on_addbutton_clicked",
    "on_decreasebutton_clicked",
    "on_exportbutton_clicked",
    "on_sumbutton_clicked",
    "on_lookupbutton_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWidgetENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[11];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[24];
    char stringdata4[21];
    char stringdata5[26];
    char stringdata6[24];
    char stringdata7[21];
    char stringdata8[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWidgetENDCLASS_t qt_meta_stringdata_CLASSMainWidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWidget"
        QT_MOC_LITERAL(11, 20),  // "on_newbutton_clicked"
        QT_MOC_LITERAL(32, 0),  // ""
        QT_MOC_LITERAL(33, 23),  // "on_deletebutton_clicked"
        QT_MOC_LITERAL(57, 20),  // "on_addbutton_clicked"
        QT_MOC_LITERAL(78, 25),  // "on_decreasebutton_clicked"
        QT_MOC_LITERAL(104, 23),  // "on_exportbutton_clicked"
        QT_MOC_LITERAL(128, 20),  // "on_sumbutton_clicked"
        QT_MOC_LITERAL(149, 23)   // "on_lookupbutton_clicked"
    },
    "MainWidget",
    "on_newbutton_clicked",
    "",
    "on_deletebutton_clicked",
    "on_addbutton_clicked",
    "on_decreasebutton_clicked",
    "on_exportbutton_clicked",
    "on_sumbutton_clicked",
    "on_lookupbutton_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWidgetENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x08,    1 /* Private */,
       3,    0,   57,    2, 0x08,    2 /* Private */,
       4,    0,   58,    2, 0x08,    3 /* Private */,
       5,    0,   59,    2, 0x08,    4 /* Private */,
       6,    0,   60,    2, 0x08,    5 /* Private */,
       7,    0,   61,    2, 0x08,    6 /* Private */,
       8,    0,   62,    2, 0x08,    7 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWidget, std::true_type>,
        // method 'on_newbutton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_deletebutton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_addbutton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_decreasebutton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_exportbutton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_sumbutton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_lookupbutton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_newbutton_clicked(); break;
        case 1: _t->on_deletebutton_clicked(); break;
        case 2: _t->on_addbutton_clicked(); break;
        case 3: _t->on_decreasebutton_clicked(); break;
        case 4: _t->on_exportbutton_clicked(); break;
        case 5: _t->on_sumbutton_clicked(); break;
        case 6: _t->on_lookupbutton_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *MainWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MainWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
