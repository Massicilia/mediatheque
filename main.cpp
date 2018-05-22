#include "research.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    research w;
    w.show();

    return a.exec();
}
