#pragma once
#include <iostream>
#include <string>

class Rhombus : public Parallelogram {
public:
    Rhombus(int a, int A, int B);
    void print() override;

private:
    std::string figure = "Rhombus: ";
};