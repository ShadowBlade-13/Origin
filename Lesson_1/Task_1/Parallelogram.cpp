#include<iostream>
#include "Quadrangle.h"

// ֿאנאככוכמדנאלל
Parallelogram::Parallelogram(int a, int b, int A, int B) : Quadrangle(a, b, a, b, A, B, A, B) {}
void Parallelogram::print() {
    std::cout << figure << "\n" << side << a << " " << b << " " << c << " " << d << std::endl;
    std::cout << angles << A << " " << B << " " << C << " " << D << std::endl;
}