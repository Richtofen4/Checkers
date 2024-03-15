#ifndef BOARDGAME_H
#define BOARDGAME_H

#include <QGraphicsScene>
#include <QGraphicsView>
#include <QColor>

class boardgame {
public:
    void build();
    explicit boardgame(QGraphicsScene* scene);

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

#endif // BOARDGAME_H
