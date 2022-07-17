#include <QApplication>
#include <QGridLayout>
#include <QLabel>
#include <QPushButton>
#include <QDial>

int main(int argc, char** argv) {
	QApplication app(argc, argv);
	QWidget *window = new QWidget;
	QGridLayout *layout = new QGridLayout;
	QLabel *l1 = new QLabel("label1 here!");
	QLabel *l2 = new QLabel("je suis label for sortir");
	QPushButton *pb1 = new QPushButton("quit");
	QPushButton *pb2 = new QPushButton("push me 2");
	QDial *myDial = new QDial();
	myDial->setValue(50);
	myDial->setMaximum(360);
	layout->addWidget(l1, 0, 0);
	layout->addWidget(l2, 0, 1);
	layout->addWidget(pb1, 1, 0);
	layout->addWidget(pb2, 1, 1);
	layout->addWidget(myDial, 2, 1);
	window->setLayout(layout);
	QObject::connect(pb1, SIGNAL(clicked()), &app, SLOT(quit()));
	QObject::connect(myDial, SIGNAL(valueChanged(int)), l1, SLOT(setNum(int)));
	window->show();
	return app.exec();
	}
