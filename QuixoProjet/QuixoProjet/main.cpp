#include "mon_jeu.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mon_jeu w;
    w.show();

    return a.exec();
}
