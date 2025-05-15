#pragma once
#include <iostream>
#include <string>

class Equilateral_triangle : public Triangle {
public:
    Equilateral_triangle(int a);
    void print() override;

private:
    std::string figure = "Equilateral_triangle: ";
};