#ifndef MYOPENGL_H
#define MYOPENGL_H

#include <QOpenGLWidget>

// ============= example at max shlee book, p.369 ==============================
class MyOpenGL : public QOpenGLWidget {
  void myOpenGL();
protected:
  virtual void initializeGL();
  virtual void resizeGL(int w, int h);
  virtual void paintGL();
};

#endif  // MYOPENGL_H
