#include <QtGui/QApplication>
#include "fdform.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FDForm w;
    w.show();

    return a.exec();
}
