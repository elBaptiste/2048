//
// Created by 33783 on 08/11/2024.
//

#include "cellule.h"
#include <vector>
#ifndef BOARD_H
#define BOARD_H



class Board {
private:
    int _size;
    int _score;
    std::vector<std::vector<int>> _board;

public:
    Board();
    Board(int size, int score);

    void initboard();
    char movement(char direction);
    int creation(int _c_value, int _y, int _x);
    int suppression(int _x, int y_);
    void fusion(char _direction);
    void draw() const;
    
};



#endif //BOARD_H
