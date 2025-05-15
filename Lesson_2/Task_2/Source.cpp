#include <iostream>
#include <string>
#include "Header.h"
#include <windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int a, b, choice, result;

    std::cout << "������� ������ �����: ";
    std::cin >> a;

    std::cout << "������� ������ �����: ";
    std::cin >> b;

    std::cout << "�������� �������� (1 - ��������, 2 ���������, 3 - ���������, 4 - �������, 5 - ���������� � �������): ";
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
