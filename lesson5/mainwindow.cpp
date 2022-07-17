#include "mainwindow.h"
MainWindow::MainWindow() {
	setWindowTitle("MainWindow");
	resize(400, 400);
/*	QLabel *mainLabel = new QLabel("Main label on main window !!!");
	setCentralWidget(mainLabel);
	mainLabel->setAlignment(Qt::AlignCenter);
*/
	QWidget *centralWidget = new QWidget();
	QHBoxLayout *layout = new QHBoxLayout;
	QLabel *l1 = new QLabel("Lable 1!!!");
	QLabel *l2 = new QLabel("Lable 2!!!");
	layout->addWidget(l1);
	layout->addWidget(l2);
	centralWidget->setLayout(layout);
	setCentralWidget(centralWidget);
};
