#include<iostream>
#include "Triangle.h"

// Равносторонний треугольник
Equilateral_triangle::Equilateral_triangle(int a) : Triangle(a, a, a, 60, 60, 60) {}
void Equilateral_triangle::print() {
    std::cout << figure << "\n" << side << a << " " << b << " " << c << std::endl;
    std::cout << angles << A << " " << B << " " << C << std::endl;
}