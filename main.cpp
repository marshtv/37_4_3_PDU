#include <QApplication>
#include "pdumainwindow.h"
#include "./ui_pdu.h"

int main(int argc, char *argv[]) {
	QApplication a(argc, argv);
	PduMainWindow window(nullptr);
	Ui::MainWindow pdu;
	pdu.setupUi(&window);
	window.lcdNumber_1 = pdu.lcdNumber_1;
	window.lcdNumber_2 = pdu.lcdNumber_2;
	window.show();
	return QApplication::exec();
}
