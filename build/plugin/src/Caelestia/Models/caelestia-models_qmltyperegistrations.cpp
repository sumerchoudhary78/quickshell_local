/****************************************************************************
** Generated QML type registration code
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <QtQml/qqml.h>
#include <QtQml/qqmlmoduleregistration.h>

#if __has_include(<filesystemmodel.hpp>)
#  include <filesystemmodel.hpp>
#endif


#if !defined(QT_STATIC)
#define Q_QMLTYPE_EXPORT Q_DECL_EXPORT
#else
#define Q_QMLTYPE_EXPORT
#endif
Q_QMLTYPE_EXPORT void qml_register_types_Caelestia_Models()
{
    qmlRegisterModule("Caelestia.Models", 1, 0);
    QT_WARNING_PUSH QT_WARNING_DISABLE_DEPRECATED
    QMetaType::fromType<QAbstractItemModel *>().id();
    qmlRegisterEnum<QAbstractItemModel::LayoutChangeHint>("QAbstractItemModel::LayoutChangeHint");
    qmlRegisterEnum<QAbstractItemModel::CheckIndexOption>("QAbstractItemModel::CheckIndexOption");
    QMetaType::fromType<QAbstractListModel *>().id();
    qmlRegisterTypesAndRevisions<caelestia::FileSystemEntry>("Caelestia.Models", 1);
    qmlRegisterTypesAndRevisions<caelestia::FileSystemModel>("Caelestia.Models", 1);
    qmlRegisterEnum<caelestia::FileSystemModel::Filter>("caelestia::FileSystemModel::Filter");
    QT_WARNING_POP
    qmlRegisterModule("Caelestia.Models", 1, 2);
}

static const QQmlModuleRegistration caelestiaModelsRegistration("Caelestia.Models", qml_register_types_Caelestia_Models);
