#ifndef PIECE_H
#define PIECE_H

#include <QGraphicsPixmapItem>

class Piece : public QGraphicsPixmapItem
{
public:
    enum couleurPiece {pieceNeutre=0, pieceRond, pieceCroix};
    explicit Piece();
//    explicit Piece(couleurPiece couleur, int16_t x, int16_t y);
    int16_t x;
    int16_t y;

    bool estJouable(couleurPiece couleurSelect, couleurPiece couleurJoueur); // revoir

protected:
//    void mousePressEvent(QGraphicsSceneMouseEvent * event);

private:
    std::vector<QPixmap *> pixmapCollection;
    couleurPiece couleur;
};

#endif // PIECE_H
