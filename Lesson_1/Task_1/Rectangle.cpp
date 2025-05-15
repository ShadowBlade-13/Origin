#include<iostream>
#include "Parallelogram.h"

// Прямоугольник
Rectangle::Rectangle(int a, int b) : Parallelogram(a, b, 90, 90) {}
void Rectangle::print() {
    std::cout << figure << "\n" << side << a << " " << b << " " << c << " " << d << std::endl;
    std::cout << angles << A << " " << B << " " << C << " " << D << std::endl;
}