#include "myopengl.h"

myOpenGL::myOpenGL() {}
//-----------------------------------------------------------------------------
void glView::initializeGL() {
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  glOrtho(0, 800, 600, 0 ,0 ,1);
}
//-----------------------------------------------------------------------------
void glView::resizeGL(int w, int h) {}
//-----------------------------------------------------------------------------
void glView::paintGL() {
  qglClearColor(Qt:: white);
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  qglColor(Qt::black);
  glBegin(GL_LINE_LOOP);
    glVertex2d(10,10);
    glVertex2d(100,100);
    glVertex2d(10,100);
  glEnd();
}
