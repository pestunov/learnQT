#include <QtWidgets>

int main(int argc, char** argv) {
	QApplication app(argc, argv);
	QString text = "Pppush Me!";
	QPushButton myButton(text);
	myButton.show();
	myButton.setToolTip("It is tooltip");
	return app.exec();
	}
