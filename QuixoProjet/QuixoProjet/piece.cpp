#include <piece.h>

Piece::Piece():
    QGraphicsPixmapItem(),
    x(0),
    y(0),
    couleur(pieceNeutre)
{
}

/*    {
    pixmapCollection.push_back(new QPixmap(":/neutre.png"));
    pixmapCollection.push_back(new QPixmap(":/rond.png"));
    pixmapCollection.push_back(new QPixmap(":/croix.png"));

    }
*/

    bool Piece::estJouable(couleurPiece couleurSelect, couleurPiece couleurJoueur)
    {
        if((couleurSelect == 0 || couleurSelect == couleurJoueur) && (pos().x()==1 || pos().x()==5 || pos().y()==1 || pos().y()==5)){
            return true;
        }
        else{
            return false;
        }
    }
