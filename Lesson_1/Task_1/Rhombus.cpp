#include<iostream>
#include "Parallelogram.h"

// Ромб
Rhombus::Rhombus(int a, int A, int B) : Parallelogram(a, a, A, B) {}
void Rhombus::print() {
    std::cout << figure << "\n" << side << a << " " << b << " " << c << " " << d << std::endl;
    std::cout << angles << A << " " << B << " " << C << " " << D << std::endl;
}