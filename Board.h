//
// Created by 33783 on 08/11/2024.
//

#include "cellule.h"
#ifndef BOARD_H
#define BOARD_H



class Board {
private:
    int size = 4;
    cellule board[self.size][seld.size];
    int score = 0;

public:
    Board();
    void initboard();
    char movement(char direction);
    int creation(int _c_value, int _y, int _x);
    int suppression(int _x, int y_);
    void fusion(char _direction);
    void draw();
    
};



#endif //BOARD_H
