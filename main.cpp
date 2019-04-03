#include <QtWidgets>

int main(int argc, char *argv[]) {

	//Creates an instance of QApplication
	QApplication a(argc, argv);

	qDebug("Hello World!");

	//Run the application and return execs() return value/code
	return a.exec();
}
