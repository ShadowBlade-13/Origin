#pragma once
#include <iostream>
#include <string>

class Rectangle : public Parallelogram {
public:
    Rectangle(int a, int b);
    void print() override;

private:
    std::string figure = "Rectangle: ";
};