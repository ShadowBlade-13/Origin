#pragma once
#include <iostream>
#include <string>

class Parallelogram : public Quadrangle {
public:
    Parallelogram(int a, int b, int A, int B);
    void print() override;

private:
    std::string figure = "Parallelogram: ";
};