#ifndef BOARD_H
#define BOARD_H

#include <QGraphicsScene>
#include <QGraphicsView>
#include <QColor>

class Board {
public:
    void build();
    explicit Board(QGraphicsScene* scene);

private:
    QGraphicsScene* scene;
    int tileSize;
    QColor lightColor;
    QColor darkColor;
    int boardSize;
    QVector<QVector<int>> board;

    void drawBoard();
    void addPiece(bool isPlayerOne, int x, int y);
};

#endif // BOARD_H
