#include "workingspace.h"

WorkingSpace::WorkingSpace(QWidget* parent) : QOpenGLWidget(parent) { }

void WorkingSpace::initializeGL() {
    initializeOpenGLFunctions();
    glClearColor(0.0f, 1.0f, 0.0f, 1.0f);
}

void WorkingSpace::resizeGL(int w, int h) {
    glViewport(0, 0, w, h);
}

void WorkingSpace::paintGL() {
    glBegin(GL_LINES);
    glVertex2f(4.0f, 4.0f); glVertex2f(8.0f, 8.0f);
    glEnd();
}

