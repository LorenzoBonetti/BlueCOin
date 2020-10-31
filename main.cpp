#include <iostream>
#include "BlueCoinController.h"


int main() {
    int com_N=12;
    int angle;
    std::cout << "Hello, World!" << std::endl;
    BlueCoinController blueCoinController(com_N);
    angle=blueCoinController.getAngle();
    return 0;
}
