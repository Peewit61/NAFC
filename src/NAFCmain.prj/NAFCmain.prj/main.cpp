#include "NAFCmain.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    NAFCmain w;
    w.show();
    return a.exec();
}
