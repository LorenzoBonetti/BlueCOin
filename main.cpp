#include <iostream>
#include "BlueCoinController.h"


int main() {
    int com_N = 12;
    int angle;
    std::cout << "Hello, World!" << std::endl;

    BlueCoinController blueCoinController(com_N);


    try {
        blueCoinController.connectToCOMPort();
        std::cout << "BlueCoin connected" << std::endl;
    }
    catch (ConnectionErrorException &e) {
        std::cout << e.what() << std::endl;
    }

    try {
        angle = blueCoinController.getAngle();
        std::cout << "Angle: " << angle << std::endl;
    }
    catch (GetStatusException &e) {
        std::cout << e.what() << std::endl;
    }
    catch (SetStatusException &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
