#include <iostream>
#include <string>
#include "Header.h"
#include <windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int a, b, choice, result;

    std::cout << "¬ведите первое число: ";
    std::cin >> a;

    std::cout << "¬ведите второе число: ";
    std::cin >> b;

    std::cout << "¬ыберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    std::cin >> choice;

    switch (choice)
    {
    case 1:
        result = addition(a, b);
        std::cout << a << " + " << b << " = " << result;
        break;
    case 2:
        result = subtraction(a, b);
        std::cout << a << " - " << b << " = " << result;
        break;
    case 3:
        result = multiplication(a, b);
        std::cout << a << " * " << b << " = " << result;
        break;
    case 4:
        result = division(a, b);
        std::cout << a << " / " << b << " = " << result;
        break;
    case 5:
        result = exponentiation(a, b);
        std::cout << a << " dcd " << b << " = " << result;
        break;
    }

    return 0;
}
