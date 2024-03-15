#include "scenechange.h"

void scenechange::mousePressEvent(QGraphicsSceneMouseEvent *event) {
    QGraphicsScene::mousePressEvent(event);

    if (event->button() == Qt::LeftButton) {
        QPointF clickedPoint = event->scenePos();
        emit mouseClicked(clickedPoint);
    }
}

/*void scenechange::mouseMoveEvent(QGraphicsSceneMouseEvent *event) {
    QGraphicsScene::mouseMoveEvent(event);
    QPointF mousePosition = event->scenePos();
    qDebug() << "Mouse position:" << mousePosition;
}*/
