#include "lib.h"


double CelsiusToFahrenheit(double celsius) {
    return celsius*1.8 + 32;
}

double FahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) / 1.8;
}

EMode GetMode(char* mode) {
    if(strcmp(mode,"c2f") == 0) return kC2F;
    if(strcmp(mode,"f2c") == 0) return fF2C;
    return kUsupported;
}