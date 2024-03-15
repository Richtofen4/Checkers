#include "whitemove.h"

whitemove::whitemove (pawnposition* stan, QGraphicsScene* sceneProvided): pawnPosition(stan), scene(sceneProvided) {}

void whitemove::whitepawnmove(const QPointF& points) {
    if (pawnPosition->possibleBeat == 0) {
        std::cout<<pawnPosition->possibleBeat<<std::endl;
        if(pawnPosition->obszar0->contains(points) and pawnPosition->areaclicked == 36 and pawnPosition->fields[0] == 0) {
            QGraphicsRectItem* b1 = new QGraphicsRectItem(50, 50, 49, 49);
            b1->setBrush(QColor(101, 67, 33));
            scene->addItem(b1);

            int margin = 5;
            int pieceSize = 50 - 2 * margin;
            QColor pieceColor = Qt::white;
            QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(0 + margin, 0 + margin, pieceSize, pieceSize);
            piece->setBrush(pieceColor);

            int crownSize = pieceSize / 2;
            int crownX = 0 + margin + (pieceSize - crownSize) / 2;
            int crownY = 0 + margin + (pieceSize - crownSize) / 2;
            QGraphicsEllipseItem* crown = new QGraphicsEllipseItem(crownX, crownY, crownSize, crownSize, piece);
            crown->setBrush(Qt::yellow);
            scene->addItem(piece);

            pawnPosition->fields[0] = 3;
            pawnPosition->fields[4] = 0;
            pawnPosition->areaclicked = 64;
            pawnPosition->movement--;
            pawnPosition->checkBeat();
        }
        if(pawnPosition->obszar1->contains(points) and (pawnPosition->areaclicked == 36 or pawnPosition->areaclicked == 37) and pawnPosition->fields[1] == 0) {
            QGraphicsRectItem* b1;
            if (pawnPosition->areaclicked == 36)
                b1 = new QGraphicsRectItem(50, 50, 49, 49);
            else
                b1 = new QGraphicsRectItem(150, 50, 49, 49);
            b1->setBrush(QColor(101, 67, 33));
            scene->addItem(b1);

            int margin = 5;
            int pieceSize = 50 - 2 * margin;
            QColor pieceColor = Qt::white;
            QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(100 + margin, 0 + margin, pieceSize, pieceSize);
            piece->setBrush(pieceColor);

            int crownSize = pieceSize / 2;
            int crownX = 100 + margin + (pieceSize - crownSize) / 2;
            int crownY = 0 + margin + (pieceSize - crownSize) / 2;
            QGraphicsEllipseItem* crown = new QGraphicsEllipseItem(crownX, crownY, crownSize, crownSize, piece);
            crown->setBrush(Qt::yellow);
            scene->addItem(piece);

            pawnPosition->fields[1] = 3;
            if (pawnPosition->areaclicked == 36)
                pawnPosition->fields[4] = 0;
            else
                pawnPosition->fields[5] = 0;
            pawnPosition->areaclicked = 64;
            pawnPosition->movement--;
            pawnPosition->checkBeat();
        }
        if(pawnPosition->obszar2->contains(points) and (pawnPosition->areaclicked == 37 or pawnPosition->areaclicked == 38) and pawnPosition->fields[2] == 0) {
            QGraphicsRectItem* b1;
            if (pawnPosition->areaclicked == 37)
                b1 = new QGraphicsRectItem(150, 50, 49, 49);
            else
                b1 = new QGraphicsRectItem(250, 50, 49, 49);
            b1->setBrush(QColor(101, 67, 33));
            scene->addItem(b1);

            int margin = 5;
            int pieceSize = 50 - 2 * margin;
            QColor pieceColor = Qt::white;
            QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(200 + margin, 0 + margin, pieceSize, pieceSize);
            piece->setBrush(pieceColor);

            int crownSize = pieceSize / 2;
            int crownX = 200 + margin + (pieceSize - crownSize) / 2;
            int crownY = 0 + margin + (pieceSize - crownSize) / 2;
            QGraphicsEllipseItem* crown = new QGraphicsEllipseItem(crownX, crownY, crownSize, crownSize, piece);
            crown->setBrush(Qt::yellow);
            scene->addItem(piece);

            pawnPosition->fields[2] = 3;
            if (pawnPosition->areaclicked == 37)
                pawnPosition->fields[5] = 0;
            else
                pawnPosition->fields[6] = 0;
            pawnPosition->areaclicked = 64;
            pawnPosition->movement--;
            pawnPosition->checkBeat();
        }
        if(pawnPosition->obszar3->contains(points) and (pawnPosition->areaclicked == 38 or pawnPosition->areaclicked == 39) and pawnPosition->fields[3] == 0) {
            QGraphicsRectItem* b1;
            if (pawnPosition->areaclicked == 38)
                b1 = new QGraphicsRectItem(250, 50, 49, 49);
            else
                b1 = new QGraphicsRectItem(350, 50, 49, 49);
            b1->setBrush(QColor(101, 67, 33));
            scene->addItem(b1);

            int margin = 5;
            int pieceSize = 50 - 2 * margin;
            QColor pieceColor = Qt::white;
            QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(300 + margin, 0 + margin, pieceSize, pieceSize);
            piece->setBrush(pieceColor);

            int crownSize = pieceSize / 2;
            int crownX = 300 + margin + (pieceSize - crownSize) / 2;
            int crownY = 0 + margin + (pieceSize - crownSize) / 2;
            QGraphicsEllipseItem* crown = new QGraphicsEllipseItem(crownX, crownY, crownSize, crownSize, piece);
            crown->setBrush(Qt::yellow);
            scene->addItem(piece);

            pawnPosition->fields[3] = 3;
            if (pawnPosition->areaclicked == 38)
                pawnPosition->fields[6] = 0;
            else
                pawnPosition->fields[7] = 0;
            pawnPosition->areaclicked = 64;
            pawnPosition->movement--;
            pawnPosition->checkBeat();
        }
        if(pawnPosition->obszar4->contains(points) and (pawnPosition->areaclicked == 40 or pawnPosition->areaclicked == 41) and pawnPosition->fields[4] == 0) {
            QGraphicsRectItem* b1;
            if (pawnPosition->areaclicked == 40)
                b1 = new QGraphicsRectItem(0, 100, 49, 49);
            else
                b1 = new QGraphicsRectItem(100, 100, 49, 49);
            b1->setBrush(QColor(101, 67, 33));
            scene->addItem(b1);

            int margin = 5;
            int pieceSize = 50 - 2 * margin;
            QColor pieceColor = Qt::white;
            QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(50 + margin, 50 + margin, pieceSize, pieceSize);
            piece->setBrush(pieceColor);
            scene->addItem(piece);

            pawnPosition->fields[4] = 1;
            if (pawnPosition->areaclicked == 40)
                pawnPosition->fields[8] = 0;
            else
                pawnPosition->fields[9] = 0;
            pawnPosition->areaclicked = 64;
            pawnPosition->movement--;
            pawnPosition->checkBeat();
        }
        if(pawnPosition->obszar5->contains(points) and (pawnPosition->areaclicked == 41 or pawnPosition->areaclicked == 42) and pawnPosition->fields[5] == 0) {
            QGraphicsRectItem* b1;
            if (pawnPosition->areaclicked == 41)
                b1 = new QGraphicsRectItem(100, 100, 49, 49);
            else
                b1 = new QGraphicsRectItem(200, 100, 49, 49);
            b1->setBrush(QColor(101, 67, 33));
            scene->addItem(b1);

            int margin = 5;
            int pieceSize = 50 - 2 * margin;
            QColor pieceColor = Qt::white;
            QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(150 + margin, 50 + margin, pieceSize, pieceSize);
            piece->setBrush(pieceColor);
            scene->addItem(piece);

            pawnPosition->fields[5] = 1;
            if (pawnPosition->areaclicked == 41)
                pawnPosition->fields[9] = 0;
            else
                pawnPosition->fields[10] = 0;
            pawnPosition->areaclicked = 64;
            pawnPosition->movement--;
            pawnPosition->checkBeat();
        }
        if(pawnPosition->obszar6->contains(points) and (pawnPosition->areaclicked == 42 or pawnPosition->areaclicked == 43) and pawnPosition->fields[6] == 0) {
            QGraphicsRectItem* b1;
            if (pawnPosition->areaclicked == 42)
                b1 = new QGraphicsRectItem(200, 100, 49, 49);
            else
                b1 = new QGraphicsRectItem(300, 100, 49, 49);
            b1->setBrush(QColor(101, 67, 33));
            scene->addItem(b1);

            int margin = 5;
            int pieceSize = 50 - 2 * margin;
            QColor pieceColor = Qt::white;
            QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(250 + margin, 50 + margin, pieceSize, pieceSize);
            piece->setBrush(pieceColor);
            scene->addItem(piece);

            pawnPosition->fields[6] = 1;
            if (pawnPosition->areaclicked == 42)
                pawnPosition->fields[10] = 0;
            else
                pawnPosition->fields[11] = 0;
            pawnPosition->areaclicked = 64;
            pawnPosition->movement--;
            pawnPosition->checkBeat();
        }
        if(pawnPosition->obszar7->contains(points) and pawnPosition->areaclicked == 43 and pawnPosition->fields[7] == 0) {
            QGraphicsRectItem* b1 = new QGraphicsRectItem(300, 100, 49, 49);
            b1->setBrush(QColor(101, 67, 33));
            scene->addItem(b1);

            int margin = 5;
            int pieceSize = 50 - 2 * margin;
            QColor pieceColor = Qt::white;
            QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(350 + margin, 50 + margin, pieceSize, pieceSize);
            piece->setBrush(pieceColor);
            scene->addItem(piece);

            pawnPosition->fields[7] = 1;
            pawnPosition->fields[11] = 0;
            pawnPosition->areaclicked = 64;
            pawnPosition->movement--;
            pawnPosition->checkBeat();
        }
        if(pawnPosition->obszar8->contains(points) and pawnPosition->areaclicked == 44 and pawnPosition->fields[8] == 0) {
            QGraphicsRectItem* b1 = new QGraphicsRectItem(50, 150, 49, 49);
            b1->setBrush(QColor(101, 67, 33));
            scene->addItem(b1);

            int margin = 5;
            int pieceSize = 50 - 2 * margin;
            QColor pieceColor = Qt::white;
            QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(0 + margin, 100 + margin, pieceSize, pieceSize);
            piece->setBrush(pieceColor);
            scene->addItem(piece);

            pawnPosition->fields[8] = 1;
            pawnPosition->fields[12] = 0;
            pawnPosition->areaclicked = 64;
            pawnPosition->movement--;
            pawnPosition->checkBeat();
        }
        if(pawnPosition->obszar9->contains(points) and (pawnPosition->areaclicked == 44 or pawnPosition->areaclicked == 45) and pawnPosition->fields[9] == 0) {
            QGraphicsRectItem* b1;
            if (pawnPosition->areaclicked == 44)
                b1 = new QGraphicsRectItem(50, 150, 49, 49);
            else
                b1 = new QGraphicsRectItem(150, 150, 49, 49);
            b1->setBrush(QColor(101, 67, 33));
            scene->addItem(b1);

            int margin = 5;
            int pieceSize = 50 - 2 * margin;
            QColor pieceColor = Qt::white;
            QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(100 + margin, 100 + margin, pieceSize, pieceSize);
            piece->setBrush(pieceColor);
            scene->addItem(piece);

            pawnPosition->fields[9] = 1;
            if (pawnPosition->areaclicked == 44)
                pawnPosition->fields[12] = 0;
            else
                pawnPosition->fields[13] = 0;
            pawnPosition->areaclicked = 64;
            pawnPosition->movement--;
            pawnPosition->checkBeat();
        }
        if(pawnPosition->obszar10->contains(points) and (pawnPosition->areaclicked == 45 or pawnPosition->areaclicked == 46) and pawnPosition->fields[10] == 0) {
            QGraphicsRectItem* b1;
            if (pawnPosition->areaclicked == 45)
                b1 = new QGraphicsRectItem(150, 150, 49, 49);
            else
                b1 = new QGraphicsRectItem(250, 150, 49, 49);
            b1->setBrush(QColor(101, 67, 33));
            scene->addItem(b1);

            int margin = 5;
            int pieceSize = 50 - 2 * margin;
            QColor pieceColor = Qt::white;
            QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(200 + margin, 100 + margin, pieceSize, pieceSize);
            piece->setBrush(pieceColor);
            scene->addItem(piece);

            pawnPosition->fields[10] = 1;
            if (pawnPosition->areaclicked == 45)
                pawnPosition->fields[13] = 0;
            else
                pawnPosition->fields[14] = 0;
            pawnPosition->areaclicked = 64;
            pawnPosition->movement--;
            pawnPosition->checkBeat();
        }
        if(pawnPosition->obszar11->contains(points) and (pawnPosition->areaclicked == 46 or pawnPosition->areaclicked == 47) and pawnPosition->fields[11] == 0) {
            QGraphicsRectItem* b1;
            if (pawnPosition->areaclicked == 46)
                b1 = new QGraphicsRectItem(250, 150, 49, 49);
            else
                b1 = new QGraphicsRectItem(350, 150, 49, 49);
            b1->setBrush(QColor(101, 67, 33));
            scene->addItem(b1);

            int margin = 5;
            int pieceSize = 50 - 2 * margin;
            QColor pieceColor = Qt::white;
            QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(300 + margin, 100 + margin, pieceSize, pieceSize);
            piece->setBrush(pieceColor);
            scene->addItem(piece);

            pawnPosition->fields[11] = 1;
            if (pawnPosition->areaclicked == 46)
                pawnPosition->fields[14] = 0;
            else
                pawnPosition->fields[15] = 0;
            pawnPosition->areaclicked = 64;
            pawnPosition->movement--;
            pawnPosition->checkBeat();
        }
        if(pawnPosition->obszar12->contains(points) and (pawnPosition->areaclicked == 48 or pawnPosition->areaclicked == 49) and pawnPosition->fields[12] == 0) {
            QGraphicsRectItem* b1;
            if (pawnPosition->areaclicked == 48)
                b1 = new QGraphicsRectItem(0, 200, 49, 49);
            else
                b1 = new QGraphicsRectItem(100, 200, 49, 49);
            b1->setBrush(QColor(101, 67, 33));
            scene->addItem(b1);

            int margin = 5;
            int pieceSize = 50 - 2 * margin;
            QColor pieceColor = Qt::white;
            QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(50 + margin, 150 + margin, pieceSize, pieceSize);
            piece->setBrush(pieceColor);
            scene->addItem(piece);

            pawnPosition->fields[12] = 1;
            if (pawnPosition->areaclicked == 48)
                pawnPosition->fields[16] = 0;
            else
                pawnPosition->fields[17] = 0;
            pawnPosition->areaclicked = 64;
            pawnPosition->movement--;
            pawnPosition->checkBeat();
        }
        if(pawnPosition->obszar13->contains(points) and (pawnPosition->areaclicked == 49 or pawnPosition->areaclicked == 50) and pawnPosition->fields[13] == 0) {
            QGraphicsRectItem* b1;
            if (pawnPosition->areaclicked == 49)
                b1 = new QGraphicsRectItem(100, 200, 49, 49);
            else
                b1 = new QGraphicsRectItem(200, 200, 49, 49);
            b1->setBrush(QColor(101, 67, 33));
            scene->addItem(b1);

            int margin = 5;
            int pieceSize = 50 - 2 * margin;
            QColor pieceColor = Qt::white;
            QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(150 + margin, 150 + margin, pieceSize, pieceSize);
            piece->setBrush(pieceColor);
            scene->addItem(piece);

            pawnPosition->fields[13] = 1;
            if (pawnPosition->areaclicked == 49)
                pawnPosition->fields[17] = 0;
            else
                pawnPosition->fields[18] = 0;
            pawnPosition->areaclicked = 64;
            pawnPosition->movement--;
            pawnPosition->checkBeat();
        }
        if(pawnPosition->obszar14->contains(points) and (pawnPosition->areaclicked == 50 or pawnPosition->areaclicked == 51) and pawnPosition->fields[14] == 0) {
            QGraphicsRectItem* b1;
            if (pawnPosition->areaclicked == 50)
                b1 = new QGraphicsRectItem(200, 200, 49, 49);
            else
                b1 = new QGraphicsRectItem(300, 200, 49, 49);
            b1->setBrush(QColor(101, 67, 33));
            scene->addItem(b1);

            int margin = 5;
            int pieceSize = 50 - 2 * margin;
            QColor pieceColor = Qt::white;
            QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(250 + margin, 150 + margin, pieceSize, pieceSize);
            piece->setBrush(pieceColor);
            scene->addItem(piece);

            pawnPosition->fields[14] = 1;
            if (pawnPosition->areaclicked == 50)
                pawnPosition->fields[18] = 0;
            else
                pawnPosition->fields[19] = 0;
            pawnPosition->areaclicked = 64;
            pawnPosition->movement--;
            pawnPosition->checkBeat();
        }
        if(pawnPosition->obszar15->contains(points) and pawnPosition->areaclicked == 51 and pawnPosition->fields[15] == 0) {
            QGraphicsRectItem* b1 = new QGraphicsRectItem(300, 200, 49, 49);
            b1->setBrush(QColor(101, 67, 33));
            scene->addItem(b1);

            int margin = 5;
            int pieceSize = 50 - 2 * margin;
            QColor pieceColor = Qt::white;
            QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(350 + margin, 150 + margin, pieceSize, pieceSize);
            piece->setBrush(pieceColor);
            scene->addItem(piece);

            pawnPosition->fields[15] = 1;
            pawnPosition->fields[19] = 0;
            pawnPosition->areaclicked = 64;
            pawnPosition->movement--;
            pawnPosition->checkBeat();
        }
        if(pawnPosition->obszar16->contains(points) and pawnPosition->areaclicked == 52 and pawnPosition->fields[16] == 0) {
            QGraphicsRectItem* b1 = new QGraphicsRectItem(50, 250, 49, 49);
            b1->setBrush(QColor(101, 67, 33));
            scene->addItem(b1);

            int margin = 5;
            int pieceSize = 50 - 2 * margin;
            QColor pieceColor = Qt::white;
            QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(0 + margin, 200 + margin, pieceSize, pieceSize);
            piece->setBrush(pieceColor);
            scene->addItem(piece);

            pawnPosition->fields[16] = 1;
            pawnPosition->fields[20] = 0;
            pawnPosition->areaclicked = 64;
            pawnPosition->movement--;
            pawnPosition->checkBeat();
        }
        if(pawnPosition->obszar17->contains(points) and (pawnPosition->areaclicked == 52 or pawnPosition->areaclicked == 53)  and pawnPosition->fields[17] == 0) {
            QGraphicsRectItem* b1;
            if (pawnPosition->areaclicked == 52)
                b1 = new QGraphicsRectItem(50, 250, 49, 49);
            else
                b1 = new QGraphicsRectItem(150, 250, 49, 49);
            b1->setBrush(QColor(101, 67, 33));
            scene->addItem(b1);

            int margin = 5;
            int pieceSize = 50 - 2 * margin;
            QColor pieceColor = Qt::white;
            QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(100 + margin, 200 + margin, pieceSize, pieceSize);
            piece->setBrush(pieceColor);
            scene->addItem(piece);

            pawnPosition->fields[17] = 1;
            if (pawnPosition->areaclicked == 52)
                pawnPosition->fields[20] = 0;
            else
                pawnPosition->fields[21] = 0;
            pawnPosition->areaclicked = 64;
            pawnPosition->movement--;
            pawnPosition->checkBeat();
        }
        if(pawnPosition->obszar18->contains(points) and (pawnPosition->areaclicked == 53 or pawnPosition->areaclicked == 54)  and pawnPosition->fields[18] == 0) {
            QGraphicsRectItem* b1;
            if (pawnPosition->areaclicked == 53)
                b1 = new QGraphicsRectItem(150, 250, 49, 49);
            else
                b1 = new QGraphicsRectItem(250, 250, 49, 49);
            b1->setBrush(QColor(101, 67, 33));
            scene->addItem(b1);

            int margin = 5;
            int pieceSize = 50 - 2 * margin;
            QColor pieceColor = Qt::white;
            QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(200 + margin, 200 + margin, pieceSize, pieceSize);
            piece->setBrush(pieceColor);
            scene->addItem(piece);

            pawnPosition->fields[18] = 1;
            if (pawnPosition->areaclicked == 53)
                pawnPosition->fields[21] = 0;
            else
                pawnPosition->fields[22] = 0;
            pawnPosition->areaclicked = 64;
            pawnPosition->movement--;
            pawnPosition->checkBeat();
        }
        if(pawnPosition->obszar19->contains(points) and (pawnPosition->areaclicked == 54 or pawnPosition->areaclicked == 55)  and pawnPosition->fields[19] == 0) {
            QGraphicsRectItem* b1;
            if (pawnPosition->areaclicked == 54)
                b1 = new QGraphicsRectItem(250, 250, 49, 49);
            else
                b1 = new QGraphicsRectItem(350, 250, 49, 49);
            b1->setBrush(QColor(101, 67, 33));
            scene->addItem(b1);

            int margin = 5;
            int pieceSize = 50 - 2 * margin;
            QColor pieceColor = Qt::white;
            QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(300 + margin, 200 + margin, pieceSize, pieceSize);
            piece->setBrush(pieceColor);
            scene->addItem(piece);

            pawnPosition->fields[19] = 1;
            if (pawnPosition->areaclicked == 54)
                pawnPosition->fields[22] = 0;
            else
                pawnPosition->fields[23] = 0;
            pawnPosition->areaclicked = 64;
            pawnPosition->movement--;
            pawnPosition->checkBeat();
        }
        if(pawnPosition->obszar20->contains(points) and (pawnPosition->areaclicked == 56 or pawnPosition->areaclicked == 57)  and pawnPosition->fields[20] == 0) {
            QGraphicsRectItem* b1;
            if (pawnPosition->areaclicked == 56)
                b1 = new QGraphicsRectItem(0, 300, 49, 49);
            else
                b1 = new QGraphicsRectItem(100, 300, 49, 49);
            b1->setBrush(QColor(101, 67, 33));
            scene->addItem(b1);

            int margin = 5;
            int pieceSize = 50 - 2 * margin;
            QColor pieceColor = Qt::white;
            QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(50 + margin, 250 + margin, pieceSize, pieceSize);
            piece->setBrush(pieceColor);
            scene->addItem(piece);

            pawnPosition->fields[20] = 1;
            if (pawnPosition->areaclicked == 56)
                pawnPosition->fields[24] = 0;
            else
                pawnPosition->fields[25] = 0;
            pawnPosition->areaclicked = 64;
            pawnPosition->movement--;
            pawnPosition->checkBeat();
        }
        if(pawnPosition->obszar21->contains(points) and (pawnPosition->areaclicked == 57 or pawnPosition->areaclicked == 58)  and pawnPosition->fields[21] == 0) {
            QGraphicsRectItem* b1;
            if (pawnPosition->areaclicked == 57)
                b1 = new QGraphicsRectItem(100, 300, 49, 49);
            else
                b1 = new QGraphicsRectItem(200, 300, 49, 49);
            b1->setBrush(QColor(101, 67, 33));
            scene->addItem(b1);

            int margin = 5;
            int pieceSize = 50 - 2 * margin;
            QColor pieceColor = Qt::white;
            QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(150 + margin, 250 + margin, pieceSize, pieceSize);
            piece->setBrush(pieceColor);
            scene->addItem(piece);

            pawnPosition->fields[21] = 1;
            if (pawnPosition->areaclicked == 57)
                pawnPosition->fields[25] = 0;
            else
                pawnPosition->fields[26] = 0;
            pawnPosition->areaclicked = 64;
            pawnPosition->movement--;
            pawnPosition->checkBeat();
        }
        if(pawnPosition->obszar22->contains(points) and (pawnPosition->areaclicked == 58 or pawnPosition->areaclicked == 59)  and pawnPosition->fields[22] == 0) {
            QGraphicsRectItem* b1;
            if (pawnPosition->areaclicked == 58)
                b1 = new QGraphicsRectItem(200, 300, 49, 49);
            else
                b1 = new QGraphicsRectItem(300, 300, 49, 49);
            b1->setBrush(QColor(101, 67, 33));
            scene->addItem(b1);

            int margin = 5;
            int pieceSize = 50 - 2 * margin;
            QColor pieceColor = Qt::white;
            QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(250 + margin, 250 + margin, pieceSize, pieceSize);
            piece->setBrush(pieceColor);
            scene->addItem(piece);

            pawnPosition->fields[22] = 1;
            if (pawnPosition->areaclicked == 58)
                pawnPosition->fields[26] = 0;
            else
                pawnPosition->fields[27] = 0;
            pawnPosition->areaclicked = 64;
            pawnPosition->movement--;
            pawnPosition->checkBeat();
        }
        if(pawnPosition->obszar23->contains(points) and pawnPosition->areaclicked == 59 and pawnPosition->fields[23] == 0) {
            QGraphicsRectItem* b1 = new QGraphicsRectItem(300, 300, 49, 49);
            b1->setBrush(QColor(101, 67, 33));
            scene->addItem(b1);

            int margin = 5;
            int pieceSize = 50 - 2 * margin;
            QColor pieceColor = Qt::white;
            QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(350 + margin, 250 + margin, pieceSize, pieceSize);
            piece->setBrush(pieceColor);
            scene->addItem(piece);

            pawnPosition->fields[23] = 1;
            pawnPosition->fields[27] = 0;
            pawnPosition->areaclicked = 64;
            pawnPosition->movement--;
            pawnPosition->checkBeat();
        }
        if(pawnPosition->obszar24->contains(points) and pawnPosition->areaclicked == 60 and pawnPosition->fields[24] == 0) {
            QGraphicsRectItem* b1 = new QGraphicsRectItem(50, 350, 49, 49);
            b1->setBrush(QColor(101, 67, 33));
            scene->addItem(b1);

            int margin = 5;
            int pieceSize = 50 - 2 * margin;
            QColor pieceColor = Qt::white;
            QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(0 + margin, 300 + margin, pieceSize, pieceSize);
            piece->setBrush(pieceColor);
            scene->addItem(piece);

            pawnPosition->fields[24] = 1;
            pawnPosition->fields[28] = 0;
            pawnPosition->areaclicked = 64;
            pawnPosition->movement--;
            pawnPosition->checkBeat();
        }
        if(pawnPosition->obszar25->contains(points) and (pawnPosition->areaclicked == 60 or pawnPosition->areaclicked == 61) and pawnPosition->fields[25] == 0) {
            QGraphicsRectItem* b1;
            if (pawnPosition->areaclicked == 60)
                b1 = new QGraphicsRectItem(50, 350, 49, 49);
            else
                b1 = new QGraphicsRectItem(150, 350, 49, 49);
            b1->setBrush(QColor(101, 67, 33));
            scene->addItem(b1);

            int margin = 5;
            int pieceSize = 50 - 2 * margin;
            QColor pieceColor = Qt::white;
            QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(100 + margin, 300 + margin, pieceSize, pieceSize);
            piece->setBrush(pieceColor);
            scene->addItem(piece);

            pawnPosition->fields[25] = 1;
            if (pawnPosition->areaclicked == 60)
                pawnPosition->fields[28] = 0;
            else
                pawnPosition->fields[29] = 0;
            pawnPosition->areaclicked = 64;
            pawnPosition->movement--;
            pawnPosition->checkBeat();
        }
        if(pawnPosition->obszar26->contains(points) and (pawnPosition->areaclicked == 61 or pawnPosition->areaclicked == 62) and pawnPosition->fields[26] == 0) {
            QGraphicsRectItem* b1;
            if (pawnPosition->areaclicked == 61)
                b1 = new QGraphicsRectItem(150, 350, 49, 49);
            else
                b1 = new QGraphicsRectItem(250, 350, 49, 49);
            b1->setBrush(QColor(101, 67, 33));
            scene->addItem(b1);

            int margin = 5;
            int pieceSize = 50 - 2 * margin;
            QColor pieceColor = Qt::white;
            QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(200 + margin, 300 + margin, pieceSize, pieceSize);
            piece->setBrush(pieceColor);
            scene->addItem(piece);

            pawnPosition->fields[26] = 1;
            if (pawnPosition->areaclicked == 61)
                pawnPosition->fields[29] = 0;
            else
                pawnPosition->fields[30] = 0;
            pawnPosition->areaclicked = 64;
            pawnPosition->movement--;
            pawnPosition->checkBeat();
        }
        if(pawnPosition->obszar27->contains(points) and (pawnPosition->areaclicked == 62 or pawnPosition->areaclicked == 63) and pawnPosition->fields[27] == 0) {
            QGraphicsRectItem* b1;
            if (pawnPosition->areaclicked == 62)
                b1 = new QGraphicsRectItem(250, 350, 49, 49);
            else
                b1 = new QGraphicsRectItem(350, 350, 49, 49);
            b1->setBrush(QColor(101, 67, 33));
            scene->addItem(b1);

            int margin = 5;
            int pieceSize = 50 - 2 * margin;
            QColor pieceColor = Qt::white;
            QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(300 + margin, 300 + margin, pieceSize, pieceSize);
            piece->setBrush(pieceColor);
            scene->addItem(piece);

            pawnPosition->fields[27] = 1;
            if (pawnPosition->areaclicked == 62)
                pawnPosition->fields[30] = 0;
            else
                pawnPosition->fields[31] = 0;
            pawnPosition->areaclicked = 64;
            pawnPosition->movement--;
            pawnPosition->checkBeat();
        }

    }
}

void whitemove::whitepawnbeat(const QPointF& points) {
    if (pawnPosition->obszar0->contains(points) and pawnPosition->areaclicked == 41 and
        std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 9) != pawnPosition->positionBeat.end()) {
        QGraphicsRectItem* b1 = new QGraphicsRectItem(100, 100, 49, 49);
        b1->setBrush(QColor(101, 67, 33));
        scene->addItem(b1);

        QGraphicsRectItem* b2 = new QGraphicsRectItem(50, 50, 49, 49);
        b2->setBrush(QColor(101, 67, 33));
        scene->addItem(b2);

        int margin = 5;
        int pieceSize = 50 - 2 * margin;
        QColor pieceColor = Qt::white;
        QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(0 + margin, 0 + margin, pieceSize, pieceSize);
        piece->setBrush(pieceColor);

        int crownSize = pieceSize / 2;
        int crownX = 0 + margin + (pieceSize - crownSize) / 2;
        int crownY = 0 + margin + (pieceSize - crownSize) / 2;
        QGraphicsEllipseItem* crown = new QGraphicsEllipseItem(crownX, crownY, crownSize, crownSize, piece); // Tworzymy "koronę" jako element potomny pionka
        crown->setBrush(Qt::yellow);
        scene->addItem(piece);

        pawnPosition->howMuchBlack--;
        pawnPosition->possibleBeat=0;
        pawnPosition->positionBeat.clear();
        pawnPosition->fields[0]=3;
        pawnPosition->fields[9]=0;
        pawnPosition->fields[4]=0;
        pawnPosition->checkBeat();
        if (pawnPosition->possibleBeat == 0){
            pawnPosition->movement = 1;
            pawnPosition->checkBeat();
        }
    }
    if (pawnPosition->obszar1->contains(points) and (pawnPosition->areaclicked == 40 or pawnPosition->areaclicked == 42) and
        (std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 10) != pawnPosition->positionBeat.end() or
         std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 40) != pawnPosition->positionBeat.end())) {
        QGraphicsRectItem* b1;
        if (pawnPosition->areaclicked == 40)
            b1 = new QGraphicsRectItem(0, 100, 49, 49);
        else
            b1 = new QGraphicsRectItem(200, 100, 49, 49);
        b1->setBrush(QColor(101, 67, 33));
        scene->addItem(b1);

        QGraphicsRectItem* b2;
        if (pawnPosition->areaclicked == 40)
            b2 = new QGraphicsRectItem(50, 50, 49, 49);
        else
            b2 = new QGraphicsRectItem(150, 50, 49, 49);
        b2->setBrush(QColor(101, 67, 33));
        scene->addItem(b2);

        int margin = 5;
        int pieceSize = 50 - 2 * margin;
        QColor pieceColor = Qt::white;
        QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(100 + margin, 0 + margin, pieceSize, pieceSize);
        piece->setBrush(pieceColor);

        int crownSize = pieceSize / 2;
        int crownX = 100 + margin + (pieceSize - crownSize) / 2;
        int crownY = 0 + margin + (pieceSize - crownSize) / 2;
        QGraphicsEllipseItem* crown = new QGraphicsEllipseItem(crownX, crownY, crownSize, crownSize, piece); // Tworzymy "koronę" jako element potomny pionka
        crown->setBrush(Qt::yellow);
        scene->addItem(piece);

        pawnPosition->howMuchBlack--;
        pawnPosition->possibleBeat=0;
        pawnPosition->positionBeat.clear();
        pawnPosition->fields[1]=3;
        if (pawnPosition->areaclicked == 40){
            pawnPosition->fields[8]=0;
            pawnPosition->fields[4]=0;
        }
        else {
            pawnPosition->fields[10]=0;
            pawnPosition->fields[5]=0;
        }
        pawnPosition->checkBeat();
        if (pawnPosition->possibleBeat == 0){
            pawnPosition->movement = 1;
            pawnPosition->checkBeat();
        }
    }
    if (pawnPosition->obszar2->contains(points) and (pawnPosition->areaclicked == 41 or pawnPosition->areaclicked == 43) and
        (std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 11) != pawnPosition->positionBeat.end() or
         std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 41) != pawnPosition->positionBeat.end())) {
        QGraphicsRectItem* b1;
        if (pawnPosition->areaclicked == 41)
            b1 = new QGraphicsRectItem(100, 100, 49, 49);
        else
            b1 = new QGraphicsRectItem(300, 100, 49, 49);
        b1->setBrush(QColor(101, 67, 33));
        scene->addItem(b1);

        QGraphicsRectItem* b2;
        if (pawnPosition->areaclicked == 41)
            b2 = new QGraphicsRectItem(150, 50, 49, 49);
        else
            b2 = new QGraphicsRectItem(250, 50, 49, 49);
        b2->setBrush(QColor(101, 67, 33));
        scene->addItem(b2);

        int margin = 5;
        int pieceSize = 50 - 2 * margin;
        QColor pieceColor = Qt::white;
        QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(200 + margin, 0 + margin, pieceSize, pieceSize);
        piece->setBrush(pieceColor);

        int crownSize = pieceSize / 2;
        int crownX = 200 + margin + (pieceSize - crownSize) / 2;
        int crownY = 0 + margin + (pieceSize - crownSize) / 2;
        QGraphicsEllipseItem* crown = new QGraphicsEllipseItem(crownX, crownY, crownSize, crownSize, piece); // Tworzymy "koronę" jako element potomny pionka
        crown->setBrush(Qt::yellow);
        scene->addItem(piece);

        pawnPosition->howMuchBlack--;
        pawnPosition->possibleBeat=0;
        pawnPosition->positionBeat.clear();
        pawnPosition->fields[2]=3;
        if (pawnPosition->areaclicked == 41){
            pawnPosition->fields[9]=0;
            pawnPosition->fields[5]=0;
        }
        else {
            pawnPosition->fields[11]=0;
            pawnPosition->fields[6]=0;
        }
        pawnPosition->checkBeat();
        if (pawnPosition->possibleBeat == 0){
            pawnPosition->movement = 1;
            pawnPosition->checkBeat();
        }
    }
    if (pawnPosition->obszar3->contains(points) and pawnPosition->areaclicked == 42 and
        std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 42) != pawnPosition->positionBeat.end()) {
        QGraphicsRectItem* b1 = new QGraphicsRectItem(200, 100, 49, 49);
        b1->setBrush(QColor(101, 67, 33));
        scene->addItem(b1);

        QGraphicsRectItem* b2 = new QGraphicsRectItem(250, 50, 49, 49);
        b2->setBrush(QColor(101, 67, 33));
        scene->addItem(b2);

        int margin = 5;
        int pieceSize = 50 - 2 * margin;
        QColor pieceColor = Qt::white;
        QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(300 + margin, 0 + margin, pieceSize, pieceSize);
        piece->setBrush(pieceColor);

        int crownSize = pieceSize / 2;
        int crownX = 300 + margin + (pieceSize - crownSize) / 2;
        int crownY = 0 + margin + (pieceSize - crownSize) / 2;
        QGraphicsEllipseItem* crown = new QGraphicsEllipseItem(crownX, crownY, crownSize, crownSize, piece); // Tworzymy "koronę" jako element potomny pionka
        crown->setBrush(Qt::yellow);
        scene->addItem(piece);

        pawnPosition->howMuchBlack--;
        pawnPosition->possibleBeat=0;
        pawnPosition->positionBeat.clear();
        pawnPosition->fields[3]=3;
        pawnPosition->fields[10]=0;
        pawnPosition->fields[6]=0;
        pawnPosition->checkBeat();
        if (pawnPosition->possibleBeat == 0){
            pawnPosition->movement = 1;
            pawnPosition->checkBeat();
        }
    }
    if (pawnPosition->obszar4->contains(points) and pawnPosition->areaclicked == 45 and
        std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 13) != pawnPosition->positionBeat.end()) {
        QGraphicsRectItem* b1 = new QGraphicsRectItem(150, 150, 49, 49);
        b1->setBrush(QColor(101, 67, 33));
        scene->addItem(b1);

        QGraphicsRectItem* b2 = new QGraphicsRectItem(100, 100, 49, 49);
        b2->setBrush(QColor(101, 67, 33));
        scene->addItem(b2);

        int margin = 5;
        int pieceSize = 50 - 2 * margin;
        QColor pieceColor = Qt::white;
        QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(50 + margin, 50 + margin, pieceSize, pieceSize);
        piece->setBrush(pieceColor);
        scene->addItem(piece);
        pawnPosition->howMuchBlack--;
        pawnPosition->possibleBeat=0;
        pawnPosition->positionBeat.clear();
        pawnPosition->fields[4]=1;
        pawnPosition->fields[9]=0;
        pawnPosition->fields[13]=0;
        pawnPosition->checkBeat();
        if (pawnPosition->possibleBeat == 0){
            pawnPosition->movement = 1;
            pawnPosition->checkBeat();
        }
    }
    if (pawnPosition->obszar5->contains(points) and (pawnPosition->areaclicked == 44 or pawnPosition->areaclicked == 46) and
        (std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 14) != pawnPosition->positionBeat.end() or
         std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 44) != pawnPosition->positionBeat.end())) {
        QGraphicsRectItem* b1;
        if (pawnPosition->areaclicked == 44)
            b1 = new QGraphicsRectItem(50, 150, 49, 49);
        else
            b1 = new QGraphicsRectItem(250, 150, 49, 49);
        b1->setBrush(QColor(101, 67, 33));
        scene->addItem(b1);

        QGraphicsRectItem* b2;
        if (pawnPosition->areaclicked == 44)
            b2 = new QGraphicsRectItem(100, 100, 49, 49);
        else
            b2 = new QGraphicsRectItem(200, 100, 49, 49);
        b2->setBrush(QColor(101, 67, 33));
        scene->addItem(b2);

        int margin = 5;
        int pieceSize = 50 - 2 * margin;
        QColor pieceColor = Qt::white;
        QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(150 + margin, 50 + margin, pieceSize, pieceSize);
        piece->setBrush(pieceColor);
        scene->addItem(piece);
        pawnPosition->howMuchBlack--;
        pawnPosition->possibleBeat=0;
        pawnPosition->positionBeat.clear();
        pawnPosition->fields[5]=1;
        if (pawnPosition->areaclicked == 44){
            pawnPosition->fields[12]=0;
            pawnPosition->fields[9]=0;
        }
        else {
            pawnPosition->fields[14]=0;
            pawnPosition->fields[10]=0;
        }
        pawnPosition->checkBeat();
        if (pawnPosition->possibleBeat == 0){
            pawnPosition->movement = 1;
            pawnPosition->checkBeat();
        }
    }
    if (pawnPosition->obszar6->contains(points) and (pawnPosition->areaclicked == 45 or pawnPosition->areaclicked == 47) and
        (std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 15) != pawnPosition->positionBeat.end() or
         std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 45) != pawnPosition->positionBeat.end())) {
        QGraphicsRectItem* b1;
        if (pawnPosition->areaclicked == 45)
            b1 = new QGraphicsRectItem(150, 150, 49, 49);
        else
            b1 = new QGraphicsRectItem(350, 150, 49, 49);
        b1->setBrush(QColor(101, 67, 33));
        scene->addItem(b1);

        QGraphicsRectItem* b2;
        if (pawnPosition->areaclicked == 45)
            b2 = new QGraphicsRectItem(200, 100, 49, 49);
        else
            b2 = new QGraphicsRectItem(300, 100, 49, 49);
        b2->setBrush(QColor(101, 67, 33));
        scene->addItem(b2);

        int margin = 5;
        int pieceSize = 50 - 2 * margin;
        QColor pieceColor = Qt::white;
        QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(250 + margin, 50 + margin, pieceSize, pieceSize);
        piece->setBrush(pieceColor);
        scene->addItem(piece);
        pawnPosition->howMuchBlack--;
        pawnPosition->possibleBeat=0;
        pawnPosition->positionBeat.clear();
        pawnPosition->fields[6]=1;
        if (pawnPosition->areaclicked == 45){
            pawnPosition->fields[13]=0;
            pawnPosition->fields[10]=0;
        }
        else {
            pawnPosition->fields[15]=0;
            pawnPosition->fields[11]=0;
        }
        pawnPosition->checkBeat();
        if (pawnPosition->possibleBeat == 0){
            pawnPosition->movement = 1;
            pawnPosition->checkBeat();
        }
    }
    if (pawnPosition->obszar7->contains(points) and pawnPosition->areaclicked == 46  and
        std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 46) != pawnPosition->positionBeat.end()) {
        QGraphicsRectItem* b1 = new QGraphicsRectItem(250, 150, 49, 49);
        b1->setBrush(QColor(101, 67, 33));
        scene->addItem(b1);

        QGraphicsRectItem* b2 = new QGraphicsRectItem(300, 100, 49, 49);
        b2->setBrush(QColor(101, 67, 33));
        scene->addItem(b2);

        int margin = 5;
        int pieceSize = 50 - 2 * margin;
        QColor pieceColor = Qt::white;
        QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(350 + margin, 50 + margin, pieceSize, pieceSize);
        piece->setBrush(pieceColor);
        scene->addItem(piece);
        pawnPosition->howMuchBlack--;
        pawnPosition->possibleBeat=0;
        pawnPosition->positionBeat.clear();
        pawnPosition->fields[7]=1;
        pawnPosition->fields[14]=0;
        pawnPosition->fields[11]=0;
        pawnPosition->checkBeat();
        if (pawnPosition->possibleBeat == 0){
            pawnPosition->movement = 1;
            pawnPosition->checkBeat();
        }
    }
    if (pawnPosition->obszar8->contains(points) and pawnPosition->areaclicked == 49 and
        std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 17) != pawnPosition->positionBeat.end()) {
        QGraphicsRectItem* b1 = new QGraphicsRectItem(100, 200, 49, 49);
        b1->setBrush(QColor(101, 67, 33));
        scene->addItem(b1);

        QGraphicsRectItem* b2 = new QGraphicsRectItem(50, 150, 49, 49);
        b2->setBrush(QColor(101, 67, 33));
        scene->addItem(b2);

        int margin = 5;
        int pieceSize = 50 - 2 * margin;
        QColor pieceColor = Qt::white;
        QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(0 + margin, 100 + margin, pieceSize, pieceSize);
        piece->setBrush(pieceColor);
        scene->addItem(piece);
        pawnPosition->howMuchBlack--;
        pawnPosition->possibleBeat=0;
        pawnPosition->positionBeat.clear();
        pawnPosition->fields[8]=1;
        pawnPosition->fields[12]=0;
        pawnPosition->fields[17]=0;
        pawnPosition->checkBeat();
        if (pawnPosition->possibleBeat == 0){
            pawnPosition->movement = 1;
            pawnPosition->checkBeat();
        }
    }
    if (pawnPosition->obszar9->contains(points) and (pawnPosition->areaclicked == 48 or pawnPosition->areaclicked == 50) and
        (std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 18) != pawnPosition->positionBeat.end() or
         std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 48) != pawnPosition->positionBeat.end())) {
        QGraphicsRectItem* b1;
        if (pawnPosition->areaclicked == 48)
            b1 = new QGraphicsRectItem(0, 200, 49, 49);
        else
            b1 = new QGraphicsRectItem(200, 200, 49, 49);
        b1->setBrush(QColor(101, 67, 33));
        scene->addItem(b1);

        QGraphicsRectItem* b2;
        if (pawnPosition->areaclicked == 52)
            b2 = new QGraphicsRectItem(50, 150, 49, 49);
        else
            b2 = new QGraphicsRectItem(150, 150, 49, 49);
        b2->setBrush(QColor(101, 67, 33));
        scene->addItem(b2);

        int margin = 5;
        int pieceSize = 50 - 2 * margin;
        QColor pieceColor = Qt::white;
        QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(100 + margin, 100 + margin, pieceSize, pieceSize);
        piece->setBrush(pieceColor);
        scene->addItem(piece);
        pawnPosition->howMuchBlack--;
        pawnPosition->possibleBeat=0;
        pawnPosition->positionBeat.clear();
        pawnPosition->fields[9]=1;
        if (pawnPosition->areaclicked == 48){
            pawnPosition->fields[16]=0;
            pawnPosition->fields[12]=0;
        }
        else {
            pawnPosition->fields[18]=0;
            pawnPosition->fields[13]=0;
        }
        pawnPosition->checkBeat();
        if (pawnPosition->possibleBeat == 0){
            pawnPosition->movement = 1;
            pawnPosition->checkBeat();
        }
    }
    if (pawnPosition->obszar10->contains(points) and (pawnPosition->areaclicked == 49 or pawnPosition->areaclicked == 51) and
        (std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 19) != pawnPosition->positionBeat.end() or
         std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 49) != pawnPosition->positionBeat.end())) {
        QGraphicsRectItem* b1;
        if (pawnPosition->areaclicked == 49)
            b1 = new QGraphicsRectItem(100, 200, 49, 49);
        else
            b1 = new QGraphicsRectItem(300, 200, 49, 49);
        b1->setBrush(QColor(101, 67, 33));
        scene->addItem(b1);

        QGraphicsRectItem* b2;
        if (pawnPosition->areaclicked == 49)
            b2 = new QGraphicsRectItem(150, 150, 49, 49);
        else
            b2 = new QGraphicsRectItem(250, 150, 49, 49);
        b2->setBrush(QColor(101, 67, 33));
        scene->addItem(b2);

        int margin = 5;
        int pieceSize = 50 - 2 * margin;
        QColor pieceColor = Qt::white;
        QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(200 + margin, 100 + margin, pieceSize, pieceSize);
        piece->setBrush(pieceColor);
        scene->addItem(piece);
        pawnPosition->howMuchBlack--;
        pawnPosition->possibleBeat=0;
        pawnPosition->positionBeat.clear();
        pawnPosition->fields[10]=1;
        if (pawnPosition->areaclicked == 49){
            pawnPosition->fields[17]=0;
            pawnPosition->fields[13]=0;
        }
        else {
            pawnPosition->fields[19]=0;
            pawnPosition->fields[14]=0;
        }
        pawnPosition->checkBeat();
        if (pawnPosition->possibleBeat == 0){
            pawnPosition->movement = 1;
            pawnPosition->checkBeat();
        }
    }
    if (pawnPosition->obszar11->contains(points) and pawnPosition->areaclicked == 50 and
        std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 50) != pawnPosition->positionBeat.end()) {
        QGraphicsRectItem* b1 = new QGraphicsRectItem(200, 200, 49, 49);
        b1->setBrush(QColor(101, 67, 33));
        scene->addItem(b1);

        QGraphicsRectItem* b2 = new QGraphicsRectItem(250, 150, 49, 49);
        b2->setBrush(QColor(101, 67, 33));
        scene->addItem(b2);

        int margin = 5;
        int pieceSize = 50 - 2 * margin;
        QColor pieceColor = Qt::white;
        QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(300 + margin, 100 + margin, pieceSize, pieceSize);
        piece->setBrush(pieceColor);
        scene->addItem(piece);
        pawnPosition->howMuchBlack--;
        pawnPosition->possibleBeat=0;
        pawnPosition->positionBeat.clear();
        pawnPosition->fields[11]=1;
        pawnPosition->fields[14]=0;
        pawnPosition->fields[18]=0;
        pawnPosition->checkBeat();
        if (pawnPosition->possibleBeat == 0){
            pawnPosition->movement = 1;
            pawnPosition->checkBeat();
        }
    }
    if (pawnPosition->obszar12->contains(points) and pawnPosition->areaclicked == 53 and
        std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 21) != pawnPosition->positionBeat.end()) {
        QGraphicsRectItem* b1 = new QGraphicsRectItem(150, 250, 49, 49);
        b1->setBrush(QColor(101, 67, 33));
        scene->addItem(b1);

        QGraphicsRectItem* b2 = new QGraphicsRectItem(100, 200, 49, 49);
        b2->setBrush(QColor(101, 67, 33));
        scene->addItem(b2);

        int margin = 5;
        int pieceSize = 50 - 2 * margin;
        QColor pieceColor = Qt::white;
        QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(50 + margin, 150 + margin, pieceSize, pieceSize);
        piece->setBrush(pieceColor);
        scene->addItem(piece);
        pawnPosition->howMuchBlack--;
        pawnPosition->possibleBeat=0;
        pawnPosition->positionBeat.clear();
        pawnPosition->fields[12]=1;
        pawnPosition->fields[17]=0;
        pawnPosition->fields[21]=0;
        pawnPosition->checkBeat();
        if (pawnPosition->possibleBeat == 0){
            pawnPosition->movement = 1;
            pawnPosition->checkBeat();
        }
    }
    if (pawnPosition->obszar13->contains(points) and (pawnPosition->areaclicked == 52 or pawnPosition->areaclicked == 54) and
        (std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 22) != pawnPosition->positionBeat.end() or
         std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 52) != pawnPosition->positionBeat.end())) {
        QGraphicsRectItem* b1;
        if (pawnPosition->areaclicked == 52)
            b1 = new QGraphicsRectItem(50, 250, 49, 49);
        else
            b1 = new QGraphicsRectItem(250, 250, 49, 49);
        b1->setBrush(QColor(101, 67, 33));
        scene->addItem(b1);

        QGraphicsRectItem* b2;
        if (pawnPosition->areaclicked == 52)
            b2 = new QGraphicsRectItem(100, 200, 49, 49);
        else
            b2 = new QGraphicsRectItem(200, 200, 49, 49);
        b2->setBrush(QColor(101, 67, 33));
        scene->addItem(b2);

        int margin = 5;
        int pieceSize = 50 - 2 * margin;
        QColor pieceColor = Qt::white;
        QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(150 + margin, 150 + margin, pieceSize, pieceSize);
        piece->setBrush(pieceColor);
        scene->addItem(piece);
        pawnPosition->howMuchBlack--;
        pawnPosition->possibleBeat=0;
        pawnPosition->positionBeat.clear();
        pawnPosition->fields[13]=1;
        if (pawnPosition->areaclicked == 52){
            pawnPosition->fields[20]=0;
            pawnPosition->fields[17]=0;
        }
        else {
            pawnPosition->fields[22]=0;
            pawnPosition->fields[18]=0;
        }
        pawnPosition->checkBeat();
        if (pawnPosition->possibleBeat == 0){
            pawnPosition->movement = 1;
            pawnPosition->checkBeat();
        }
    }
    if (pawnPosition->obszar14->contains(points) and (pawnPosition->areaclicked == 53 or pawnPosition->areaclicked == 55) and
        (std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 23) != pawnPosition->positionBeat.end() or
         std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 53) != pawnPosition->positionBeat.end())) {
        QGraphicsRectItem* b1;
        std::cout<<"wszedl"<<std::endl;
        if (pawnPosition->areaclicked == 53)
            b1 = new QGraphicsRectItem(150, 250, 49, 49);
        else
            b1 = new QGraphicsRectItem(350, 250, 49, 49);
        b1->setBrush(QColor(101, 67, 33));
        scene->addItem(b1);

        QGraphicsRectItem* b2;
        if (pawnPosition->areaclicked == 53)
            b2 = new QGraphicsRectItem(200, 200, 49, 49);
        else
            b2 = new QGraphicsRectItem(300, 200, 49, 49);
        b2->setBrush(QColor(101, 67, 33));
        scene->addItem(b2);

        int margin = 5;
        int pieceSize = 50 - 2 * margin;
        QColor pieceColor = Qt::white;
        QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(250 + margin, 150 + margin, pieceSize, pieceSize);
        piece->setBrush(pieceColor);
        scene->addItem(piece);
        pawnPosition->howMuchBlack--;
        pawnPosition->possibleBeat=0;
        pawnPosition->positionBeat.clear();
        pawnPosition->fields[14]=1;
        if (pawnPosition->areaclicked == 53){
            pawnPosition->fields[21]=0;
            pawnPosition->fields[18]=0;
        }
        else {
            pawnPosition->fields[23]=0;
            pawnPosition->fields[19]=0;
        }
        pawnPosition->checkBeat();
        if (pawnPosition->possibleBeat == 0){
            pawnPosition->movement = 1;
            pawnPosition->checkBeat();
        }
    }
    if (pawnPosition->obszar15->contains(points) and pawnPosition->areaclicked == 54 and
        std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 54) != pawnPosition->positionBeat.end()) {
        QGraphicsRectItem* b1 = new QGraphicsRectItem(250, 250, 49, 49);
        b1->setBrush(QColor(101, 67, 33));
        scene->addItem(b1);

        QGraphicsRectItem* b2 = new QGraphicsRectItem(300, 200, 49, 49);
        b2->setBrush(QColor(101, 67, 33));
        scene->addItem(b2);

        int margin = 5;
        int pieceSize = 50 - 2 * margin;
        QColor pieceColor = Qt::white;
        QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(350 + margin, 150 + margin, pieceSize, pieceSize);
        piece->setBrush(pieceColor);
        scene->addItem(piece);
        pawnPosition->howMuchBlack--;
        pawnPosition->possibleBeat=0;
        pawnPosition->positionBeat.clear();
        pawnPosition->fields[15]=1;
        pawnPosition->fields[22]=0;
        pawnPosition->fields[19]=0;
        pawnPosition->checkBeat();
        if (pawnPosition->possibleBeat == 0){
            pawnPosition->movement = 1;
            pawnPosition->checkBeat();
        }
    }
    if (pawnPosition->obszar16->contains(points) and pawnPosition->areaclicked == 57 and
        std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 25) != pawnPosition->positionBeat.end()) {
        QGraphicsRectItem* b1 = new QGraphicsRectItem(100, 300, 49, 49);
        b1->setBrush(QColor(101, 67, 33));
        scene->addItem(b1);

        QGraphicsRectItem* b2 = new QGraphicsRectItem(50, 250, 49, 49);
        b2->setBrush(QColor(101, 67, 33));
        scene->addItem(b2);

        int margin = 5;
        int pieceSize = 50 - 2 * margin;
        QColor pieceColor = Qt::white;
        QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(0 + margin, 200 + margin, pieceSize, pieceSize);
        piece->setBrush(pieceColor);
        scene->addItem(piece);
        pawnPosition->howMuchBlack--;
        pawnPosition->possibleBeat=0;
        pawnPosition->positionBeat.clear();
        pawnPosition->fields[16]=1;
        pawnPosition->fields[20]=0;
        pawnPosition->fields[25]=0;
        pawnPosition->checkBeat();
        if (pawnPosition->possibleBeat == 0){
            pawnPosition->movement = 1;
            pawnPosition->checkBeat();
        }
    }
    if (pawnPosition->obszar17->contains(points) and (pawnPosition->areaclicked == 56 or pawnPosition->areaclicked == 58) and
        (std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 26) != pawnPosition->positionBeat.end() or
         std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 56) != pawnPosition->positionBeat.end())) {
        QGraphicsRectItem* b1;
        if (pawnPosition->areaclicked == 56)
            b1 = new QGraphicsRectItem(0, 300, 49, 49);
        else
            b1 = new QGraphicsRectItem(200, 300, 49, 49);
        b1->setBrush(QColor(101, 67, 33));
        scene->addItem(b1);

        QGraphicsRectItem* b2;
        if (pawnPosition->areaclicked == 56)
            b2 = new QGraphicsRectItem(50, 250, 49, 49);
        else
            b2 = new QGraphicsRectItem(150, 250, 49, 49);
        b2->setBrush(QColor(101, 67, 33));
        scene->addItem(b2);

        int margin = 5;
        int pieceSize = 50 - 2 * margin;
        QColor pieceColor = Qt::white;
        QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(100 + margin, 200 + margin, pieceSize, pieceSize);
        piece->setBrush(pieceColor);
        scene->addItem(piece);
        pawnPosition->howMuchBlack--;
        pawnPosition->possibleBeat=0;
        pawnPosition->positionBeat.clear();
        pawnPosition->fields[17]=1;
        if (pawnPosition->areaclicked == 56){
            pawnPosition->fields[24]=0;
            pawnPosition->fields[20]=0;
        }
        else {
            pawnPosition->fields[26]=0;
            pawnPosition->fields[21]=0;
        }
        pawnPosition->checkBeat();
        if (pawnPosition->possibleBeat == 0){
            pawnPosition->movement = 1;
            pawnPosition->checkBeat();
        }
    }
    if (pawnPosition->obszar18->contains(points) and (pawnPosition->areaclicked == 57 or pawnPosition->areaclicked == 59) and
        (std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 27) != pawnPosition->positionBeat.end() or
         std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 57) != pawnPosition->positionBeat.end())) {
        QGraphicsRectItem* b1;
        if (pawnPosition->areaclicked == 57)
            b1 = new QGraphicsRectItem(100, 300, 49, 49);
        else
            b1 = new QGraphicsRectItem(300, 300, 49, 49);
        b1->setBrush(QColor(101, 67, 33));
        scene->addItem(b1);

        QGraphicsRectItem* b2;
        if (pawnPosition->areaclicked == 57)
            b2 = new QGraphicsRectItem(150, 250, 49, 49);
        else
            b2 = new QGraphicsRectItem(250, 250, 49, 49);
        b2->setBrush(QColor(101, 67, 33));
        scene->addItem(b2);

        int margin = 5;
        int pieceSize = 50 - 2 * margin;
        QColor pieceColor = Qt::white;
        QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(200 + margin, 200 + margin, pieceSize, pieceSize);
        piece->setBrush(pieceColor);
        scene->addItem(piece);
        pawnPosition->howMuchBlack--;
        pawnPosition->possibleBeat=0;
        pawnPosition->positionBeat.clear();
        pawnPosition->fields[18]=1;
        if (pawnPosition->areaclicked == 57){
            pawnPosition->fields[25]=0;
            pawnPosition->fields[21]=0;
        }
        else {
            pawnPosition->fields[27]=0;
            pawnPosition->fields[22]=0;
        }
        pawnPosition->checkBeat();
        if (pawnPosition->possibleBeat == 0){
            pawnPosition->movement = 1;
            pawnPosition->checkBeat();
        }
    }
    if (pawnPosition->obszar19->contains(points) and pawnPosition->areaclicked == 58 and
        std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 58) != pawnPosition->positionBeat.end()) {
        QGraphicsRectItem* b1 = new QGraphicsRectItem(200, 300, 49, 49);
        b1->setBrush(QColor(101, 67, 33));
        scene->addItem(b1);

        QGraphicsRectItem* b2 = new QGraphicsRectItem(250, 250, 49, 49);
        b2->setBrush(QColor(101, 67, 33));
        scene->addItem(b2);

        int margin = 5;
        int pieceSize = 50 - 2 * margin;
        QColor pieceColor = Qt::white;
        QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(300 + margin, 200 + margin, pieceSize, pieceSize);
        piece->setBrush(pieceColor);
        scene->addItem(piece);
        pawnPosition->howMuchBlack--;
        pawnPosition->possibleBeat=0;
        pawnPosition->positionBeat.clear();
        pawnPosition->fields[19]=1;
        pawnPosition->fields[22]=0;
        pawnPosition->fields[26]=0;
        pawnPosition->checkBeat();
        if (pawnPosition->possibleBeat == 0){
            pawnPosition->movement = 1;
            pawnPosition->checkBeat();
        }
    }
    if (pawnPosition->obszar20->contains(points) and pawnPosition->areaclicked == 61 and
        std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 29) != pawnPosition->positionBeat.end()) {
        QGraphicsRectItem* b1 = new QGraphicsRectItem(150, 350, 49, 49);
        b1->setBrush(QColor(101, 67, 33));
        scene->addItem(b1);

        QGraphicsRectItem* b2 = new QGraphicsRectItem(100, 300, 49, 49);
        b2->setBrush(QColor(101, 67, 33));
        scene->addItem(b2);

        int margin = 5;
        int pieceSize = 50 - 2 * margin;
        QColor pieceColor = Qt::white;
        QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(50 + margin, 250 + margin, pieceSize, pieceSize);
        piece->setBrush(pieceColor);
        scene->addItem(piece);
        pawnPosition->howMuchBlack--;
        pawnPosition->possibleBeat=0;
        pawnPosition->positionBeat.clear();
        pawnPosition->fields[20]=1;
        pawnPosition->fields[25]=0;
        pawnPosition->fields[29]=0;
        pawnPosition->checkBeat();
        if (pawnPosition->possibleBeat == 0){
            pawnPosition->movement = 1;
            pawnPosition->checkBeat();
        }
    }
    if (pawnPosition->obszar21->contains(points) and (pawnPosition->areaclicked == 60 or pawnPosition->areaclicked == 62) and
        (std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 30) != pawnPosition->positionBeat.end() or
         std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 60) != pawnPosition->positionBeat.end())) {
        QGraphicsRectItem* b1;
        if (pawnPosition->areaclicked == 60)
            b1 = new QGraphicsRectItem(50, 350, 49, 49);
        else
            b1 = new QGraphicsRectItem(250, 350, 49, 49);
        b1->setBrush(QColor(101, 67, 33));
        scene->addItem(b1);

        QGraphicsRectItem* b2;
        if (pawnPosition->areaclicked == 60)
            b2 = new QGraphicsRectItem(100, 300, 49, 49);
        else
            b2 = new QGraphicsRectItem(200, 300, 49, 49);
        b2->setBrush(QColor(101, 67, 33));
        scene->addItem(b2);

        int margin = 5;
        int pieceSize = 50 - 2 * margin;
        QColor pieceColor = Qt::white;
        QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(150 + margin, 250 + margin, pieceSize, pieceSize);
        piece->setBrush(pieceColor);
        scene->addItem(piece);
        pawnPosition->howMuchBlack--;
        pawnPosition->possibleBeat=0;
        pawnPosition->positionBeat.clear();
        pawnPosition->fields[21]=1;
        if (pawnPosition->areaclicked == 60){
            pawnPosition->fields[28]=0;
            pawnPosition->fields[25]=0;
        }
        else {
            pawnPosition->fields[30]=0;
            pawnPosition->fields[26]=0;
        }
        pawnPosition->checkBeat();
        if (pawnPosition->possibleBeat == 0){
            pawnPosition->movement = 1;
            pawnPosition->checkBeat();
        }
    }
    if (pawnPosition->obszar22->contains(points) and (pawnPosition->areaclicked == 61 or pawnPosition->areaclicked == 63) and
        (std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 31) != pawnPosition->positionBeat.end() or
         std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 61) != pawnPosition->positionBeat.end())) {
        QGraphicsRectItem* b1;
        if (pawnPosition->areaclicked == 61)
            b1 = new QGraphicsRectItem(150, 350, 49, 49);
        else
            b1 = new QGraphicsRectItem(350, 350, 49, 49);
        b1->setBrush(QColor(101, 67, 33));
        scene->addItem(b1);

        QGraphicsRectItem* b2;
        if (pawnPosition->areaclicked == 61)
            b2 = new QGraphicsRectItem(200, 300, 49, 49);
        else
            b2 = new QGraphicsRectItem(300, 300, 49, 49);
        b2->setBrush(QColor(101, 67, 33));
        scene->addItem(b2);

        int margin = 5;
        int pieceSize = 50 - 2 * margin;
        QColor pieceColor = Qt::white;
        QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(250 + margin, 250 + margin, pieceSize, pieceSize);
        piece->setBrush(pieceColor);
        scene->addItem(piece);
        pawnPosition->howMuchBlack--;
        pawnPosition->possibleBeat=0;
        pawnPosition->positionBeat.clear();
        pawnPosition->fields[22]=1;
        if (pawnPosition->areaclicked == 61){
            pawnPosition->fields[29]=0;
            pawnPosition->fields[26]=0;
        }
        else {
            pawnPosition->fields[31]=0;
            pawnPosition->fields[27]=0;
        }
        pawnPosition->checkBeat();
        if (pawnPosition->possibleBeat == 0){
            pawnPosition->movement = 1;
            pawnPosition->checkBeat();
        }
    }
    if (pawnPosition->obszar23->contains(points) and pawnPosition->areaclicked == 62  and
        std::find(pawnPosition->positionBeat.begin(), pawnPosition->positionBeat.end(), 62) != pawnPosition->positionBeat.end()) {
        QGraphicsRectItem* b1 = new QGraphicsRectItem(250, 350, 49, 49);
        b1->setBrush(QColor(101, 67, 33));
        scene->addItem(b1);

        QGraphicsRectItem* b2 = new QGraphicsRectItem(300, 300, 49, 49);
        b2->setBrush(QColor(101, 67, 33));
        scene->addItem(b2);

        int margin = 5;
        int pieceSize = 50 - 2 * margin;
        QColor pieceColor = Qt::white;
        QGraphicsEllipseItem* piece = new QGraphicsEllipseItem(350 + margin, 250 + margin, pieceSize, pieceSize);
        piece->setBrush(pieceColor);
        scene->addItem(piece);
        pawnPosition->howMuchBlack--;
        pawnPosition->possibleBeat=0;
        pawnPosition->positionBeat.clear();
        pawnPosition->fields[23]=1;
        pawnPosition->fields[30]=0;
        pawnPosition->fields[27]=0;
        pawnPosition->checkBeat();
        if (pawnPosition->possibleBeat == 0){
            pawnPosition->movement = 1;
            pawnPosition->checkBeat();
        }
    }
}
