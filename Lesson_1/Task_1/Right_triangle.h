#pragma once
#include <iostream>
#include <string>

class Right_triangle : public Triangle {
public:
    Right_triangle(int a, int b, int c, int A, int B);
    void print() override;

private:
    std::string figure = "Right_triangle: ";
    const int C = 90;
};