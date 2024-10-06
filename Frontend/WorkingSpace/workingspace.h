#ifndef WORKINGSPACE_H
#define WORKINGSPACE_H

#include "WorkingSpace_global.h"

class WORKINGSPACE_EXPORT WorkingSpace : public QOpenGLWidget, protected QOpenGLFunctions {
public:
    WorkingSpace(QWidget* parent);

protected:
    void initializeGL() override;
    void resizeGL(int w, int h) override;
    void paintGL() override;
};

#endif // WORKINGSPACE_H
