//
// Created by 33783 on 08/11/2024.
//
#include <iostream>
#include <random>
#include "Board.h"
#include "cellule.h"

Board::Board() : _size(0), _score(0) {}
Board::Board(int size, int score)
    : _size(size), _score(score), _board(size, std::vector<int>(size, 0)) {}


void Board::initboard() {
    for (int i = 0; i < _size; i++) {
        for (int j = 0; j < _size; j++) {
            _board[i][j] = 0;
        }
    }
}

void Board::draw() const {
    for (int i = 0; i < _size; i++) {
        std::cout << " _" ;
        for (int k = 0; k < _size; k++) {
            std::cout << "____";
        }
        std::cout << std::endl;
        for (int j = 0; j < _size; j++) {
            std::cout << " | " << _board[i][j];
        }
        std::cout << " |" << std::endl;
    }

}

char Board::movement(char direction) {
    std::cout << "veuillez rentrer une direction : " << std::endl << "haut = h" << std::endl << "bas = b" << std::endl << "gauche = g" << std::endl << "droite = d" << std::endl;
    std::cin >> direction;
    return direction;
}
/*
int Board::creation(int _c_value, int _y, int _x){
    _x = rand()%4;
    _y = rand()%4;
    int cap = rand()%100;
    int value_new_cell;
    if(cap < 40) {
        value_new_cell = 4;
    }
    else {
        value_new_cell = 2;
    }
    cellule cell(value_new_cell);
    board[_x][_y] = cell;
    return 0;
}
*/
