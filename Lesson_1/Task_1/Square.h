#pragma once
#include <iostream>
#include <string>

class Square : public Rhombus {
public:
    Square(int a);
    void print() override;

private:
    std::string figure = "Square: ";
};