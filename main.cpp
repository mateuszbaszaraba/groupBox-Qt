#include "groupbox.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GroupBox w;
    w.show();
    return a.exec();
}
