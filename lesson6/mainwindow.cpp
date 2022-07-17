#include "mainwindow.h"
#include "myopengl.h"

MainWindow::MainWindow() {
  setWindowTitle("MainWindow");
  resize(600, 400);
  
  centralWidget = new QWidget();
  fileMenu = menuBar()->addMenu("&File");
  helpMenu = menuBar()->addMenu("&Help");
  openAction = new QAction("&Open", this);
  openAction->setShortcut(QKeySequence::Open);
  exitAction = new QAction("&Exit", this);
  exitAction->setShortcut(QKeySequence::Quit);
  helpAction = new QAction("&Help", this);
  helpAction->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_H));
  aboutAction = new QAction("&About", this);
  fileMenu->addAction(openAction);
  fileMenu->addSeparator();
  fileMenu->addAction(exitAction);
  helpMenu->addAction(helpAction);
  helpMenu->addAction(aboutAction);

  label1 = new QLabel("Main label on main window !!!");
  label2 = new QLabel("Label2!!!");
  MyOpenGL *mygl = new MyOpenGL();
  mainLayout = new QHBoxLayout;
  mainLayout->addWidget(label1);
  mainLayout->addWidget(label2);
  centralWidget->setLayout(mainLayout);
  setCentralWidget(centralWidget);

  // setting up signal and slots
  connect(exitAction, &QAction::triggered, this, &QApplication::quit);
}
