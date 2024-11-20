//
// Created by 33783 on 08/11/2024.
//
#include "cellule.h"
#ifndef BOARD_H
#define BOARD_H



class Board {
private:
    int size;
    cellule board[4][4];
    int score;

public:
    Board(int size_, int score_);
    void initboard();
    char movement(char direction);
    int creation();
    int suppression(int _x, int y_);
    void fusion(char _direction);
    void draw();
    
};



#endif //BOARD_H