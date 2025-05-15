#include<iostream>
#include "Rhombus.h"

//  вадрат
Square::Square(int a) : Rhombus(a, 90, 90) {}
void Square::print() {
    std::cout << figure << "\n" << side << a << " " << b << " " << c << " " << d << std::endl;
    std::cout << angles << A << " " << B << " " << C << " " << D << std::endl;
}
