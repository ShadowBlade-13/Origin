#include<iostream>
#include<string>
#include"Figure.h"
#include"Triangle.h"
#include"Right_triangle.h"
#include"Isosceles_triangle.h"
#include"Equilateral_triangle.h"
#include"Quadrangle.h"
#include"Rectangle.h"
#include"Square.h"
#include"Parallelogram.h"
#include"Rhombus.h"

int main()
{
    Triangle triangle(10, 20, 30, 30, 70, 80); // �����������
    triangle.print();

    Right_triangle right_triangle(10, 20, 30, 30, 50); // ������������� �����������
    right_triangle.print();

    Isosceles_triangle isosceles_triangle(60, 60, 60, 60); // �������������� �����������
    isosceles_triangle.print();

    Equilateral_triangle equilateral_triangle(60); // �������������� �����������
    equilateral_triangle.print();

    Quadrangle quadrangle(70, 100, 70, 100, 70, 110, 70, 110); // ��������������
    quadrangle.print();

    Rectangle rectangle(30, 70); // �������������
    rectangle.print();

    Square square(10); // �������
    square.print();

    Parallelogram parallelogram(10, 50, 60, 30); // ��������������
    parallelogram.print();

    Rhombus rhombus(10, 60, 30); // ����
    rhombus.print();

    std::cout << "\n\n\n";
    return 0;
}