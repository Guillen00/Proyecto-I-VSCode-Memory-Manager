#ifndef VSPOINTER_GLOBAL_H
#define VSPOINTER_GLOBAL_H

#include <QtCore/qglobal.h>
#include <QtNetwork/QSctpSocket>

#if defined(VSPOINTER_LIBRARY)
#  define VSPOINTER_EXPORT Q_DECL_EXPORT
#else
#  define VSPOINTER_EXPORT Q_DECL_IMPORT
#endif

#endif // VSPOINTER_GLOBAL_H
