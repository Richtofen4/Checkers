#include "blackmove.h"

blackmove::blackmove (pawnposition* stan, QGraphicsScene* sceneProvided): pawnPosition(stan), scene(sceneProvided) {}

void blackmove::blackpawnmove(const QPointF& points) {
    if (pawnPosition->possibleBeat == 0) {
        if(pawnPosition->obszar4->contains(points) and (pawnPosition->areaclicked == 0 or pawnPosition->areaclicked == 1)  and pawnPosition->fields[4] == 0) {
            QGraphicsRectItem* b1;
            if (pawnPosition->areaclicked == 0)
                b1 = new QGraphicsRectItem(0, 0, 49, 49);
            else
                b1 = new QGraphicsRectItem(100, 0, 49, 49);
            b1->setBrush(QColor(101, 67, 33));
            scene->addItem(b1);

            int margin = 5;
            int pieceSize = 50 - 2 * margin;
            QColor pieceColor = Qt::black;
            QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(50 + margin, 50 + margin, pieceSize, pieceSize);
            piece->setBrush(pieceColor);
            scene->addItem(piece);

            pawnPosition->fields[4] = 2;
            if (pawnPosition->areaclicked == 0)
                pawnPosition->fields[0] = 0;
            else
                pawnPosition->fields[1] = 0;
            pawnPosition->areaclicked = 64;
            pawnPosition->movement++;
            pawnPosition->checkBeat();
        }
        if(pawnPosition->obszar5->contains(points) and (pawnPosition->areaclicked == 1 or pawnPosition->areaclicked == 2)  and pawnPosition->fields[5] == 0) {
            QGraphicsRectItem* b1;
            if (pawnPosition->areaclicked == 1)
                b1 = new QGraphicsRectItem(100, 0, 49, 49);
            else
                b1 = new QGraphicsRectItem(200, 0, 49, 49);
            b1->setBrush(QColor(101, 67, 33));
            scene->addItem(b1);

            int margin = 5;
            int pieceSize = 50 - 2 * margin;
            QColor pieceColor = Qt::black;
            QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(150 + margin, 50 + margin, pieceSize, pieceSize);
            piece->setBrush(pieceColor);
            scene->addItem(piece);

            pawnPosition->fields[5] = 2;
            if (pawnPosition->areaclicked == 1)
                pawnPosition->fields[1] = 0;
            else
                pawnPosition->fields[2] = 0;
            pawnPosition->areaclicked = 64;
            pawnPosition->movement++;
            pawnPosition->checkBeat();
        }
        if(pawnPosition->obszar6->contains(points) and (pawnPosition->areaclicked == 2 or pawnPosition->areaclicked == 3)  and pawnPosition->fields[6] == 0) {
            QGraphicsRectItem* b1;
            if (pawnPosition->areaclicked == 2)
                b1 = new QGraphicsRectItem(200, 0, 49, 49);
            else
                b1 = new QGraphicsRectItem(300, 0, 49, 49);
            b1->setBrush(QColor(101, 67, 33));
            scene->addItem(b1);

            int margin = 5;
            int pieceSize = 50 - 2 * margin;
            QColor pieceColor = Qt::black;
            QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(250 + margin, 50 + margin, pieceSize, pieceSize);
            piece->setBrush(pieceColor);
            scene->addItem(piece);

            pawnPosition->fields[6] = 2;
            if (pawnPosition->areaclicked == 2)
                pawnPosition->fields[2] = 0;
            else
                pawnPosition->fields[3] = 0;
            pawnPosition->areaclicked = 64;
            pawnPosition->movement++;
            pawnPosition->checkBeat();
        }
        if(pawnPosition->obszar7->contains(points) and pawnPosition->areaclicked == 3 and pawnPosition->fields[7] == 0) {
            QGraphicsRectItem* b1 = new QGraphicsRectItem(300, 0, 49, 49);
            b1->setBrush(QColor(101, 67, 33));
            scene->addItem(b1);

            int margin = 5;
            int pieceSize = 50 - 2 * margin;
            QColor pieceColor = Qt::black;
            QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(350 + margin, 50 + margin, pieceSize, pieceSize);
            piece->setBrush(pieceColor);
            scene->addItem(piece);

            pawnPosition->fields[7] = 2;
            pawnPosition->fields[3] = 0;
            pawnPosition->areaclicked = 64;
            pawnPosition->movement++;
            pawnPosition->checkBeat();
        }
        if(pawnPosition->obszar8->contains(points) and pawnPosition->areaclicked == 4  and pawnPosition->fields[8] == 0) {
            QGraphicsRectItem* b1 = new QGraphicsRectItem(50, 50, 49, 49);
            b1->setBrush(QColor(101, 67, 33));
            scene->addItem(b1);

            int margin = 5;
            int pieceSize = 50 - 2 * margin;
            QColor pieceColor = Qt::black;
            QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(0 + margin, 100 + margin, pieceSize, pieceSize);
            piece->setBrush(pieceColor);
            scene->addItem(piece);

            pawnPosition->fields[8] = 2;
            pawnPosition->fields[4] = 0;
            pawnPosition->areaclicked = 64;
            pawnPosition->movement++;
            pawnPosition->checkBeat();
        }
        if(pawnPosition->obszar9->contains(points) and (pawnPosition->areaclicked == 4 or pawnPosition->areaclicked == 5)  and pawnPosition->fields[9] == 0) {
            QGraphicsRectItem* b1;
            if (pawnPosition->areaclicked == 4)
                b1 = new QGraphicsRectItem(50, 50, 49, 49);
            else
                b1 = new QGraphicsRectItem(150, 50, 49, 49);
            b1->setBrush(QColor(101, 67, 33));
            scene->addItem(b1);

            int margin = 5;
            int pieceSize = 50 - 2 * margin;
            QColor pieceColor = Qt::black;
            QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(100 + margin, 100 + margin, pieceSize, pieceSize);
            piece->setBrush(pieceColor);
            scene->addItem(piece);

            pawnPosition->fields[9] = 2;
            if (pawnPosition->areaclicked == 4)
                pawnPosition->fields[4] = 0;
            else
                pawnPosition->fields[5] = 0;
            pawnPosition->areaclicked = 64;
            pawnPosition->movement++;
            pawnPosition->checkBeat();
        }
        if(pawnPosition->obszar10->contains(points) and (pawnPosition->areaclicked == 5 or pawnPosition->areaclicked == 6)  and pawnPosition->fields[10] == 0) {
            QGraphicsRectItem* b1;
            if (pawnPosition->areaclicked == 5)
                b1 = new QGraphicsRectItem(150, 50, 49, 49);
            else
                b1 = new QGraphicsRectItem(250, 50, 49, 49);
            b1->setBrush(QColor(101, 67, 33));
            scene->addItem(b1);

            int margin = 5;
            int pieceSize = 50 - 2 * margin;
            QColor pieceColor = Qt::black;
            QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(200 + margin, 100 + margin, pieceSize, pieceSize);
            piece->setBrush(pieceColor);
            scene->addItem(piece);

            pawnPosition->fields[10] = 2;
            if (pawnPosition->areaclicked == 5)
                pawnPosition->fields[5] = 0;
            else
                pawnPosition->fields[6] = 0;
            pawnPosition->areaclicked = 64;
            pawnPosition->movement++;
            pawnPosition->checkBeat();
        }
        if(pawnPosition->obszar11->contains(points) and (pawnPosition->areaclicked == 6 or pawnPosition->areaclicked == 7)  and pawnPosition->fields[11] == 0) {
            QGraphicsRectItem* b1;
            if (pawnPosition->areaclicked == 6)
                b1 = new QGraphicsRectItem(250, 50, 49, 49);
            else
                b1 = new QGraphicsRectItem(350, 50, 49, 49);
            b1->setBrush(QColor(101, 67, 33));
            scene->addItem(b1);

            int margin = 5;
            int pieceSize = 50 - 2 * margin;
            QColor pieceColor = Qt::black;
            QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(300 + margin, 100 + margin, pieceSize, pieceSize);
            piece->setBrush(pieceColor);
            scene->addItem(piece);

            pawnPosition->fields[11] = 2;
            if (pawnPosition->areaclicked == 6)
                pawnPosition->fields[6] = 0;
            else
                pawnPosition->fields[7] = 0;
            pawnPosition->areaclicked = 64;
            pawnPosition->movement++;
            pawnPosition->checkBeat();
        }
        if(pawnPosition->obszar12->contains(points) and (pawnPosition->areaclicked == 8 or pawnPosition->areaclicked == 9)  and pawnPosition->fields[12] == 0) {
            QGraphicsRectItem* b1;
            if (pawnPosition->areaclicked == 8)
                b1 = new QGraphicsRectItem(0, 100, 49, 49);
            else
                b1 = new QGraphicsRectItem(100, 100, 49, 49);
            b1->setBrush(QColor(101, 67, 33));
            scene->addItem(b1);

            int margin = 5;
            int pieceSize = 50 - 2 * margin;
            QColor pieceColor = Qt::black;
            QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(50 + margin, 150 + margin, pieceSize, pieceSize);
            piece->setBrush(pieceColor);
            scene->addItem(piece);

            pawnPosition->fields[12] = 2;
            if (pawnPosition->areaclicked == 8)
                pawnPosition->fields[8] = 0;
            else
                pawnPosition->fields[9] = 0;
            pawnPosition->areaclicked = 64;
            pawnPosition->movement++;
            pawnPosition->checkBeat();
        }
        if(pawnPosition->obszar13->contains(points) and (pawnPosition->areaclicked == 9 or pawnPosition->areaclicked == 10)  and pawnPosition->fields[13] == 0) {
            QGraphicsRectItem* b1;
            if (pawnPosition->areaclicked == 9)
                b1 = new QGraphicsRectItem(100, 100, 49, 49);
            else
                b1 = new QGraphicsRectItem(200, 100, 49, 49);
            b1->setBrush(QColor(101, 67, 33));
            scene->addItem(b1);

            int margin = 5;
            int pieceSize = 50 - 2 * margin;
            QColor pieceColor = Qt::black;
            QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(150 + margin, 150 + margin, pieceSize, pieceSize);
            piece->setBrush(pieceColor);
            scene->addItem(piece);

            pawnPosition->fields[13] = 2;
            if (pawnPosition->areaclicked == 9)
                pawnPosition->fields[9] = 0;
            else
                pawnPosition->fields[10] = 0;
            pawnPosition->areaclicked = 64;
            pawnPosition->movement++;
            pawnPosition->checkBeat();
        }
        if(pawnPosition->obszar14->contains(points) and (pawnPosition->areaclicked == 10 or pawnPosition->areaclicked == 11)  and pawnPosition->fields[14] == 0) {
            QGraphicsRectItem* b1;
            if (pawnPosition->areaclicked == 10)
                b1 = new QGraphicsRectItem(200, 100, 49, 49);
            else
                b1 = new QGraphicsRectItem(300, 100, 49, 49);
            b1->setBrush(QColor(101, 67, 33));
            scene->addItem(b1);

            int margin = 5;
            int pieceSize = 50 - 2 * margin;
            QColor pieceColor = Qt::black;
            QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(250 + margin, 150 + margin, pieceSize, pieceSize);
            piece->setBrush(pieceColor);
            scene->addItem(piece);

            pawnPosition->fields[14] = 2;
            if (pawnPosition->areaclicked == 10)
                pawnPosition->fields[10] = 0;
            else
                pawnPosition->fields[11] = 0;
            pawnPosition->areaclicked = 64;
            pawnPosition->movement++;
            pawnPosition->checkBeat();
        }
        if(pawnPosition->obszar15->contains(points) and pawnPosition->areaclicked == 11 and pawnPosition->fields[15] == 0) {
            QGraphicsRectItem* b1 = new QGraphicsRectItem(300, 100, 49, 49);
            b1->setBrush(QColor(101, 67, 33));
            scene->addItem(b1);

            int margin = 5;
            int pieceSize = 50 - 2 * margin;
            QColor pieceColor = Qt::black;
            QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(350 + margin, 150 + margin, pieceSize, pieceSize);
            piece->setBrush(pieceColor);
            scene->addItem(piece);

            pawnPosition->fields[15] = 2;
            pawnPosition->fields[11] = 0;
            pawnPosition->areaclicked = 64;
            pawnPosition->movement++;
            pawnPosition->checkBeat();
        }
        if(pawnPosition->obszar16->contains(points) and pawnPosition->areaclicked == 12  and pawnPosition->fields[16] == 0) {
            QGraphicsRectItem* b1 = new QGraphicsRectItem(50, 150, 49, 49);
            b1->setBrush(QColor(101, 67, 33));
            scene->addItem(b1);

            int margin = 5;
            int pieceSize = 50 - 2 * margin;
            QColor pieceColor = Qt::black;
            QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(0 + margin, 200 + margin, pieceSize, pieceSize);
            piece->setBrush(pieceColor);
            scene->addItem(piece);

            pawnPosition->fields[16] = 2;
            pawnPosition->fields[12] = 0;
            pawnPosition->areaclicked = 64;
            pawnPosition->movement++;
            pawnPosition->checkBeat();
        }
        if(pawnPosition->obszar17->contains(points) and (pawnPosition->areaclicked == 12 or pawnPosition->areaclicked == 13)  and pawnPosition->fields[17] == 0) {
            QGraphicsRectItem* b1;
            if (pawnPosition->areaclicked == 12)
                b1 = new QGraphicsRectItem(50, 150, 49, 49);
            else
                b1 = new QGraphicsRectItem(150, 150, 49, 49);
            b1->setBrush(QColor(101, 67, 33));
            scene->addItem(b1);

            int margin = 5;
            int pieceSize = 50 - 2 * margin;
            QColor pieceColor = Qt::black;
            QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(100 + margin, 200 + margin, pieceSize, pieceSize);
            piece->setBrush(pieceColor);
            scene->addItem(piece);

            pawnPosition->fields[17] = 2;
            if (pawnPosition->areaclicked == 12)
                pawnPosition->fields[12] = 0;
            else
                pawnPosition->fields[13] = 0;
            pawnPosition->areaclicked = 64;
            pawnPosition->movement++;
            pawnPosition->checkBeat();
        }
        if(pawnPosition->obszar18->contains(points) and (pawnPosition->areaclicked == 13 or pawnPosition->areaclicked == 14)  and pawnPosition->fields[18] == 0) {
            QGraphicsRectItem* b1;
            if (pawnPosition->areaclicked == 13)
                b1 = new QGraphicsRectItem(150, 150, 49, 49);
            else
                b1 = new QGraphicsRectItem(250, 150, 49, 49);
            b1->setBrush(QColor(101, 67, 33));
            scene->addItem(b1);

            int margin = 5;
            int pieceSize = 50 - 2 * margin;
            QColor pieceColor = Qt::black;
            QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(200 + margin, 200 + margin, pieceSize, pieceSize);
            piece->setBrush(pieceColor);
            scene->addItem(piece);

            pawnPosition->fields[18] = 2;
            if (pawnPosition->areaclicked == 13)
                pawnPosition->fields[13] = 0;
            else
                pawnPosition->fields[14] = 0;
            pawnPosition->areaclicked = 64;
            pawnPosition->movement++;
            pawnPosition->checkBeat();
        }
        if(pawnPosition->obszar19->contains(points) and (pawnPosition->areaclicked == 14 or pawnPosition->areaclicked == 15)  and pawnPosition->fields[19] == 0) {
            QGraphicsRectItem* b1;
            if (pawnPosition->areaclicked == 14)
                b1 = new QGraphicsRectItem(250, 150, 49, 49);
            else
                b1 = new QGraphicsRectItem(350, 150, 49, 49);
            b1->setBrush(QColor(101, 67, 33));
            scene->addItem(b1);

            int margin = 5;
            int pieceSize = 50 - 2 * margin;
            QColor pieceColor = Qt::black;
            QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(300 + margin, 200 + margin, pieceSize, pieceSize);
            piece->setBrush(pieceColor);
            scene->addItem(piece);

            pawnPosition->fields[19] = 2;
            if (pawnPosition->areaclicked == 14)
                pawnPosition->fields[14] = 0;
            else
                pawnPosition->fields[15] = 0;
            pawnPosition->areaclicked = 64;
            pawnPosition->movement++;
            pawnPosition->checkBeat();
        }
        if(pawnPosition->obszar20->contains(points) and (pawnPosition->areaclicked == 16 or pawnPosition->areaclicked == 17)  and pawnPosition->fields[20] == 0) {
            QGraphicsRectItem* b1;
            if (pawnPosition->areaclicked == 16)
                b1 = new QGraphicsRectItem(0, 200, 49, 49);
            else
                b1 = new QGraphicsRectItem(100, 200, 49, 49);
            b1->setBrush(QColor(101, 67, 33));
            scene->addItem(b1);

            int margin = 5;
            int pieceSize = 50 - 2 * margin;
            QColor pieceColor = Qt::black;
            QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(50 + margin, 250 + margin, pieceSize, pieceSize);
            piece->setBrush(pieceColor);
            scene->addItem(piece);

            pawnPosition->fields[20] = 2;
            if (pawnPosition->areaclicked == 16)
                pawnPosition->fields[16] = 0;
            else
                pawnPosition->fields[17] = 0;
            pawnPosition->areaclicked = 64;
            pawnPosition->movement++;
            pawnPosition->checkBeat();
        }
        if(pawnPosition->obszar21->contains(points) and (pawnPosition->areaclicked == 17 or pawnPosition->areaclicked == 18)  and pawnPosition->fields[21] == 0) {
            QGraphicsRectItem* b1;
            if (pawnPosition->areaclicked == 17)
                b1 = new QGraphicsRectItem(100, 200, 49, 49);
            else
                b1 = new QGraphicsRectItem(200, 200, 49, 49);
            b1->setBrush(QColor(101, 67, 33));
            scene->addItem(b1);

            int margin = 5;
            int pieceSize = 50 - 2 * margin;
            QColor pieceColor = Qt::black;
            QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(150 + margin, 250 + margin, pieceSize, pieceSize);
            piece->setBrush(pieceColor);
            scene->addItem(piece);

            pawnPosition->fields[21] = 2;
            if (pawnPosition->areaclicked == 17)
                pawnPosition->fields[17] = 0;
            else
                pawnPosition->fields[18] = 0;
            pawnPosition->areaclicked = 64;
            pawnPosition->movement++;
            pawnPosition->checkBeat();
        }
        if(pawnPosition->obszar22->contains(points) and (pawnPosition->areaclicked == 18 or pawnPosition->areaclicked == 19)  and pawnPosition->fields[22] == 0) {
            QGraphicsRectItem* b1;
            if (pawnPosition->areaclicked == 18)
                b1 = new QGraphicsRectItem(200, 200, 49, 49);
            else
                b1 = new QGraphicsRectItem(300, 200, 49, 49);
            b1->setBrush(QColor(101, 67, 33));
            scene->addItem(b1);

            int margin = 5;
            int pieceSize = 50 - 2 * margin;
            QColor pieceColor = Qt::black;
            QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(250 + margin, 250 + margin, pieceSize, pieceSize);
            piece->setBrush(pieceColor);
            scene->addItem(piece);

            pawnPosition->fields[22] = 2;
            if (pawnPosition->areaclicked == 18)
                pawnPosition->fields[18] = 0;
            else
                pawnPosition->fields[19] = 0;
            pawnPosition->areaclicked = 64;
            pawnPosition->movement++;
            pawnPosition->checkBeat();
        }
        if(pawnPosition->obszar23->contains(points) and pawnPosition->areaclicked == 19  and pawnPosition->fields[23] == 0) {
            QGraphicsRectItem* b1 = new QGraphicsRectItem(300, 200, 49, 49);
            b1->setBrush(QColor(101, 67, 33));
            scene->addItem(b1);

            int margin = 5;
            int pieceSize = 50 - 2 * margin;
            QColor pieceColor = Qt::black;
            QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(350 + margin, 250 + margin, pieceSize, pieceSize);
            piece->setBrush(pieceColor);
            scene->addItem(piece);

            pawnPosition->fields[23] = 2;
            pawnPosition->fields[19] = 0;
            pawnPosition->areaclicked = 64;
            pawnPosition->movement++;
            pawnPosition->checkBeat();
        }
        if(pawnPosition->obszar24->contains(points) and pawnPosition->areaclicked == 20  and pawnPosition->fields[24] == 0) {
            QGraphicsRectItem* b1 = new QGraphicsRectItem(50, 250, 49, 49);
            b1->setBrush(QColor(101, 67, 33));
            scene->addItem(b1);

            int margin = 5;
            int pieceSize = 50 - 2 * margin;
            QColor pieceColor = Qt::black;
            QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(0 + margin, 300 + margin, pieceSize, pieceSize);
            piece->setBrush(pieceColor);
            scene->addItem(piece);

            pawnPosition->fields[24] = 2;
            pawnPosition->fields[20] = 0;
            pawnPosition->areaclicked = 64;
            pawnPosition->movement++;
            pawnPosition->checkBeat();
        }
        if(pawnPosition->obszar25->contains(points) and (pawnPosition->areaclicked == 20 or pawnPosition->areaclicked == 21)  and pawnPosition->fields[25] == 0) {
            QGraphicsRectItem* b1;
            if (pawnPosition->areaclicked == 20)
                b1 = new QGraphicsRectItem(50, 250, 49, 49);
            else
                b1 = new QGraphicsRectItem(150, 250, 49, 49);
            b1->setBrush(QColor(101, 67, 33));
            scene->addItem(b1);

            int margin = 5;
            int pieceSize = 50 - 2 * margin;
            QColor pieceColor = Qt::black;
            QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(100 + margin, 300 + margin, pieceSize, pieceSize);
            piece->setBrush(pieceColor);
            scene->addItem(piece);

            pawnPosition->fields[25] = 2;
            if (pawnPosition->areaclicked == 20)
                pawnPosition->fields[20] = 0;
            else
                pawnPosition->fields[21] = 0;
            pawnPosition->areaclicked = 64;
            pawnPosition->movement++;
            pawnPosition->checkBeat();
        }
        if(pawnPosition->obszar26->contains(points) and (pawnPosition->areaclicked == 21 or pawnPosition->areaclicked == 22)  and pawnPosition->fields[26] == 0) {
            QGraphicsRectItem* b1;
            if (pawnPosition->areaclicked == 21)
                b1 = new QGraphicsRectItem(150, 250, 49, 49);
            else
                b1 = new QGraphicsRectItem(250, 250, 49, 49);
            b1->setBrush(QColor(101, 67, 33));
            scene->addItem(b1);

            int margin = 5;
            int pieceSize = 50 - 2 * margin;
            QColor pieceColor = Qt::black;
            QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(200 + margin, 300 + margin, pieceSize, pieceSize);
            piece->setBrush(pieceColor);
            scene->addItem(piece);

            pawnPosition->fields[26] = 2;
            if (pawnPosition->areaclicked == 21)
                pawnPosition->fields[21] = 0;
            else
                pawnPosition->fields[22] = 0;
            pawnPosition->areaclicked = 64;
            pawnPosition->movement++;
            pawnPosition->checkBeat();
        }
        if(pawnPosition->obszar27->contains(points) and (pawnPosition->areaclicked == 22 or pawnPosition->areaclicked == 23)  and pawnPosition->fields[27] == 0) {
            QGraphicsRectItem* b1;
            if (pawnPosition->areaclicked == 22)
                b1 = new QGraphicsRectItem(250, 250, 49, 49);
            else
                b1 = new QGraphicsRectItem(350, 250, 49, 49);
            b1->setBrush(QColor(101, 67, 33));
            scene->addItem(b1);

            int margin = 5;
            int pieceSize = 50 - 2 * margin;
            QColor pieceColor = Qt::black;
            QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(300 + margin, 300 + margin, pieceSize, pieceSize);
            piece->setBrush(pieceColor);
            scene->addItem(piece);

            pawnPosition->fields[27] = 2;
            if (pawnPosition->areaclicked == 22)
                pawnPosition->fields[22] = 0;
            else
                pawnPosition->fields[23] = 0;
            pawnPosition->areaclicked = 64;
            pawnPosition->movement++;
            pawnPosition->checkBeat();
        }
        if(pawnPosition->obszar28->contains(points) and (pawnPosition->areaclicked == 24 or pawnPosition->areaclicked == 25) and pawnPosition->fields[28] == 0) {
            QGraphicsRectItem* b1;
            if (pawnPosition->areaclicked == 24)
                b1 = new QGraphicsRectItem(0, 300, 49, 49);
            else
                b1 = new QGraphicsRectItem(100, 300, 49, 49);
            b1->setBrush(QColor(101, 67, 33));
            scene->addItem(b1);

            int margin = 5;
            int pieceSize = 50 - 2 * margin;
            QColor pieceColor = Qt::black;
            QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(50 + margin, 350 + margin, pieceSize, pieceSize);
            piece->setBrush(pieceColor);

            int crownSize = pieceSize / 2;
            int crownX = 50 + margin + (pieceSize - crownSize) / 2;
            int crownY = 350 + margin + (pieceSize - crownSize) / 2;
            QGraphicsEllipseItem* crown = new QGraphicsEllipseItem(crownX, crownY, crownSize, crownSize, piece);
            crown->setBrush(Qt::yellow);

            scene->addItem(piece);

            pawnPosition->fields[28] = 4;
            if (pawnPosition->areaclicked == 24)
                pawnPosition->fields[24] = 0;
            else
                pawnPosition->fields[25] = 0;
            pawnPosition->areaclicked = 64;
            pawnPosition->movement++;
            pawnPosition->checkBeat();
        }
        if(pawnPosition->obszar29->contains(points) and (pawnPosition->areaclicked == 25 or pawnPosition->areaclicked == 26) and pawnPosition->fields[29] == 0) {
            QGraphicsRectItem* b1;
            if (pawnPosition->areaclicked == 25)
                b1 = new QGraphicsRectItem(100, 300, 49, 49);
            else
                b1 = new QGraphicsRectItem(200, 300, 49, 49);
            b1->setBrush(QColor(101, 67, 33));
            scene->addItem(b1);

            int margin = 5;
            int pieceSize = 50 - 2 * margin;
            QColor pieceColor = Qt::black;
            QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(150 + margin, 350 + margin, pieceSize, pieceSize);
            piece->setBrush(pieceColor);

            int crownSize = pieceSize / 2;
            int crownX = 150 + margin + (pieceSize - crownSize) / 2;
            int crownY = 350 + margin + (pieceSize - crownSize) / 2;
            QGraphicsEllipseItem* crown = new QGraphicsEllipseItem(crownX, crownY, crownSize, crownSize, piece);
            crown->setBrush(Qt::yellow);

            scene->addItem(piece);

            pawnPosition->fields[29] = 4;
            if (pawnPosition->areaclicked == 25)
                pawnPosition->fields[25] = 0;
            else
                pawnPosition->fields[26] = 0;
            pawnPosition->areaclicked = 64;
            pawnPosition->movement++;
            pawnPosition->checkBeat();
        }
        if(pawnPosition->obszar30->contains(points) and (pawnPosition->areaclicked == 26 or pawnPosition->areaclicked == 27) and pawnPosition->fields[30] == 0) {
            QGraphicsRectItem* b1;
            if (pawnPosition->areaclicked == 26)
                b1 = new QGraphicsRectItem(200, 300, 49, 49);
            else
                b1 = new QGraphicsRectItem(300, 300, 49, 49);
            b1->setBrush(QColor(101, 67, 33));
            scene->addItem(b1);

            int margin = 5;
            int pieceSize = 50 - 2 * margin;
            QColor pieceColor = Qt::black;
            QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(250 + margin, 350 + margin, pieceSize, pieceSize);
            piece->setBrush(pieceColor);

            int crownSize = pieceSize / 2;
            int crownX = 250 + margin + (pieceSize - crownSize) / 2;
            int crownY = 350 + margin + (pieceSize - crownSize) / 2;
            QGraphicsEllipseItem* crown = new QGraphicsEllipseItem(crownX, crownY, crownSize, crownSize, piece);
            crown->setBrush(Qt::yellow);

            scene->addItem(piece);

            pawnPosition->fields[30] = 4;
            if (pawnPosition->areaclicked == 26)
                pawnPosition->fields[26] = 0;
            else
                pawnPosition->fields[27] = 0;
            pawnPosition->areaclicked = 64;
            pawnPosition->movement++;
            pawnPosition->checkBeat();
        }
        if(pawnPosition->obszar31->contains(points) and pawnPosition->areaclicked == 27  and pawnPosition->fields[31] == 0) {
            QGraphicsRectItem* b1 = new QGraphicsRectItem(300, 300, 49, 49);
            b1->setBrush(QColor(101, 67, 33));
            scene->addItem(b1);

            int margin = 5;
            int pieceSize = 50 - 2 * margin;
            QColor pieceColor = Qt::black;
            QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(350 + margin, 350 + margin, pieceSize, pieceSize);
            piece->setBrush(pieceColor);

            int crownSize = pieceSize / 2;
            int crownX = 350 + margin + (pieceSize - crownSize) / 2;
            int crownY = 350 + margin + (pieceSize - crownSize) / 2;
            QGraphicsEllipseItem* crown = new QGraphicsEllipseItem(crownX, crownY, crownSize, crownSize, piece);
            crown->setBrush(Qt::yellow);

            scene->addItem(piece);

            pawnPosition->fields[31] = 4;
            pawnPosition->fields[27] = 0;
            pawnPosition->areaclicked = 64;
            pawnPosition->movement++;
            pawnPosition->checkBeat();
        }

    }
}


void blackmove::blackpawnbeat(const QPointF& points) {
    if (pawnPosition->obszar8->contains(points) and pawnPosition->areaclicked == 1 and
        std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 1) != pawnPosition->positionBeat.end()) {
        QGraphicsRectItem* b1 = new QGraphicsRectItem(100, 0, 49, 49);
        b1->setBrush(QColor(101, 67, 33));
        scene->addItem(b1);

        QGraphicsRectItem* b2 = new QGraphicsRectItem(50, 50, 49, 49);
        b2->setBrush(QColor(101, 67, 33));
        scene->addItem(b2);

        int margin = 5;
        int pieceSize = 50 - 2 * margin;
        QColor pieceColor = Qt::black;
        QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(0 + margin, 100 + margin, pieceSize, pieceSize);
        piece->setBrush(pieceColor);
        scene->addItem(piece);
        pawnPosition->howMuchWhite--;
        pawnPosition->possibleBeat=0;
        pawnPosition->positionBeat.clear();
        pawnPosition->fields[8]=2;
        pawnPosition->fields[4]=0;
        pawnPosition->fields[1]=0;
        pawnPosition->checkBeat();
        if (pawnPosition->possibleBeat == 0){
            pawnPosition->movement = 2;
            pawnPosition->checkBeat();
        }
    }
    if (pawnPosition->obszar9->contains(points) and (pawnPosition->areaclicked == 0 or pawnPosition->areaclicked == 2) and
        (std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 2) != pawnPosition->positionBeat.end() or
         std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 32) != pawnPosition->positionBeat.end())) {
        QGraphicsRectItem* b1;
        if (pawnPosition->areaclicked == 0)
            b1 = new QGraphicsRectItem(0, 0, 49, 49);
        else
            b1 = new QGraphicsRectItem(200, 0, 49, 49);
        b1->setBrush(QColor(101, 67, 33));
        scene->addItem(b1);

        QGraphicsRectItem* b2;
        if (pawnPosition->areaclicked == 0)
            b2 = new QGraphicsRectItem(50, 50, 49, 49);
        else
            b2 = new QGraphicsRectItem(150, 50, 49, 49);
        b2->setBrush(QColor(101, 67, 33));
        scene->addItem(b2);

        int margin = 5;
        int pieceSize = 50 - 2 * margin;
        QColor pieceColor = Qt::black;
        QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(100 + margin, 100 + margin, pieceSize, pieceSize);
        piece->setBrush(pieceColor);
        scene->addItem(piece);
        pawnPosition->howMuchWhite--;
        pawnPosition->possibleBeat=0;
        pawnPosition->positionBeat.clear();
        pawnPosition->fields[9]=2;
        if (pawnPosition->areaclicked == 0){
            pawnPosition->fields[0]=0;
            pawnPosition->fields[4]=0;
        }
        else {
            pawnPosition->fields[2]=0;
            pawnPosition->fields[5]=0;
        }
        pawnPosition->checkBeat();
        if (pawnPosition->possibleBeat == 0){
            pawnPosition->movement = 2;
            pawnPosition->checkBeat();
        }
    }
    if (pawnPosition->obszar10->contains(points) and (pawnPosition->areaclicked == 1 or pawnPosition->areaclicked == 3) and
        (std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 3) != pawnPosition->positionBeat.end() or
         std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 33) != pawnPosition->positionBeat.end())) {
        QGraphicsRectItem* b1;
        if (pawnPosition->areaclicked == 1)
            b1 = new QGraphicsRectItem(100, 0, 49, 49);
        else
            b1 = new QGraphicsRectItem(300, 0, 49, 49);
        b1->setBrush(QColor(101, 67, 33));
        scene->addItem(b1);

        QGraphicsRectItem* b2;
        if (pawnPosition->areaclicked == 1)
            b2 = new QGraphicsRectItem(150, 50, 49, 49);
        else
            b2 = new QGraphicsRectItem(250, 50, 49, 49);
        b2->setBrush(QColor(101, 67, 33));
        scene->addItem(b2);

        int margin = 5;
        int pieceSize = 50 - 2 * margin;
        QColor pieceColor = Qt::black;
        QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(200 + margin, 100 + margin, pieceSize, pieceSize);
        piece->setBrush(pieceColor);
        scene->addItem(piece);
        pawnPosition->howMuchWhite--;
        pawnPosition->possibleBeat=0;
        pawnPosition->positionBeat.clear();
        pawnPosition->fields[10]=2;
        if (pawnPosition->areaclicked == 1){
            pawnPosition->fields[1]=0;
            pawnPosition->fields[5]=0;
        }
        else {
            pawnPosition->fields[3]=0;
            pawnPosition->fields[6]=0;
        }
        pawnPosition->checkBeat();
        if (pawnPosition->possibleBeat == 0){
            pawnPosition->movement = 2;
            pawnPosition->checkBeat();
        }
    }
    if (pawnPosition->obszar11->contains(points) and pawnPosition->areaclicked == 2 and
        std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 34) != pawnPosition->positionBeat.end()) {
        QGraphicsRectItem* b1 = new QGraphicsRectItem(200, 0, 49, 49);
        b1->setBrush(QColor(101, 67, 33));
        scene->addItem(b1);

        QGraphicsRectItem* b2 = new QGraphicsRectItem(250, 50, 49, 49);
        b2->setBrush(QColor(101, 67, 33));
        scene->addItem(b2);

        int margin = 5;
        int pieceSize = 50 - 2 * margin;
        QColor pieceColor = Qt::black;
        QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(300 + margin, 100 + margin, pieceSize, pieceSize);
        piece->setBrush(pieceColor);
        scene->addItem(piece);
        pawnPosition->howMuchWhite--;
        pawnPosition->possibleBeat=0;
        pawnPosition->positionBeat.clear();
        pawnPosition->fields[11]=2;
        pawnPosition->fields[2]=0;
        pawnPosition->fields[6]=0;
        pawnPosition->checkBeat();
        if (pawnPosition->possibleBeat == 0){
            pawnPosition->movement = 2;
            pawnPosition->checkBeat();
        }
    }
    if (pawnPosition->obszar12->contains(points) and pawnPosition->areaclicked == 5 and
        std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 5) != pawnPosition->positionBeat.end()) {
        QGraphicsRectItem* b1 = new QGraphicsRectItem(150, 50, 49, 49);
        b1->setBrush(QColor(101, 67, 33));
        scene->addItem(b1);

        QGraphicsRectItem* b2 = new QGraphicsRectItem(100, 100, 49, 49);
        b2->setBrush(QColor(101, 67, 33));
        scene->addItem(b2);

        int margin = 5;
        int pieceSize = 50 - 2 * margin;
        QColor pieceColor = Qt::black;
        QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(50 + margin, 150 + margin, pieceSize, pieceSize);
        piece->setBrush(pieceColor);
        scene->addItem(piece);
        pawnPosition->howMuchWhite--;
        pawnPosition->possibleBeat=0;
        pawnPosition->positionBeat.clear();
        pawnPosition->fields[12]=2;
        pawnPosition->fields[9]=0;
        pawnPosition->fields[5]=0;
        pawnPosition->checkBeat();
        if (pawnPosition->possibleBeat == 0){
            pawnPosition->movement = 2;
            pawnPosition->checkBeat();
        }
    }
    if (pawnPosition->obszar13->contains(points) and (pawnPosition->areaclicked == 4 or pawnPosition->areaclicked == 6) and
        (std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 6) != pawnPosition->positionBeat.end() or
         std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 36) != pawnPosition->positionBeat.end())) {
        QGraphicsRectItem* b1;
        if (pawnPosition->areaclicked == 4)
            b1 = new QGraphicsRectItem(50, 50, 49, 49);
        else
            b1 = new QGraphicsRectItem(250, 50, 49, 49);
        b1->setBrush(QColor(101, 67, 33));
        scene->addItem(b1);

        QGraphicsRectItem* b2;
        if (pawnPosition->areaclicked == 4)
            b2 = new QGraphicsRectItem(100, 100, 49, 49);
        else
            b2 = new QGraphicsRectItem(200, 100, 49, 49);
        b2->setBrush(QColor(101, 67, 33));
        scene->addItem(b2);

        int margin = 5;
        int pieceSize = 50 - 2 * margin;
        QColor pieceColor = Qt::black;
        QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(150 + margin, 150 + margin, pieceSize, pieceSize);
        piece->setBrush(pieceColor);
        scene->addItem(piece);
        pawnPosition->howMuchWhite--;
        pawnPosition->possibleBeat=0;
        pawnPosition->positionBeat.clear();
        pawnPosition->fields[13]=2;
        if (pawnPosition->areaclicked == 4){
            pawnPosition->fields[4]=0;
            pawnPosition->fields[9]=0;
        }
        else {
            pawnPosition->fields[6]=0;
            pawnPosition->fields[10]=0;
        }
        pawnPosition->checkBeat();
        if (pawnPosition->possibleBeat == 0){
            pawnPosition->movement = 2;
            pawnPosition->checkBeat();
        }
    }
    if (pawnPosition->obszar14->contains(points) and (pawnPosition->areaclicked == 5 or pawnPosition->areaclicked == 7) and
        (std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 7) != pawnPosition->positionBeat.end() or
         std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 37) != pawnPosition->positionBeat.end())) {
        QGraphicsRectItem* b1;
        if (pawnPosition->areaclicked == 5)
            b1 = new QGraphicsRectItem(150, 50, 49, 49);
        else
            b1 = new QGraphicsRectItem(350, 50, 49, 49);
        b1->setBrush(QColor(101, 67, 33));
        scene->addItem(b1);

        QGraphicsRectItem* b2;
        if (pawnPosition->areaclicked == 5)
            b2 = new QGraphicsRectItem(200, 100, 49, 49);
        else
            b2 = new QGraphicsRectItem(300, 100, 49, 49);
        b2->setBrush(QColor(101, 67, 33));
        scene->addItem(b2);

        int margin = 5;
        int pieceSize = 50 - 2 * margin;
        QColor pieceColor = Qt::black;
        QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(250 + margin, 150 + margin, pieceSize, pieceSize);
        piece->setBrush(pieceColor);
        scene->addItem(piece);
        pawnPosition->howMuchWhite--;
        pawnPosition->possibleBeat=0;
        pawnPosition->positionBeat.clear();
        pawnPosition->fields[14]=2;
        if (pawnPosition->areaclicked == 5){
            pawnPosition->fields[5]=0;
            pawnPosition->fields[10]=0;
        }
        else {
            pawnPosition->fields[7]=0;
            pawnPosition->fields[11]=0;
        }
        pawnPosition->checkBeat();
        if (pawnPosition->possibleBeat == 0){
            pawnPosition->movement = 2;
            pawnPosition->checkBeat();
        }
    }
    if (pawnPosition->obszar15->contains(points) and pawnPosition->areaclicked == 6 and
        std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 38) != pawnPosition->positionBeat.end()) {
        QGraphicsRectItem* b1 = new QGraphicsRectItem(250, 50, 49, 49);
        b1->setBrush(QColor(101, 67, 33));
        scene->addItem(b1);

        QGraphicsRectItem* b2 = new QGraphicsRectItem(300, 100, 49, 49);
        b2->setBrush(QColor(101, 67, 33));
        scene->addItem(b2);

        int margin = 5;
        int pieceSize = 50 - 2 * margin;
        QColor pieceColor = Qt::black;
        QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(350 + margin, 150 + margin, pieceSize, pieceSize);
        piece->setBrush(pieceColor);
        scene->addItem(piece);
        pawnPosition->howMuchWhite--;
        pawnPosition->possibleBeat=0;
        pawnPosition->positionBeat.clear();
        pawnPosition->fields[15]=2;
        pawnPosition->fields[6]=0;
        pawnPosition->fields[11]=0;
        pawnPosition->checkBeat();
        if (pawnPosition->possibleBeat == 0){
            pawnPosition->movement = 2;
            pawnPosition->checkBeat();
        }
    }
    if (pawnPosition->obszar16->contains(points) and pawnPosition->areaclicked == 9 and
        std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 9) != pawnPosition->positionBeat.end()) {
        QGraphicsRectItem* b1 = new QGraphicsRectItem(100, 100, 49, 49);
        b1->setBrush(QColor(101, 67, 33));
        scene->addItem(b1);

        QGraphicsRectItem* b2 = new QGraphicsRectItem(50, 150, 49, 49);
        b2->setBrush(QColor(101, 67, 33));
        scene->addItem(b2);

        int margin = 5;
        int pieceSize = 50 - 2 * margin;
        QColor pieceColor = Qt::black;
        QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(0 + margin, 200 + margin, pieceSize, pieceSize);
        piece->setBrush(pieceColor);
        scene->addItem(piece);
        pawnPosition->howMuchWhite--;
        pawnPosition->possibleBeat=0;
        pawnPosition->positionBeat.clear();
        pawnPosition->fields[16]=2;
        pawnPosition->fields[12]=0;
        pawnPosition->fields[9]=0;
        pawnPosition->checkBeat();
        if (pawnPosition->possibleBeat == 0){
            pawnPosition->movement = 2;
            pawnPosition->checkBeat();
        }
    }
    if (pawnPosition->obszar17->contains(points) and (pawnPosition->areaclicked == 8 or pawnPosition->areaclicked == 10) and
        (std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 10) != pawnPosition->positionBeat.end() or
         std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 40) != pawnPosition->positionBeat.end())) {
        QGraphicsRectItem* b1;
        if (pawnPosition->areaclicked == 8)
            b1 = new QGraphicsRectItem(0, 100, 49, 49);
        else
            b1 = new QGraphicsRectItem(200, 100, 49, 49);
        b1->setBrush(QColor(101, 67, 33));
        scene->addItem(b1);

        QGraphicsRectItem* b2;
        if (pawnPosition->areaclicked == 8)
            b2 = new QGraphicsRectItem(50, 150, 49, 49);
        else
            b2 = new QGraphicsRectItem(150, 150, 49, 49);
        b2->setBrush(QColor(101, 67, 33));
        scene->addItem(b2);

        int margin = 5;
        int pieceSize = 50 - 2 * margin;
        QColor pieceColor = Qt::black;
        QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(100 + margin, 200 + margin, pieceSize, pieceSize);
        piece->setBrush(pieceColor);
        scene->addItem(piece);
        pawnPosition->howMuchWhite--;
        pawnPosition->possibleBeat=0;
        pawnPosition->positionBeat.clear();
        pawnPosition->fields[17]=2;
        if (pawnPosition->areaclicked == 8){
            pawnPosition->fields[8]=0;
            pawnPosition->fields[12]=0;
        }
        else {
            pawnPosition->fields[10]=0;
            pawnPosition->fields[13]=0;
        }
        pawnPosition->checkBeat();
        if (pawnPosition->possibleBeat == 0){
            pawnPosition->movement = 2;
            pawnPosition->checkBeat();
        }
    }
    if (pawnPosition->obszar18->contains(points) and (pawnPosition->areaclicked == 9 or pawnPosition->areaclicked == 11) and
        (std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 11) != pawnPosition->positionBeat.end() or
         std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 41) != pawnPosition->positionBeat.end())) {
        QGraphicsRectItem* b1;
        if (pawnPosition->areaclicked == 9)
            b1 = new QGraphicsRectItem(100, 100, 49, 49);
        else
            b1 = new QGraphicsRectItem(300, 100, 49, 49);
        b1->setBrush(QColor(101, 67, 33));
        scene->addItem(b1);

        QGraphicsRectItem* b2;
        if (pawnPosition->areaclicked == 9)
            b2 = new QGraphicsRectItem(150, 150, 49, 49);
        else
            b2 = new QGraphicsRectItem(250, 150, 49, 49);
        b2->setBrush(QColor(101, 67, 33));
        scene->addItem(b2);

        int margin = 5;
        int pieceSize = 50 - 2 * margin;
        QColor pieceColor = Qt::black;
        QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(200 + margin, 200 + margin, pieceSize, pieceSize);
        piece->setBrush(pieceColor);
        scene->addItem(piece);
        pawnPosition->howMuchWhite--;
        pawnPosition->possibleBeat=0;
        pawnPosition->positionBeat.clear();
        pawnPosition->fields[18]=2;
        if (pawnPosition->areaclicked == 9){
            pawnPosition->fields[9]=0;
            pawnPosition->fields[13]=0;
        }
        else {
            pawnPosition->fields[11]=0;
            pawnPosition->fields[14]=0;
        }
        pawnPosition->checkBeat();
        if (pawnPosition->possibleBeat == 0){
            pawnPosition->movement = 2;
            pawnPosition->checkBeat();
        }
    }
    if (pawnPosition->obszar19->contains(points) and pawnPosition->areaclicked == 10 and
        std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 42) != pawnPosition->positionBeat.end()){
        QGraphicsRectItem* b1 = new QGraphicsRectItem(200, 100, 49, 49);
        b1->setBrush(QColor(101, 67, 33));
        scene->addItem(b1);

        QGraphicsRectItem* b2 = new QGraphicsRectItem(250, 150, 49, 49);
        b2->setBrush(QColor(101, 67, 33));
        scene->addItem(b2);

        int margin = 5;
        int pieceSize = 50 - 2 * margin;
        QColor pieceColor = Qt::black;
        QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(300 + margin, 200 + margin, pieceSize, pieceSize);
        piece->setBrush(pieceColor);
        scene->addItem(piece);
        pawnPosition->howMuchWhite--;
        pawnPosition->possibleBeat=0;
        pawnPosition->positionBeat.clear();
        pawnPosition->fields[19]=2;
        pawnPosition->fields[10]=0;
        pawnPosition->fields[14]=0;
        pawnPosition->checkBeat();
        if (pawnPosition->possibleBeat == 0){
            pawnPosition->movement = 2;
            pawnPosition->checkBeat();
        }
    }
    if (pawnPosition->obszar20->contains(points) and pawnPosition->areaclicked == 13 and
        std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 13) != pawnPosition->positionBeat.end()) {
        QGraphicsRectItem* b1 = new QGraphicsRectItem(150, 150, 49, 49);
        b1->setBrush(QColor(101, 67, 33));
        scene->addItem(b1);

        QGraphicsRectItem* b2 = new QGraphicsRectItem(100, 200, 49, 49);
        b2->setBrush(QColor(101, 67, 33));
        scene->addItem(b2);

        int margin = 5;
        int pieceSize = 50 - 2 * margin;
        QColor pieceColor = Qt::black;
        QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(50 + margin, 250 + margin, pieceSize, pieceSize);
        piece->setBrush(pieceColor);
        scene->addItem(piece);
        pawnPosition->howMuchWhite--;
        pawnPosition->possibleBeat=0;
        pawnPosition->positionBeat.clear();
        pawnPosition->fields[20]=2;
        pawnPosition->fields[13]=0;
        pawnPosition->fields[17]=0;
        pawnPosition->checkBeat();
        if (pawnPosition->possibleBeat == 0){
            pawnPosition->movement = 2;
            pawnPosition->checkBeat();
        }
    }
    if (pawnPosition->obszar21->contains(points) and (pawnPosition->areaclicked == 12 or pawnPosition->areaclicked == 14) and
        (std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 14) != pawnPosition->positionBeat.end() or
         std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 44) != pawnPosition->positionBeat.end())) {
        QGraphicsRectItem* b1;
        if (pawnPosition->areaclicked == 12)
            b1 = new QGraphicsRectItem(50, 150, 49, 49);
        else
            b1 = new QGraphicsRectItem(250, 150, 49, 49);
        b1->setBrush(QColor(101, 67, 33));
        scene->addItem(b1);

        QGraphicsRectItem* b2;
        if (pawnPosition->areaclicked == 12)
            b2 = new QGraphicsRectItem(100, 200, 49, 49);
        else
            b2 = new QGraphicsRectItem(200, 200, 49, 49);
        b2->setBrush(QColor(101, 67, 33));
        scene->addItem(b2);

        int margin = 5;
        int pieceSize = 50 - 2 * margin;
        QColor pieceColor = Qt::black;
        QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(150 + margin, 250 + margin, pieceSize, pieceSize);
        piece->setBrush(pieceColor);
        scene->addItem(piece);
        pawnPosition->howMuchWhite--;
        pawnPosition->possibleBeat=0;
        pawnPosition->positionBeat.clear();
        pawnPosition->fields[21]=2;
        if (pawnPosition->areaclicked == 12){
            pawnPosition->fields[12]=0;
            pawnPosition->fields[17]=0;
        }
        else {
            pawnPosition->fields[14]=0;
            pawnPosition->fields[18]=0;
        }
        pawnPosition->checkBeat();
        if (pawnPosition->possibleBeat == 0){
            pawnPosition->movement = 2;
            pawnPosition->checkBeat();
        }
    }
    if (pawnPosition->obszar22->contains(points) and (pawnPosition->areaclicked == 13 or pawnPosition->areaclicked == 15) and
        (std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 15) != pawnPosition->positionBeat.end() or
         std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 45) != pawnPosition->positionBeat.end())) {
        QGraphicsRectItem* b1;
        if (pawnPosition->areaclicked == 13)
            b1 = new QGraphicsRectItem(150, 150, 49, 49);
        else
            b1 = new QGraphicsRectItem(350, 150, 49, 49);
        b1->setBrush(QColor(101, 67, 33));
        scene->addItem(b1);

        QGraphicsRectItem* b2;
        if (pawnPosition->areaclicked == 13)
            b2 = new QGraphicsRectItem(200, 200, 49, 49);
        else
            b2 = new QGraphicsRectItem(300, 200, 49, 49);
        b2->setBrush(QColor(101, 67, 33));
        scene->addItem(b2);

        int margin = 5;
        int pieceSize = 50 - 2 * margin;
        QColor pieceColor = Qt::black;
        QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(250 + margin, 250 + margin, pieceSize, pieceSize);
        piece->setBrush(pieceColor);
        scene->addItem(piece);
        pawnPosition->howMuchWhite--;
        pawnPosition->possibleBeat=0;
        pawnPosition->positionBeat.clear();
        pawnPosition->fields[22]=2;
        if (pawnPosition->areaclicked == 13){
            pawnPosition->fields[13]=0;
            pawnPosition->fields[18]=0;
        }
        else {
            pawnPosition->fields[15]=0;
            pawnPosition->fields[19]=0;
        }
        pawnPosition->checkBeat();
        if (pawnPosition->possibleBeat == 0){
            pawnPosition->movement = 2;
            pawnPosition->checkBeat();
        }
    }
    if (pawnPosition->obszar23->contains(points) and pawnPosition->areaclicked == 14 and
        std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 46) != pawnPosition->positionBeat.end()){
        QGraphicsRectItem* b1 = new QGraphicsRectItem(250, 150, 49, 49);
        b1->setBrush(QColor(101, 67, 33));
        scene->addItem(b1);

        QGraphicsRectItem*  b2 = new QGraphicsRectItem(300, 200, 49, 49);
        b2->setBrush(QColor(101, 67, 33));
        scene->addItem(b2);

        int margin = 5;
        int pieceSize = 50 - 2 * margin;
        QColor pieceColor = Qt::black;
        QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(350 + margin, 250 + margin, pieceSize, pieceSize);
        piece->setBrush(pieceColor);
        scene->addItem(piece);
        pawnPosition->howMuchWhite--;
        pawnPosition->possibleBeat=0;
        pawnPosition->positionBeat.clear();
        pawnPosition->fields[23]=2;
        pawnPosition->fields[14]=0;
        pawnPosition->fields[19]=0;
        pawnPosition->checkBeat();
        if (pawnPosition->possibleBeat == 0){
            pawnPosition->movement = 2;
            pawnPosition->checkBeat();
        }
    }
    if (pawnPosition->obszar24->contains(points) and pawnPosition->areaclicked == 17 and
        std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 17) != pawnPosition->positionBeat.end()){
        QGraphicsRectItem* b1 = new QGraphicsRectItem(100, 200, 49, 49);
        b1->setBrush(QColor(101, 67, 33));
        scene->addItem(b1);

        QGraphicsRectItem*  b2 = new QGraphicsRectItem(50, 250, 49, 49);
        b2->setBrush(QColor(101, 67, 33));
        scene->addItem(b2);

        int margin = 5;
        int pieceSize = 50 - 2 * margin;
        QColor pieceColor = Qt::black;
        QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(0 + margin, 300 + margin, pieceSize, pieceSize);
        piece->setBrush(pieceColor);
        scene->addItem(piece);
        pawnPosition->howMuchWhite--;
        pawnPosition->possibleBeat=0;
        pawnPosition->positionBeat.clear();
        pawnPosition->fields[24]=2;
        pawnPosition->fields[17]=0;
        pawnPosition->fields[20]=0;
        pawnPosition->checkBeat();
        if (pawnPosition->possibleBeat == 0){
            pawnPosition->movement = 2;
            pawnPosition->checkBeat();
        }
    }
    if (pawnPosition->obszar25->contains(points) and (pawnPosition->areaclicked == 16 or pawnPosition->areaclicked == 18) and
        (std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 18) != pawnPosition->positionBeat.end() or
         std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 48) != pawnPosition->positionBeat.end())) {
        QGraphicsRectItem* b1;
        if (pawnPosition->areaclicked == 16)
            b1 = new QGraphicsRectItem(0, 200, 49, 49);
        else
            b1 = new QGraphicsRectItem(200, 200, 49, 49);
        b1->setBrush(QColor(101, 67, 33));
        scene->addItem(b1);

        QGraphicsRectItem* b2;
        if (pawnPosition->areaclicked == 16)
            b2 = new QGraphicsRectItem(50, 250, 49, 49);
        else
            b2 = new QGraphicsRectItem(150, 250, 49, 49);
        b2->setBrush(QColor(101, 67, 33));
        scene->addItem(b2);

        int margin = 5;
        int pieceSize = 50 - 2 * margin;
        QColor pieceColor = Qt::black;
        QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(100 + margin, 300 + margin, pieceSize, pieceSize);
        piece->setBrush(pieceColor);
        scene->addItem(piece);
        pawnPosition->howMuchWhite--;
        pawnPosition->possibleBeat=0;
        pawnPosition->positionBeat.clear();
        pawnPosition->fields[25]=2;
        if (pawnPosition->areaclicked == 16){
            pawnPosition->fields[16]=0;
            pawnPosition->fields[20]=0;
        }
        else {
            pawnPosition->fields[18]=0;
            pawnPosition->fields[21]=0;
        }
        pawnPosition->checkBeat();
        if (pawnPosition->possibleBeat == 0){
            pawnPosition->movement = 2;
            pawnPosition->checkBeat();
        }
    }
    if (pawnPosition->obszar26->contains(points) and (pawnPosition->areaclicked == 17 or pawnPosition->areaclicked == 19) and
        (std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 19) != pawnPosition->positionBeat.end() or
         std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 49) != pawnPosition->positionBeat.end())) {
        QGraphicsRectItem* b1;
        if (pawnPosition->areaclicked == 17)
            b1 = new QGraphicsRectItem(100, 200, 49, 49);
        else
            b1 = new QGraphicsRectItem(300, 200, 49, 49);
        b1->setBrush(QColor(101, 67, 33));
        scene->addItem(b1);

        QGraphicsRectItem* b2;
        if (pawnPosition->areaclicked == 17)
            b2 = new QGraphicsRectItem(150, 250, 49, 49);
        else
            b2 = new QGraphicsRectItem(250, 250, 49, 49);
        b2->setBrush(QColor(101, 67, 33));
        scene->addItem(b2);

        int margin = 5;
        int pieceSize = 50 - 2 * margin;
        QColor pieceColor = Qt::black;
        QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(200 + margin, 300 + margin, pieceSize, pieceSize);
        piece->setBrush(pieceColor);
        scene->addItem(piece);
        pawnPosition->howMuchWhite--;
        pawnPosition->possibleBeat=0;
        pawnPosition->positionBeat.clear();
        pawnPosition->fields[26]=2;
        if (pawnPosition->areaclicked == 17){
            pawnPosition->fields[17]=0;
            pawnPosition->fields[21]=0;
        }
        else {
            pawnPosition->fields[19]=0;
            pawnPosition->fields[22]=0;
        }
        pawnPosition->checkBeat();
        if (pawnPosition->possibleBeat == 0){
            pawnPosition->movement = 2;
            pawnPosition->checkBeat();
        }
    }
    if (pawnPosition->obszar27->contains(points) and pawnPosition->areaclicked == 18 and
        std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 50) != pawnPosition->positionBeat.end()) {
        QGraphicsRectItem* b1 = new QGraphicsRectItem(200, 200, 49, 49);
        b1->setBrush(QColor(101, 67, 33));
        scene->addItem(b1);

        QGraphicsRectItem* b2 = new QGraphicsRectItem(250, 250, 49, 49);
        b2->setBrush(QColor(101, 67, 33));
        scene->addItem(b2);

        int margin = 5;
        int pieceSize = 50 - 2 * margin;
        QColor pieceColor = Qt::black;
        QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(300 + margin, 300 + margin, pieceSize, pieceSize);
        piece->setBrush(pieceColor);
        scene->addItem(piece);
        pawnPosition->howMuchWhite--;
        pawnPosition->possibleBeat=0;
        pawnPosition->positionBeat.clear();
        pawnPosition->fields[27]=2;
        pawnPosition->fields[18]=0;
        pawnPosition->fields[22]=0;
        pawnPosition->checkBeat();
        if (pawnPosition->possibleBeat == 0){
            pawnPosition->movement = 2;
            pawnPosition->checkBeat();
        }
    }
    if (pawnPosition->obszar28->contains(points) and pawnPosition->areaclicked == 21 and
        std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 21) != pawnPosition->positionBeat.end()) {
        QGraphicsRectItem* b1 = new QGraphicsRectItem(150, 250, 49, 49);
        b1->setBrush(QColor(101, 67, 33));
        scene->addItem(b1);

        QGraphicsRectItem* b2 = new QGraphicsRectItem(100, 300, 49, 49);
        b2->setBrush(QColor(101, 67, 33));
        scene->addItem(b2);

        int margin = 5;
        int pieceSize = 50 - 2 * margin;
        QColor pieceColor = Qt::black;
        QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(50 + margin, 350 + margin, pieceSize, pieceSize);
        piece->setBrush(pieceColor);

        int crownSize = pieceSize / 2;
        int crownX = 50 + margin + (pieceSize - crownSize) / 2;
        int crownY = 350 + margin + (pieceSize - crownSize) / 2;
        QGraphicsEllipseItem* crown = new QGraphicsEllipseItem(crownX, crownY, crownSize, crownSize, piece);
        crown->setBrush(Qt::yellow);
        scene->addItem(piece);

        pawnPosition->howMuchWhite--;
        pawnPosition->possibleBeat=0;
        pawnPosition->positionBeat.clear();
        pawnPosition->fields[28]=4;
        pawnPosition->fields[21]=0;
        pawnPosition->fields[25]=0;
        pawnPosition->checkBeat();
        if (pawnPosition->possibleBeat == 0){
            pawnPosition->movement = 2;
            pawnPosition->checkBeat();
        }
    }
    if (pawnPosition->obszar29->contains(points) and (pawnPosition->areaclicked == 20 or pawnPosition->areaclicked == 22) and
        (std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 22) != pawnPosition->positionBeat.end() or
         std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 52) != pawnPosition->positionBeat.end())) {
        QGraphicsRectItem* b1;
        if (pawnPosition->areaclicked == 20)
            b1 = new QGraphicsRectItem(50, 250, 49, 49);
        else
            b1 = new QGraphicsRectItem(250, 250, 49, 49);
        b1->setBrush(QColor(101, 67, 33));
        scene->addItem(b1);

        QGraphicsRectItem* b2;
        if (pawnPosition->areaclicked == 20)
            b2 = new QGraphicsRectItem(100, 300, 49, 49);
        else
            b2 = new QGraphicsRectItem(200, 300, 49, 49);
        b2->setBrush(QColor(101, 67, 33));
        scene->addItem(b2);

        int margin = 5;
        int pieceSize = 50 - 2 * margin;
        QColor pieceColor = Qt::black;
        QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(150 + margin, 350 + margin, pieceSize, pieceSize);
        piece->setBrush(pieceColor);

        int crownSize = pieceSize / 2;
        int crownX = 150 + margin + (pieceSize - crownSize) / 2;
        int crownY = 350 + margin + (pieceSize - crownSize) / 2;
        QGraphicsEllipseItem* crown = new QGraphicsEllipseItem(crownX, crownY, crownSize, crownSize, piece);
        crown->setBrush(Qt::yellow);
        scene->addItem(piece);

        pawnPosition->howMuchWhite--;
        pawnPosition->possibleBeat=0;
        pawnPosition->positionBeat.clear();
        pawnPosition->fields[29]=4;
        if (pawnPosition->areaclicked == 20){
            pawnPosition->fields[20]=0;
            pawnPosition->fields[25]=0;
        }
        else {
            pawnPosition->fields[22]=0;
            pawnPosition->fields[26]=0;
        }
        pawnPosition->checkBeat();
        if (pawnPosition->possibleBeat == 0){
            pawnPosition->movement = 2;
            pawnPosition->checkBeat();
        }
    }
    if (pawnPosition->obszar30->contains(points) and (pawnPosition->areaclicked == 21 or pawnPosition->areaclicked == 23) and
        (std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 23) != pawnPosition->positionBeat.end() or
         std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 53) != pawnPosition->positionBeat.end())) {
        QGraphicsRectItem* b1;
        if (pawnPosition->areaclicked == 21)
            b1 = new QGraphicsRectItem(150, 250, 49, 49);
        else
            b1 = new QGraphicsRectItem(350, 250, 49, 49);
        b1->setBrush(QColor(101, 67, 33));
        scene->addItem(b1);

        QGraphicsRectItem* b2;
        if (pawnPosition->areaclicked == 21)
            b2 = new QGraphicsRectItem(200, 300, 49, 49);
        else
            b2 = new QGraphicsRectItem(300, 300, 49, 49);
        b2->setBrush(QColor(101, 67, 33));
        scene->addItem(b2);

        int margin = 5;
        int pieceSize = 50 - 2 * margin;
        QColor pieceColor = Qt::black;
        QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(250 + margin, 350 + margin, pieceSize, pieceSize);
        piece->setBrush(pieceColor);

        int crownSize = pieceSize / 2;
        int crownX = 250 + margin + (pieceSize - crownSize) / 2;
        int crownY = 350 + margin + (pieceSize - crownSize) / 2;
        QGraphicsEllipseItem* crown = new QGraphicsEllipseItem(crownX, crownY, crownSize, crownSize, piece);
        crown->setBrush(Qt::yellow);
        scene->addItem(piece);

        pawnPosition->howMuchWhite--;
        pawnPosition->possibleBeat=0;
        pawnPosition->positionBeat.clear();
        pawnPosition->fields[30]=4;
        if (pawnPosition->areaclicked == 21){
            pawnPosition->fields[21]=0;
            pawnPosition->fields[26]=0;
        }
        else {
            pawnPosition->fields[23]=0;
            pawnPosition->fields[27]=0;
        }
        pawnPosition->checkBeat();
        if (pawnPosition->possibleBeat == 0){
            pawnPosition->movement = 2;
            pawnPosition->checkBeat();
        }
    }
    if (pawnPosition->obszar31->contains(points) and pawnPosition->areaclicked == 22 and
        std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 54) != pawnPosition->positionBeat.end()) {
        QGraphicsRectItem* b1 = new QGraphicsRectItem(250, 250, 49, 49);
        b1->setBrush(QColor(101, 67, 33));
        scene->addItem(b1);

        QGraphicsRectItem* b2 = new QGraphicsRectItem(300, 300, 49, 49);
        b2->setBrush(QColor(101, 67, 33));
        scene->addItem(b2);

        int margin = 5;
        int pieceSize = 50 - 2 * margin;
        QColor pieceColor = Qt::black;
        QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(350 + margin, 350 + margin, pieceSize, pieceSize);
        piece->setBrush(pieceColor);

        int crownSize = pieceSize / 2;
        int crownX = 350 + margin + (pieceSize - crownSize) / 2;
        int crownY = 350 + margin + (pieceSize - crownSize) / 2;
        QGraphicsEllipseItem* crown = new QGraphicsEllipseItem(crownX, crownY, crownSize, crownSize, piece);
        crown->setBrush(Qt::yellow);
        scene->addItem(piece);

        pawnPosition->howMuchWhite--;
        pawnPosition->possibleBeat=0;
        pawnPosition->positionBeat.clear();
        pawnPosition->fields[31]=4;
        pawnPosition->fields[22]=0;
        pawnPosition->fields[27]=0;
        pawnPosition->checkBeat();
        if (pawnPosition->possibleBeat == 0){
            pawnPosition->movement = 2;
            pawnPosition->checkBeat();
        }
    }

}

