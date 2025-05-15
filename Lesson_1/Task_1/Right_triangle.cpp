#include<iostream>
#include "Triangle.h"

// Прямоугольный треугольник
Right_triangle::Right_triangle(int a, int b, int c, int A, int B) : Triangle(a, b, c, A, B, 90) {}
void Right_triangle::print() {
    std::cout << figure << "\n" << side << a << " " << b << " " << c << std::endl;
    std::cout << angles << A << " " << B << " " << C << std::endl;
}
