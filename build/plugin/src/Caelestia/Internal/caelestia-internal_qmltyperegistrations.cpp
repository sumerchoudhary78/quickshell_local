/****************************************************************************
** Generated QML type registration code
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <QtQml/qqml.h>
#include <QtQml/qqmlmoduleregistration.h>

#if __has_include(<cachingimagemanager.hpp>)
#  include <cachingimagemanager.hpp>
#endif
#if __has_include(<circularindicatormanager.hpp>)
#  include <circularindicatormanager.hpp>
#endif


#if !defined(QT_STATIC)
#define Q_QMLTYPE_EXPORT Q_DECL_EXPORT
#else
#define Q_QMLTYPE_EXPORT
#endif
Q_QMLTYPE_EXPORT void qml_register_types_Caelestia_Internal()
{
    qmlRegisterModule("Caelestia.Internal", 1, 0);
    QT_WARNING_PUSH QT_WARNING_DISABLE_DEPRECATED
    qmlRegisterTypesAndRevisions<caelestia::CachingImageManager>("Caelestia.Internal", 1);
    qmlRegisterTypesAndRevisions<caelestia::CircularIndicatorManager>("Caelestia.Internal", 1);
    qmlRegisterEnum<caelestia::CircularIndicatorManager::IndeterminateAnimationType>("caelestia::CircularIndicatorManager::IndeterminateAnimationType");
    QT_WARNING_POP
    qmlRegisterModule("Caelestia.Internal", 1, 2);
}

static const QQmlModuleRegistration caelestiaInternalRegistration("Caelestia.Internal", qml_register_types_Caelestia_Internal);
