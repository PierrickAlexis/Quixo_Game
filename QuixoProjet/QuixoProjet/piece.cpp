#include <piece.h>
#include <QPixmap>
#include <QDebug>
#include <QGraphicsSceneMouseEvent>

Piece::Piece(){
    QGraphicsPixmapItem(),
    x(0),
    y(0),
    couleur(PIECE_NEUTRE)
    {
    pixmapCollection.push_back(new QPixmap(":/neutre.png"));
    pixmapCollection.push_back(new QPixmap(":/rond.png"));
    pixmapCollection.push_back(new QPixmap(":/croix.png"));
    }
}
