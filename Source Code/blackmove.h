#ifndef BLACKMOVE_H
#define BLACKMOVE_H

#include <iostream>
#include <QGraphicsRectItem>
#include <QBrush>
#include <QPen>
#include <QGraphicsScene>
#include "pawnposition.h"

class blackmove : public QObject {
    Q_OBJECT
public:
    explicit blackmove(pawnposition* stan, QGraphicsScene* sceneProvided) ;
    void blackpawnmove(const QPointF& points);
    void blackpawnbeat(const QPointF& points);
private:
    QGraphicsScene *scene;
    pawnposition* pawnPosition;
};

#endif // BLACKMOVE_H
