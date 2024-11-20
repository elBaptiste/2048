#include <iostream>
#include "cellule.h"
#include "Board.h"


int main() {
    std::cout << "Hello, World!" << std::endl;
    int a = 5;
    cellule la_celulle(4);
    //la_cellule = cellule::cellule(5);
    printf("%d", la_celulle.GetValue());
    Board plateau(4, 0);
    plateau.creation();
    plateau.draw();

    return 0;
}
