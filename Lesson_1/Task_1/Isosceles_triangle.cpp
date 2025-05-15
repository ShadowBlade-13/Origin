#include<iostream>
#include "Triangle.h"

// Равнобедренный треугольник
Isosceles_triangle::Isosceles_triangle(int a, int b, int A, int B) : Triangle(a, b, a, A, B, A) {}
void Isosceles_triangle::print() {
    std::cout << figure << "\n" << side << a << " " << b << " " << c << std::endl;
    std::cout << angles << A << " " << B << " " << C << std::endl;