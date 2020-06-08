#ifndef GUICORE_GLOBAL_H
#define GUICORE_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(GUICORE_LIBRARY)
#  define GUICORESHARED_EXPORT Q_DECL_EXPORT
#else
#  define GUICORESHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // GUICORE_GLOBAL_H
