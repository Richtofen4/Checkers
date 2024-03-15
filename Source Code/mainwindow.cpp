#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow), scene(new QGraphicsScene(this))
{
    ui->setupUi(this);
    scenechange *scene = new scenechange(this);
    //connect(scene, &scenechange::mouseClicked, this, &MainWindow::handleMouseClick);

    boardGame = new boardgame(scene);
    boardGame->build();

    pawnPosition = new pawnposition(scene);
    view = new QGraphicsView(scene, this);
    setCentralWidget(view);
    view->setMouseTracking(true);

    whiteMove = new whitemove(pawnPosition, scene);
    blackMove = new blackmove(pawnPosition, scene);

    connect(scene, &scenechange::mouseClicked, pawnPosition, &pawnposition::handle);
    connect(scene, &scenechange::mouseClicked, whiteMove, &whitemove::whitepawnmove);
    connect(scene, &scenechange::mouseClicked, whiteMove, &whitemove::whitepawnbeat);
    connect(scene, &scenechange::mouseClicked, blackMove, &blackmove::blackpawnmove);
    connect(scene, &scenechange::mouseClicked, blackMove, &blackmove::blackpawnbeat);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete boardGame;
    delete pawnPosition;
    delete whiteMove;
    delete blackMove;
}
