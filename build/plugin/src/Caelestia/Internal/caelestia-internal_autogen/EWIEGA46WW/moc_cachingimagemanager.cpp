/****************************************************************************
** Meta object code from reading C++ file 'cachingimagemanager.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../plugin/src/Caelestia/Internal/cachingimagemanager.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cachingimagemanager.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN9caelestia19CachingImageManagerE_t {};
} // unnamed namespace

template <> constexpr inline auto caelestia::CachingImageManager::qt_create_metaobjectdata<qt_meta_tag_ZN9caelestia19CachingImageManagerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "caelestia::CachingImageManager",
        "QML.Element",
        "auto",
        "itemChanged",
        "",
        "cacheDirChanged",
        "pathChanged",
        "cachePathChanged",
        "usingCacheChanged",
        "updateSource",
        "path",
        "item",
        "QQuickItem*",
        "cacheDir",
        "cachePath"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'itemChanged'
        QtMocHelpers::SignalData<void()>(3, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'cacheDirChanged'
        QtMocHelpers::SignalData<void()>(5, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'pathChanged'
        QtMocHelpers::SignalData<void()>(6, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'cachePathChanged'
        QtMocHelpers::SignalData<void()>(7, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'usingCacheChanged'
        QtMocHelpers::SignalData<void()>(8, 4, QMC::AccessPublic, QMetaType::Void),
        // Method 'updateSource'
        QtMocHelpers::MethodData<void()>(9, 4, QMC::AccessPublic, QMetaType::Void),
        // Method 'updateSource'
        QtMocHelpers::MethodData<void(const QString &)>(9, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 10 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'item'
        QtMocHelpers::PropertyData<QQuickItem*>(11, 0x80000000 | 12, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet | QMC::Required, 0),
        // property 'cacheDir'
        QtMocHelpers::PropertyData<QUrl>(13, QMetaType::QUrl, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Required, 1),
        // property 'path'
        QtMocHelpers::PropertyData<QString>(10, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'cachePath'
        QtMocHelpers::PropertyData<QUrl>(14, QMetaType::QUrl, QMC::DefaultPropertyFlags, 3),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
    });
    return QtMocHelpers::metaObjectData<CachingImageManager, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject caelestia::CachingImageManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9caelestia19CachingImageManagerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9caelestia19CachingImageManagerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN9caelestia19CachingImageManagerE_t>.metaTypes,
    nullptr
} };

void caelestia::CachingImageManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CachingImageManager *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->itemChanged(); break;
        case 1: _t->cacheDirChanged(); break;
        case 2: _t->pathChanged(); break;
        case 3: _t->cachePathChanged(); break;
        case 4: _t->usingCacheChanged(); break;
        case 5: _t->updateSource(); break;
        case 6: _t->updateSource((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (CachingImageManager::*)()>(_a, &CachingImageManager::itemChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (CachingImageManager::*)()>(_a, &CachingImageManager::cacheDirChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (CachingImageManager::*)()>(_a, &CachingImageManager::pathChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (CachingImageManager::*)()>(_a, &CachingImageManager::cachePathChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (CachingImageManager::*)()>(_a, &CachingImageManager::usingCacheChanged, 4))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QQuickItem**>(_v) = _t->item(); break;
        case 1: *reinterpret_cast<QUrl*>(_v) = _t->cacheDir(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->path(); break;
        case 3: *reinterpret_cast<QUrl*>(_v) = _t->cachePath(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setItem(*reinterpret_cast<QQuickItem**>(_v)); break;
        case 1: _t->setCacheDir(*reinterpret_cast<QUrl*>(_v)); break;
        case 2: _t->setPath(*reinterpret_cast<QString*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *caelestia::CachingImageManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *caelestia::CachingImageManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9caelestia19CachingImageManagerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int caelestia::CachingImageManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
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
void caelestia::CachingImageManager::itemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void caelestia::CachingImageManager::cacheDirChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void caelestia::CachingImageManager::pathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void caelestia::CachingImageManager::cachePathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void caelestia::CachingImageManager::usingCacheChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
