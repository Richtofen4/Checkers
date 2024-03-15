#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsView>
#include "boardgame.h"
#include "pawnposition.h"
#include "whitemove.h"
#include "blackmove.h"
#include "scenechange.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT
    //public slots:
    //void handleMouseClick(const QPointF& point);

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    QGraphicsView *view;
    boardgame *boardGame;
    pawnposition* pawnPosition;
    whitemove* whiteMove;
    blackmove* blackMove;
    //scenechange *scena;
};

#endif // MAINWINDOW_H
