#include <iostream>
#include <string>
#include <cstring>
#include "lib/lib.h"

int main(int argc, char **argv) {

    /*
        ./degree_converter <mode> <degree>
            <mode> --c2f or f2c
            <degree> --double
    */

    if (argc != 3 ) {
        std::cout << "Bad arguments" << std::endl;
        std::cout << "\t<mode>\t--c2f or f2c" << std::endl;
        std::cout << "\t<degree>\t--double" << std::endl;
        return 1;
    }

    char *degree = argv[2];
    EMode mode = GetMode(argv[1]);

    switch(mode) {
        case kC2F:
            std::cout << "CelsiusToFahrenheit " << CelsiusToFahrenheit(std::stod(degree)) << std::endl;
            break;
        case fF2C: 
            std::cout << "FahrenheitToCelsius " << FahrenheitToCelsius(std::stod(degree)) << std::endl;
            break;
        default:
            std::cout << "Unkown mode\n";
            return 1;
    }

    return 0;
}
