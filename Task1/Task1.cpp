﻿#include <iostream>
#include <Windows.h>

#define MODE 1
int add(int a, int b);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

#if defined MODE
#if MODE == 0
    std::cout << "Работаю в режиме тренировки" << std::endl;
#elif MODE == 1
    std::cout << "Работаю в боевом режиме" << std::endl;
    int a{}, b{};
    std::cout << "Введите число 1: ";
    std::cin >> a;
    std::cout << "Введите число 2: ";
    std::cin >> b;

    std::cout << "Результат сложения: " << add(a, b) << std::endl;
#else
    std::cout << "Неизвестный режим. Завершение работы" << std::endl;
#endif
#else
    std::cout << "Определите идентификатор MODE" << std::endl;
#endif 
}

int add(int a, int b)
{
    return a + b;
}