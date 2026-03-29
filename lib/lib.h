#pragma once
#include <string>
#include <cstring>

enum EMode {
    kUsupported,
    kC2F,
    fF2C,
};

double CelsiusToFahrenheit(double celsius);
double FahrenheitToCelsius(double fahrenheit);
EMode GetMode(char* mode);