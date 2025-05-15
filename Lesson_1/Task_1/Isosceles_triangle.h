#pragma once
#include <iostream>
#include <string>

class Isosceles_triangle : public Triangle {
public:
    Isosceles_triangle(int a, int b, int A, int B);
    void print() override;

private:
    std::string figure = "Isosceles_triangle: ";
};
