#include "mon_jeu.h"
#include "piece.h"
#include <QApplication>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mon_jeu w;
    w.show();


    //-------------
    //Piece * ptr_Piece = new Piece();

    //-------------

    return a.exec();
}
