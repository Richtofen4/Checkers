#ifndef WHITEMOVE_H
#define WHITEMOVE_H

#include <iostream>
#include <QGraphicsRectItem>
#include <QBrush>
#include <QPen>
#include <QGraphicsScene>
#include "pawnposition.h"

class whitemove : public QObject {
    Q_OBJECT
public:
    explicit whitemove(pawnposition* stan, QGraphicsScene* sceneProvided) ;
    void whitepawnmove(const QPointF& points);
    void whitepawnbeat(const QPointF& points);
private:
    QGraphicsScene *scene;
    pawnposition* pawnPosition;
};

#endif // WHITEMOVE_H
