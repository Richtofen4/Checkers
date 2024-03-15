#include "pawnposition.h"

pawnposition::pawnposition(QGraphicsScene* sceneProvided) : scene(sceneProvided) {
    areaclicked = 64;
    movement = 2;
    possibleBeat = 0;
    howMuchWhite = 12;
    howMuchBlack = 12;
    for(int i = 0; i < 32; i++) {
        if(i < 12) fields.push_back(2);
        else if(i >= 20) fields.push_back(1);
        else fields.push_back(0);
    }

    obszar0 = new QGraphicsRectItem(0, 0, 49, 49);
    obszar0->setBrush(QBrush(Qt::NoBrush));
    obszar0->setPen(QPen(Qt::NoPen));
    scene->addItem(obszar0);

    obszar1 = new QGraphicsRectItem(100, 0, 49, 49);
    obszar1->setBrush(QBrush(Qt::NoBrush));
    obszar1->setPen(QPen(Qt::NoPen));
    scene->addItem(obszar1);

    obszar2 = new QGraphicsRectItem(200, 0, 49, 49);
    obszar2->setBrush(QBrush(Qt::NoBrush));
    obszar2->setPen(QPen(Qt::NoPen));
    scene->addItem(obszar2);

    obszar3 = new QGraphicsRectItem(300, 0, 49, 49);
    obszar3->setBrush(QBrush(Qt::NoBrush));
    obszar3->setPen(QPen(Qt::NoPen));
    scene->addItem(obszar3);

    obszar4 = new QGraphicsRectItem(50, 50, 49, 49);
    obszar4->setBrush(QBrush(Qt::NoBrush));
    obszar4->setPen(QPen(Qt::NoPen));
    scene->addItem(obszar4);

    obszar5 = new QGraphicsRectItem(150, 50, 49, 49);
    obszar5->setBrush(QBrush(Qt::NoBrush));
    obszar5->setPen(QPen(Qt::NoPen));
    scene->addItem(obszar5);

    obszar6 = new QGraphicsRectItem(250, 50, 49, 49);
    obszar6->setBrush(QBrush(Qt::NoBrush));
    obszar6->setPen(QPen(Qt::NoPen));
    scene->addItem(obszar6);

    obszar7 = new QGraphicsRectItem(350, 50, 49, 49);
    obszar7->setBrush(QBrush(Qt::NoBrush));
    obszar7->setPen(QPen(Qt::NoPen));
    scene->addItem(obszar7);

    obszar8 = new QGraphicsRectItem(0, 100, 49, 49);
    obszar8->setBrush(QBrush(Qt::NoBrush));
    obszar8->setPen(QPen(Qt::NoPen));
    scene->addItem(obszar8);

    obszar9 = new QGraphicsRectItem(100, 100, 49, 49);
    obszar9->setBrush(QBrush(Qt::NoBrush));
    obszar9->setPen(QPen(Qt::NoPen));
    scene->addItem(obszar9);

    obszar10 = new QGraphicsRectItem(200, 100, 49, 49);
    obszar10->setBrush(QBrush(Qt::NoBrush));
    obszar10->setPen(QPen(Qt::NoPen));
    scene->addItem(obszar10);

    obszar11 = new QGraphicsRectItem(300, 100, 49, 49);
    obszar11->setBrush(QBrush(Qt::NoBrush));
    obszar11->setPen(QPen(Qt::NoPen));
    scene->addItem(obszar11);

    obszar12 = new QGraphicsRectItem(50, 150, 49, 49);
    obszar12->setBrush(QBrush(Qt::NoBrush));
    obszar12->setPen(QPen(Qt::NoPen));
    scene->addItem(obszar12);

    obszar13 = new QGraphicsRectItem(150, 150, 49, 49);
    obszar13->setBrush(QBrush(Qt::NoBrush));
    obszar13->setPen(QPen(Qt::NoPen));
    scene->addItem(obszar13);

    obszar14 = new QGraphicsRectItem(250, 150, 49, 49);
    obszar14->setBrush(QBrush(Qt::NoBrush));
    obszar14->setPen(QPen(Qt::NoPen));
    scene->addItem(obszar14);

    obszar15 = new QGraphicsRectItem(350, 150, 49, 49);
    obszar15->setBrush(QBrush(Qt::NoBrush));
    obszar15->setPen(QPen(Qt::NoPen));
    scene->addItem(obszar15);

    obszar16 = new QGraphicsRectItem(0, 200, 49, 49);
    obszar16->setBrush(QBrush(Qt::NoBrush));
    obszar16->setPen(QPen(Qt::NoPen));
    scene->addItem(obszar16);

    obszar17 = new QGraphicsRectItem(100, 200, 49, 49);
    obszar17->setBrush(QBrush(Qt::NoBrush));
    obszar17->setPen(QPen(Qt::NoPen));
    scene->addItem(obszar17);

    obszar18 = new QGraphicsRectItem(200, 200, 49, 49);
    obszar18->setBrush(QBrush(Qt::NoBrush));
    obszar18->setPen(QPen(Qt::NoPen));
    scene->addItem(obszar18);

    obszar19 = new QGraphicsRectItem(300, 200, 49, 49);
    obszar19->setBrush(QBrush(Qt::NoBrush));
    obszar19->setPen(QPen(Qt::NoPen));
    scene->addItem(obszar19);

    obszar20 = new QGraphicsRectItem(50, 250, 49, 49);
    obszar20->setBrush(QBrush(Qt::NoBrush));
    obszar20->setPen(QPen(Qt::NoPen));
    scene->addItem(obszar20);

    obszar21 = new QGraphicsRectItem(150, 250, 49, 49);
    obszar21->setBrush(QBrush(Qt::NoBrush));
    obszar21->setPen(QPen(Qt::NoPen));
    scene->addItem(obszar21);

    obszar22 = new QGraphicsRectItem(250, 250, 49, 49);
    obszar22->setBrush(QBrush(Qt::NoBrush));
    obszar22->setPen(QPen(Qt::NoPen));
    scene->addItem(obszar22);

    obszar23 = new QGraphicsRectItem(350, 250, 49, 49);
    obszar23->setBrush(QBrush(Qt::NoBrush));
    obszar23->setPen(QPen(Qt::NoPen));
    scene->addItem(obszar23);

    obszar24 = new QGraphicsRectItem(0, 300, 49, 49);
    obszar24->setBrush(QBrush(Qt::NoBrush));
    obszar24->setPen(QPen(Qt::NoPen));
    scene->addItem(obszar24);

    obszar25 = new QGraphicsRectItem(100, 300, 49, 49);
    obszar25->setBrush(QBrush(Qt::NoBrush));
    obszar25->setPen(QPen(Qt::NoPen));
    scene->addItem(obszar25);

    obszar26 = new QGraphicsRectItem(200, 300, 49, 49);
    obszar26->setBrush(QBrush(Qt::NoBrush));
    obszar26->setPen(QPen(Qt::NoPen));
    scene->addItem(obszar26);

    obszar27 = new QGraphicsRectItem(300, 300, 49, 49);
    obszar27->setBrush(QBrush(Qt::NoBrush));
    obszar27->setPen(QPen(Qt::NoPen));
    scene->addItem(obszar27);

    obszar28 = new QGraphicsRectItem(50, 350, 49, 49);
    obszar28->setBrush(QBrush(Qt::NoBrush));
    obszar28->setPen(QPen(Qt::NoPen));
    scene->addItem(obszar28);

    obszar29 = new QGraphicsRectItem(150, 350, 49, 49);
    obszar29->setBrush(QBrush(Qt::NoBrush));
    obszar29->setPen(QPen(Qt::NoPen));
    scene->addItem(obszar29);

    obszar30 = new QGraphicsRectItem(250, 350, 49, 49);
    obszar30->setBrush(QBrush(Qt::NoBrush));
    obszar30->setPen(QPen(Qt::NoPen));
    scene->addItem(obszar30);

    obszar31 = new QGraphicsRectItem(350, 350, 49, 49);
    obszar31->setBrush(QBrush(Qt::NoBrush));
    obszar31->setPen(QPen(Qt::NoPen));
    scene->addItem(obszar31);

}

void pawnposition::handle(const QPointF& points) {
    if (movement == 1) {
        if(obszar0->contains(points) and fields[0] == 2){
            areaclicked = 0; std::cout<<"area: "<<areaclicked<<std::endl;
        }
        if(obszar1->contains(points) and fields[1] == 2){
            areaclicked = 1;std::cout<<"area: "<<areaclicked<<std::endl;
        }
        if(obszar2->contains(points) and fields[2] == 2){
            areaclicked = 2;std::cout<<"area: "<<areaclicked<<std::endl;
        }
        if(obszar3->contains(points) and fields[3] == 2){
            areaclicked = 3;std::cout<<"area: "<<areaclicked<<std::endl;
        }
        if(obszar4->contains(points) and fields[4] == 2){
            areaclicked = 4;std::cout<<"area: "<<areaclicked<<std::endl;
        }
        if(obszar5->contains(points) and fields[5] == 2){
            areaclicked = 5;std::cout<<"area: "<<areaclicked<<std::endl;
        }
        if(obszar6->contains(points) and fields[6] == 2){
            areaclicked = 6;std::cout<<"area: "<<areaclicked<<std::endl;
        }
        if(obszar7->contains(points) and fields[7] == 2){
            areaclicked = 7;std::cout<<"area: "<<areaclicked<<std::endl;
        }
        if(obszar8->contains(points) and fields[8] == 2){
            areaclicked = 8;std::cout<<"area: "<<areaclicked<<std::endl;
        }
        if(obszar9->contains(points) and fields[9] == 2){
            areaclicked = 9;std::cout<<"area: "<<areaclicked<<std::endl;
        }
        if(obszar10->contains(points) and fields[10] == 2){
            areaclicked = 10;std::cout<<"area: "<<areaclicked<<std::endl;
        }
        if(obszar11->contains(points) and fields[11] == 2){
            areaclicked = 11;std::cout<<"area: "<<areaclicked<<std::endl;
        }
        if(obszar12->contains(points) and fields[12] == 2){
            areaclicked = 12;std::cout<<"area: "<<areaclicked<<std::endl;
        }
        if(obszar13->contains(points) and fields[13] == 2){
            areaclicked = 13;std::cout<<"area: "<<areaclicked<<std::endl;
        }
        if(obszar14->contains(points) and fields[14] == 2){
            areaclicked = 14;std::cout<<"area: "<<areaclicked<<std::endl;
        }
        if(obszar15->contains(points) and fields[15] == 2 ){
            areaclicked = 15;std::cout<<"area: "<<areaclicked<<std::endl;
        }
        if(obszar16->contains(points) and fields[16] == 2){
            areaclicked = 16;std::cout<<"area: "<<areaclicked<<std::endl;
        }
        if(obszar17->contains(points) and fields[17] == 2){
            areaclicked = 17;std::cout<<"area: "<<areaclicked<<std::endl;
        }
        if(obszar18->contains(points) and fields[18] == 2){
            areaclicked = 18;std::cout<<"area: "<<areaclicked<<std::endl;
        }
        if(obszar19->contains(points) and fields[19] == 2){
            areaclicked = 19;std::cout<<"area: "<<areaclicked<<std::endl;
        }
        if(obszar20->contains(points) and fields[20] == 2){
            areaclicked = 20;std::cout<<"area: "<<areaclicked<<std::endl;
        }
        if(obszar21->contains(points) and fields[21] == 2){
            areaclicked = 21;std::cout<<"area: "<<areaclicked<<std::endl;
        }
        if(obszar22->contains(points) and fields[22] == 2){
            areaclicked = 22;std::cout<<"area: "<<areaclicked<<std::endl;
        }
        if(obszar23->contains(points) and fields[23] == 2){
            areaclicked = 23;std::cout<<"area: "<<areaclicked<<std::endl;
        }
        if(obszar24->contains(points) and fields[24] == 2){
            areaclicked = 24;std::cout<<"area: "<<areaclicked<<std::endl;
        }
        if(obszar25->contains(points) and fields[25] == 2){
            areaclicked = 25;std::cout<<"area: "<<areaclicked<<std::endl;
        }
        if(obszar26->contains(points) and fields[26] == 2){
            areaclicked = 26;std::cout<<"area: "<<areaclicked<<std::endl;
        }
        if(obszar27->contains(points) and fields[27] == 2){
            areaclicked = 27;std::cout<<"area: "<<areaclicked<<std::endl;
        }
        if(obszar28->contains(points) and fields[28] == 2){
            areaclicked = 28;std::cout<<"area: "<<areaclicked<<std::endl;
        }
        if(obszar29->contains(points) and fields[29] == 2){
            areaclicked = 29;std::cout<<"area: "<<areaclicked<<std::endl;
        }
        if(obszar30->contains(points) and fields[30] == 2){
            areaclicked = 30;std::cout<<"area: "<<areaclicked<<std::endl;
        }
        if(obszar31->contains(points) and fields[31] == 2){
            areaclicked = 31;std::cout<<"area: "<<areaclicked<<std::endl;
        }

    }
    else if (movement == 2){
        if(obszar0->contains(points) and fields[0] == 1){
            areaclicked = 32;std::cout<<"area: "<<areaclicked<<std::endl;
        }
        if(obszar1->contains(points) and fields[1] == 1){
            areaclicked = 33;std::cout<<"area: "<<areaclicked<<std::endl;
        }
        if(obszar2->contains(points) and fields[2] == 1){
            areaclicked = 34;std::cout<<"area: "<<areaclicked<<std::endl;
        }
        if(obszar3->contains(points) and fields[3] == 1){
            areaclicked = 35;std::cout<<"area: "<<areaclicked<<std::endl;
        }
        if(obszar4->contains(points) and fields[4] == 1){
            areaclicked = 36;std::cout<<"area: "<<areaclicked<<std::endl;
        }
        if(obszar5->contains(points) and fields[5] == 1){
            areaclicked = 37;std::cout<<"area: "<<areaclicked<<std::endl;
        }
        if(obszar6->contains(points) and fields[6] == 1){
            areaclicked = 38;std::cout<<"area: "<<areaclicked<<std::endl;
        }
        if(obszar7->contains(points) and fields[7] == 1){
            areaclicked = 39;std::cout<<"area: "<<areaclicked<<std::endl;
        }
        if(obszar8->contains(points) and fields[8] == 1){
            areaclicked = 40;std::cout<<"area: "<<areaclicked<<std::endl;
        }
        if(obszar9->contains(points) and fields[9] == 1){
            areaclicked = 41;std::cout<<"area: "<<areaclicked<<std::endl;
        }
        if(obszar10->contains(points) and fields[10] == 1){
            areaclicked = 42;std::cout<<"area: "<<areaclicked<<std::endl;
        }
        if(obszar11->contains(points) and fields[11] == 1){
            areaclicked = 43;std::cout<<"area: "<<areaclicked<<std::endl;
        }
        if(obszar12->contains(points) and fields[12] == 1){
            areaclicked = 44;std::cout<<"area: "<<areaclicked<<std::endl;
        }
        if(obszar13->contains(points) and fields[13] == 1){
            areaclicked = 45;std::cout<<"area: "<<areaclicked<<std::endl;
        }
        if(obszar14->contains(points) and fields[14] == 1){
            areaclicked = 46;std::cout<<"area: "<<areaclicked<<std::endl;
        }
        if(obszar15->contains(points) and fields[15] == 1 ){
            areaclicked = 47;std::cout<<"area: "<<areaclicked<<std::endl;
        }
        if(obszar16->contains(points) and fields[16] == 1){
            areaclicked = 48;std::cout<<"area: "<<areaclicked<<std::endl;
        }
        if(obszar17->contains(points) and fields[17] == 1){
            areaclicked = 49;std::cout<<"area: "<<areaclicked<<std::endl;
        }
        if(obszar18->contains(points) and fields[18] == 1){
            areaclicked = 50;std::cout<<"area: "<<areaclicked<<std::endl;
        }
        if(obszar19->contains(points) and fields[19] == 1){
            areaclicked = 51;std::cout<<"area: "<<areaclicked<<std::endl;
        }
        if(obszar20->contains(points) and fields[20] == 1){
            areaclicked = 52;std::cout<<"area: "<<areaclicked<<std::endl;
        }
        if(obszar21->contains(points) and fields[21] == 1){
            areaclicked = 53;std::cout<<"area: "<<areaclicked<<std::endl;
        }
        if(obszar22->contains(points) and fields[22] == 1){
            areaclicked = 54;std::cout<<"area: "<<areaclicked<<std::endl;
        }
        if(obszar23->contains(points) and fields[23] == 1){
            areaclicked = 55;std::cout<<"area: "<<areaclicked<<std::endl;
        }
        if(obszar24->contains(points) and fields[24] == 1){
            areaclicked = 56;std::cout<<"area: "<<areaclicked<<std::endl;
        }
        if(obszar25->contains(points) and fields[25] == 1){
            areaclicked = 57;std::cout<<"area: "<<areaclicked<<std::endl;
        }
        if(obszar26->contains(points) and fields[26] == 1){
            areaclicked = 58;std::cout<<"area: "<<areaclicked<<std::endl;
        }
        if(obszar27->contains(points) and fields[27] == 1){
            areaclicked = 59;std::cout<<"area: "<<areaclicked<<std::endl;
        }
        if(obszar28->contains(points) and fields[28] == 1){
            areaclicked = 60;std::cout<<"area: "<<areaclicked<<std::endl;
        }
        if(obszar29->contains(points) and fields[29] == 1){
            areaclicked = 61;std::cout<<"area: "<<areaclicked<<std::endl;
        }
        if(obszar30->contains(points) and fields[30] == 1){
            areaclicked = 62;std::cout<<"area: "<<areaclicked<<std::endl;
        }
        if(obszar31->contains(points) and fields[31] == 1){
            areaclicked = 63;std::cout<<"area: "<<areaclicked<<std::endl;
        }
    }
}

void pawnposition::checkBeat(){
    for (int i = 0; i < fields.size(); ++i) {
        if (movement == 1){
            if(i<24 and fields[i]==2 and (i%4) != 0) {
                // We call for a left down capture for Black
                if (i%8 < 4){
                    if  ((i+3)%8 != 7 and (i+3)%8 != 0 and fields[i+3] == 1 and fields[i+7] == 0 and (i+7)%4 != 3){
                        positionBeat.push_back(i); // Possible runout, we save the index
                        possibleBeat = 1;
                        std::cout << "detected capture of a black pawn to the bottom left in position " << i << std::endl;
                    }
                }
                else{
                    if ((i+4)%8 != 7 and (i+4)%8 != 0 and fields[i+4] == 1 and fields[i+7] == 0 and (i+7)%4 !=3){
                        positionBeat.push_back(i); // Possible runout, we save the index
                        possibleBeat = 1;
                        std::cout << "detected capture of a black pawn to the bottom left in position " << i << std::endl;
                    }
                }
            }
            if(i<24 and fields[i]==2 and (i%4)!=3) {
                // We call for a right down capture for Black
                if ((i%8) < 4){
                    if ((i+4)%8 != 7 and (i+4)%8 != 0 and fields[i+4] == 1 and fields[i+9] == 0 and (i+9)%4 != 0){
                        positionBeat.push_back(i+32); // Possible runout, we save the index
                        possibleBeat = 1;
                        std::cout << "detected capture of a black pawn in the right hole in position " << i << std::endl;
                    }
                }
                else{
                    if ((i+5)%8 != 7 and (i+5)%8 != 0 and fields[i+5] == 1 and fields[i+9] == 0 and (i+9)%4 !=0){
                        positionBeat.push_back(i+32); // Possible runout, we save the index
                        possibleBeat = 1;
                        std::cout << "detected capture of a black pawn in the right hole in position " << i << std::endl;
                    }
                }
            }
        }
        else {
            if(i>7 and fields[i]==1 and (i%4)!=0) {
                // We call for a left up capture for White
                if ((i%8) < 4){
                    if ((i-5)%8 != 7 and (i-5)%8 != 0 and fields[i-5] == 2 and fields[i-9] == 0 and (i-9)%4 != 3){
                        positionBeat.push_back(i); // Possible runout, we save the index
                        possibleBeat = 1;
                        std::cout << "detected capture of the white pawn to the top left in the position " << i << std::endl;
                    }
                }
                else{
                    if ((i-4)%8 != 7 and (i-4)%8 != 0 and fields[i-4] == 2 and fields[i-9] == 0 and (i-9)%4 !=3){
                        positionBeat.push_back(i); // Possible runout, we save the index
                        possibleBeat = 1;
                        std::cout << "detected capture of the white pawn to the top left in the position " << i << std::endl;
                    }
                }
            }
            if(i>7 and fields[i]==1 and (i%4)!=3) {
                // We call for a right up capture for White
                if ((i%8) < 4){
                    if ((i-4)%8 != 7 and (i-4)%8 != 0 and fields[i-4] == 2 and fields[i-7] == 0 and (i-7)%4 != 0){
                        positionBeat.push_back(i+32); // Possible runout, we save the index
                        possibleBeat = 1;
                        std::cout << "detected capture of the white pawn to the top right in the position " << i << std::endl;
                    }
                }
                else{
                    if ((i-3)%8 != 7 and (i-3)%8 != 0 and fields[i-3] == 2 and fields[i-7] == 0 and (i-7)%4 !=0){
                        positionBeat.push_back(i+32); // Possible runout, we save the index
                        possibleBeat = 1;
                        std::cout << "detected capture of the white pawn to the top right in the position " << i << std::endl;
                    }
                }
            }
        }
    }
    for(int num : positionBeat) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}
