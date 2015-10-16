#include "kahluaide.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    KahluaIDE w;
    w.show();

    return a.exec();
}
