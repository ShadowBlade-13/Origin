#include<iostream>
#include "Figure.h"

//  // Треугольник
Triangle::Triangle(int a, int b, int c, int A, int B, int C) : a(a), b(b), c(c), A(A), B(B), C(C) {}
void Triangle::print() {
    std::cout << figure << "\n" << side << a << " " << b << " " << c << std::endl;
    std::cout << angles << A << " " << B << " " << C << std::endl;
}