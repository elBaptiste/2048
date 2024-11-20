//
// Created by 33783 on 08/11/2024.
//

#include "cellule.h"
#ifndef BOARD_H
#define BOARD_H



class Board {
private:
    int _size;
    int _score;

public:
    Board();
    Board(int size, int score);

    void initboard(int board[][]);
    char movement(char direction);
    int creation(int _c_value, int _y, int _x);
    int suppression(int _x, int y_);
    void fusion(char _direction);
    void draw(int board[][]);
    
};



#endif //BOARD_H
