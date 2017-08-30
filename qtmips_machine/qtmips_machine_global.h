#ifndef QTMIPS_MACHINE_GLOBAL_H
#define QTMIPS_MACHINE_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(QTMIPS_MACHINE_LIBRARY)
#  define QTMIPS_MACHINESHARED_EXPORT Q_DECL_EXPORT
#else
#  define QTMIPS_MACHINESHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // QTMIPS_MACHINE_GLOBAL_H
