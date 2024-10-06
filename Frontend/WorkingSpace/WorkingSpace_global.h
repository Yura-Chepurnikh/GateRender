#ifndef WORKINGSPACE_GLOBAL_H
#define WORKINGSPACE_GLOBAL_H

#include <QtCore/qglobal.h>
#include <QtGui/QOpenGLFunctions>
#include <QtOpenGLWidgets/QOpenGLWidget>

#if defined(WORKINGSPACE_LIBRARY)
#define WORKINGSPACE_EXPORT Q_DECL_EXPORT
#else
#define WORKINGSPACE_EXPORT Q_DECL_IMPORT
#endif

#endif // WORKINGSPACE_GLOBAL_H
