#ifndef SCENECHANGE_H
#define SCENECHANGE_H

#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include <QPointF>
#include <QDebug>

class scenechange : public QGraphicsScene {
    Q_OBJECT

public:
    using QGraphicsScene::QGraphicsScene;

protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event) override;
    //void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
signals:
    void mouseClicked(const QPointF& point);
};

#endif // SCENECHANGE_H
