#include "QtSerialCommunicator.h"

/*
* Main Class
* starts the GUI
*/
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
  QtSerialCommunicator w;
	w.show();
	return a.exec();
}