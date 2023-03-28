﻿// MathematicalFunctions.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

#include "MathFunction.h"

int main()
{
    setlocale(LC_ALL, "rus");
    int num_1 = 0, num_2 = 0, operation;
    std::cout << "Введите первое числе: ";
    std::cin >> num_1;
    std::cout << "Введите второе числе: ";
    std::cin >> num_2;
    std::cout << "Выберите операцию (1 - сложение, 2 - вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    std::cin >> operation;
    if (operation == 1)
    {
        std::cout << num_1 << " плюс " << num_2 << " = " << summa(num_1, num_2);
    }
    else if (operation == 2)
    {
        std::cout << num_1 << " минус " << num_2 << " = " << deduction(num_1, num_2);
    }
    else if (operation == 3)
    {
        std::cout << num_1 << " умножить на " << num_2 << " = " << multiplication(num_1, num_2);
    }
    else if (operation == 4)
    {
        if (num_2 == 0)
        {
            std::cout << "На ноль делить нельзя.";
        }
        else (std::cout << num_1 << " разделить на " << num_2 << " = " << division(num_1, num_2));
    }
    else if (operation == 5)
    {
        std::cout << num_1 << " в степени " << num_2 << " = " << exponentiation(num_1, num_2);
    }
    else (std::cout << "Ошибка");
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
