#include <QtWidgets>

int main(int argc, char** argv) {
	QApplication app(argc, argv);
	QLabel l("Hello world!");
	QLabel l2("Hello world twice!");
	l.setStyleSheet("QLabel:hover {color: rgb(60,179,124)}");
	l.show();
	l2.show();
	return app.exec();
	}
