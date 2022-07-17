#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QtWidgets>
#include <QMainWindow>

class MainWindow : public QMainWindow {
  Q_OBJECT  // implements signals and slots engines

public:
  MainWindow();

private slots:

private:
  // Widget
  QWidget *centralWidget;
  QHBoxLayout *mainLayout;
  QLabel *label1;
  QLabel *label2;
  // Menu
  QMenu *fileMenu;
  QMenu *helpMenu;
  // Action
  QAction *openAction;
  QAction *exitAction;
  QAction *helpAction;
  QAction *aboutAction;
};

#endif  // MAINWINDOW_H
