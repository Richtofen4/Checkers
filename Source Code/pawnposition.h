#ifndef PAWNPOSITION_H
#define PAWNPOSITION_H

#include <vector>
#include <iostream>
#include <QGraphicsRectItem>
#include <QBrush>
#include <QPen>
#include <QGraphicsScene>

//#include <QApplication>

class pawnposition: public QObject {
    Q_OBJECT

public slots:
    void handle(const QPointF& point);
public:
    int areaclicked;
    int movement;
    int possibleBeat;
    int howMuchWhite;
    int howMuchBlack;
    std::vector<int> fields;
    std::vector<int> positionBeat;
    explicit pawnposition (QGraphicsScene* sceneProvided);
    void checkBeat();
    QGraphicsRectItem* obszar0;
    QGraphicsRectItem* obszar1;
    QGraphicsRectItem* obszar2;
    QGraphicsRectItem* obszar3;
    QGraphicsRectItem* obszar4;
    QGraphicsRectItem* obszar5;
    QGraphicsRectItem* obszar6;
    QGraphicsRectItem* obszar7;
    QGraphicsRectItem* obszar8;
    QGraphicsRectItem* obszar9;
    QGraphicsRectItem* obszar10;
    QGraphicsRectItem* obszar11;
    QGraphicsRectItem* obszar12;
    QGraphicsRectItem* obszar13;
    QGraphicsRectItem* obszar14;
    QGraphicsRectItem* obszar15;
    QGraphicsRectItem* obszar16;
    QGraphicsRectItem* obszar17;
    QGraphicsRectItem* obszar18;
    QGraphicsRectItem* obszar19;
    QGraphicsRectItem* obszar20;
    QGraphicsRectItem* obszar21;
    QGraphicsRectItem* obszar22;
    QGraphicsRectItem* obszar23;
    QGraphicsRectItem* obszar24;
    QGraphicsRectItem* obszar25;
    QGraphicsRectItem* obszar26;
    QGraphicsRectItem* obszar27;
    QGraphicsRectItem* obszar28;
    QGraphicsRectItem* obszar29;
    QGraphicsRectItem* obszar30;
    QGraphicsRectItem* obszar31;
private:
    QGraphicsScene* scene;
};
#endif // PAWNPOSITION_H
