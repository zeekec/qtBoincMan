#include <QtGui/QApplication>
#include "qtSeti.h"


int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    qtSeti foo;
    foo.show();
    return app.exec();
}
