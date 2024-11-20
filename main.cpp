#include <iostream>
#include "Board.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    Board plateau;
    plateau.initboard();
    plateau.draw();

    return 0;
}
