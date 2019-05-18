#ifndef MSBSYSTEM_GLOBAL_H
#define MSBSYSTEM_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(MSBSYSTEM_LIBRARY)
#  define MSBSYSTEMSHARED_EXPORT Q_DECL_EXPORT
#else
#  define MSBSYSTEMSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // MSBSYSTEM_GLOBAL_H
