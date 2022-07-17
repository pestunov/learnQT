#include <QApplication>
#include "mainwindow.h"
int main(int argc, char** argv) {
  QApplication app(argc, argv);
  MainWindow ui;
  ui.show();
  return app.exec();
}
