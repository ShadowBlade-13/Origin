#pragma once
#include <iostream>
#include <string>


class Quadrangle : public Figure {
public:
    Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D);
    void print() override;

protected:
    std::string figure = "Quadrangle: ";
    std::string side = "Side: ";
    std::string angles = "Angles: ";
    int a, b, c, d;
    int A, B, C, D;
};