#include <QtGui/QApplication>
#include "qtBoincMan.h"


int main(int argc, char **argv)
{
	QApplication boinc_man_app(argc, argv);
	qtBoincMan boinc_man_window;
	boinc_man_window.show();
	return boinc_man_app.exec();
}
