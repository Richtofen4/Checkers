#include "boardgame.h"
#include <QGraphicsRectItem>
#include <QGraphicsEllipseItem>

boardgame::boardgame(QGraphicsScene* providedScene) : scene(providedScene) {
    tileSize = 50;
    lightColor = QColor(235, 235, 208);
    darkColor = QColor(101, 67, 33);
    boardSize = 8;
}

void boardgame::drawBoard() {
    if (!scene) {
        qWarning() <<"Error"<<Qt::endl;
        return;
    }
    for(int x = 0; x < boardSize; ++x) {
        for(int y = 0; y < boardSize; ++y) {
            QGraphicsRectItem* rect = new QGraphicsRectItem(x * tileSize, y * tileSize, tileSize, tileSize);
            if ((x + y) % 2 == 0)
                rect->setBrush(darkColor);
            else
                rect->setBrush(lightColor);
            scene->addItem(rect);
        }
    }
}

void boardgame::addPiece(bool isPlayerOne, int x, int y) {
    int margin = tileSize / 10;
    int pieceSize = tileSize - 2 * margin;
    QColor pieceColor = isPlayerOne ? Qt::white : Qt::black;
    QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(x * tileSize + margin, y * tileSize + margin, pieceSize, pieceSize);
    piece->setBrush(pieceColor);
    scene->addItem(piece);
}

void boardgame::build() {
    board = QVector<QVector<int>>(8, QVector<int>(8, 0)); // Plansza 8x8, 0 oznacza puste pole

    drawBoard(); // Rysujemy planszę

    // Dodajemy pionki gracza 1
    for (int x = 0; x < 8; x += 2) {
        addPiece(true, x + 1, 5);
        addPiece(true, x, 6);
        addPiece(true, x + 1, 7);
    }
    // Dodajemy pionki gracza 2
    for (int x = 0; x < 8; x += 2) {
        addPiece(false, x, 0);
        addPiece(false, x + 1, 1);
        addPiece(false, x, 2);
    }
}
