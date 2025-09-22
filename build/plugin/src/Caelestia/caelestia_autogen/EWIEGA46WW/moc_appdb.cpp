/****************************************************************************
** Meta object code from reading C++ file 'appdb.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../plugin/src/Caelestia/appdb.hpp"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'appdb.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.2. It"
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
struct qt_meta_tag_ZN9caelestia8AppEntryE_t {};
} // unnamed namespace

template <> constexpr inline auto caelestia::AppEntry::qt_create_metaobjectdata<qt_meta_tag_ZN9caelestia8AppEntryE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "caelestia::AppEntry",
        "QML.Element",
        "auto",
        "QML.Creatable",
        "false",
        "QML.UncreatableReason",
        "AppEntry instances can only be retrieved from an AppDb",
        "frequencyChanged",
        "",
        "entry",
        "frequency",
        "id",
        "name",
        "desc",
        "execString",
        "wmClass",
        "genericName",
        "categories",
        "keywords"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'frequencyChanged'
        QtMocHelpers::SignalData<void()>(7, 8, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'entry'
        QtMocHelpers::PropertyData<QObject*>(9, QMetaType::QObjectStar, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'frequency'
        QtMocHelpers::PropertyData<quint32>(10, QMetaType::UInt, QMC::DefaultPropertyFlags, 0),
        // property 'id'
        QtMocHelpers::PropertyData<QString>(11, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'name'
        QtMocHelpers::PropertyData<QString>(12, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'desc'
        QtMocHelpers::PropertyData<QString>(13, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'execString'
        QtMocHelpers::PropertyData<QString>(14, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'wmClass'
        QtMocHelpers::PropertyData<QString>(15, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'genericName'
        QtMocHelpers::PropertyData<QString>(16, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'categories'
        QtMocHelpers::PropertyData<QString>(17, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'keywords'
        QtMocHelpers::PropertyData<QString>(18, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
            {    3,    4 },
            {    5,    6 },
    });
    return QtMocHelpers::metaObjectData<AppEntry, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject caelestia::AppEntry::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9caelestia8AppEntryE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9caelestia8AppEntryE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN9caelestia8AppEntryE_t>.metaTypes,
    nullptr
} };

void caelestia::AppEntry::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<AppEntry *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->frequencyChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (AppEntry::*)()>(_a, &AppEntry::frequencyChanged, 0))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QObject**>(_v) = _t->entry(); break;
        case 1: *reinterpret_cast<quint32*>(_v) = _t->frequency(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->id(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->name(); break;
        case 4: *reinterpret_cast<QString*>(_v) = _t->desc(); break;
        case 5: *reinterpret_cast<QString*>(_v) = _t->execString(); break;
        case 6: *reinterpret_cast<QString*>(_v) = _t->wmClass(); break;
        case 7: *reinterpret_cast<QString*>(_v) = _t->genericName(); break;
        case 8: *reinterpret_cast<QString*>(_v) = _t->categories(); break;
        case 9: *reinterpret_cast<QString*>(_v) = _t->keywords(); break;
        default: break;
        }
    }
}

const QMetaObject *caelestia::AppEntry::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *caelestia::AppEntry::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9caelestia8AppEntryE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int caelestia::AppEntry::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void caelestia::AppEntry::frequencyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
namespace {
struct qt_meta_tag_ZN9caelestia5AppDbE_t {};
} // unnamed namespace

template <> constexpr inline auto caelestia::AppDb::qt_create_metaobjectdata<qt_meta_tag_ZN9caelestia5AppDbE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "caelestia::AppDb",
        "QML.Element",
        "auto",
        "pathChanged",
        "",
        "entriesChanged",
        "appsChanged",
        "incrementFrequency",
        "id",
        "uuid",
        "path",
        "entries",
        "QList<QObject*>",
        "apps",
        "QList<AppEntry*>"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'pathChanged'
        QtMocHelpers::SignalData<void()>(3, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'entriesChanged'
        QtMocHelpers::SignalData<void()>(5, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'appsChanged'
        QtMocHelpers::SignalData<void()>(6, 4, QMC::AccessPublic, QMetaType::Void),
        // Method 'incrementFrequency'
        QtMocHelpers::MethodData<void(const QString &)>(7, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 8 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'uuid'
        QtMocHelpers::PropertyData<QString>(9, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'path'
        QtMocHelpers::PropertyData<QString>(10, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Required, 0),
        // property 'entries'
        QtMocHelpers::PropertyData<QList<QObject*>>(11, 0x80000000 | 12, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet | QMC::Required, 1),
        // property 'apps'
        QtMocHelpers::PropertyData<QList<AppEntry*>>(13, 0x80000000 | 14, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 2),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
    });
    return QtMocHelpers::metaObjectData<AppDb, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject caelestia::AppDb::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9caelestia5AppDbE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9caelestia5AppDbE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN9caelestia5AppDbE_t>.metaTypes,
    nullptr
} };

void caelestia::AppDb::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<AppDb *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->pathChanged(); break;
        case 1: _t->entriesChanged(); break;
        case 2: _t->appsChanged(); break;
        case 3: _t->incrementFrequency((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (AppDb::*)()>(_a, &AppDb::pathChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (AppDb::*)()>(_a, &AppDb::entriesChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (AppDb::*)()>(_a, &AppDb::appsChanged, 2))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<AppEntry*> >(); break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QObject*> >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->uuid(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->path(); break;
        case 2: *reinterpret_cast<QList<QObject*>*>(_v) = _t->entries(); break;
        case 3: *reinterpret_cast<QList<AppEntry*>*>(_v) = _t->apps(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setPath(*reinterpret_cast<QString*>(_v)); break;
        case 2: _t->setEntries(*reinterpret_cast<QList<QObject*>*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *caelestia::AppDb::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *caelestia::AppDb::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9caelestia5AppDbE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int caelestia::AppDb::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void caelestia::AppDb::pathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void caelestia::AppDb::entriesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void caelestia::AppDb::appsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
