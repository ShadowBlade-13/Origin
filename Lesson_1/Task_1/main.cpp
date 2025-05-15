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
    Triangle triangle(10, 20, 30, 30, 70, 80); // Треугольник
    triangle.print();

    Right_triangle right_triangle(10, 20, 30, 30, 50); // Прямоугольный треугольник
    right_triangle.print();

    Isosceles_triangle isosceles_triangle(60, 60, 60, 60); // Равнобедренный треугольник
    isosceles_triangle.print();

    Equilateral_triangle equilateral_triangle(60); // Равносторонний треугольник
    equilateral_triangle.print();

    Quadrangle quadrangle(70, 100, 70, 100, 70, 110, 70, 110); // Четырёхугольник
    quadrangle.print();

    Rectangle rectangle(30, 70); // Прямоугольник
    rectangle.print();

    Square square(10); // Квадрат
    square.print();

    Parallelogram parallelogram(10, 50, 60, 30); // Параллелограмм
    parallelogram.print();

    Rhombus rhombus(10, 60, 30); // Ромб
    rhombus.print();

    std::cout << "\n\n\n";
    return 0;
}