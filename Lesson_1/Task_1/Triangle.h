#pragma once
#include <iostream>
#include <string>

class Triangle : public Figure {
public:
    Triangle(int a, int b, int c, int A, int B, int C);
    void print() override;

protected:
    std::string figure = "Triangle: ";
    std::string side = "Side: ";
    std::string angles = "Angles: ";
    int a, b, c;
    int A, B, C;
};