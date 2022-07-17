#include <QtWidgets>

int main(int argc, char** argv) {
	QApplication app(argc, argv);
	QWidget *window = new QWidget;
	QGridLayout *layout = new QGridLayout;
	QLabel *l1 = new QLabel("label1 here!");
	QLabel *l2 = new QLabel("label2 is here too!");
	QPushButton *pb1 = new QPushButton("push me 1");
	QPushButton *pb2 = new QPushButton("push me 2");
	layout->addWidget(l1, 0, 0);
	layout->addWidget(l2, 0, 1);
	layout->addWidget(pb1, 2, 0);
	layout->addWidget(pb2, 1, 1);
	window->setLayout(layout);
	window->show();
	return app.exec();
	}
