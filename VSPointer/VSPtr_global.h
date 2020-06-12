#ifndef VSPOINTER_GLOBAL_H
#define VSPOINTER_GLOBAL_H

#include <QtCore/qglobal.h>
#include <QtNetwork/QSctpSocket>

#if defined(VSPOINTER_LIBRARY)
#  define VSPtr_EXPORT Q_DECL_EXPORT
#else
#  define VSPtr_EXPORT Q_DECL_IMPORT
#endif

#endif // VSPtr_GLOBAL_H
