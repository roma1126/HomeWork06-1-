#include <iostream>
#include "math.h"


int main()
{
    setlocale(LC_ALL, "Russian");
    int x, y, z;
    std::cout << "Введите первое число: ";
    std::cin >> x;
    std::cout << "Введите второе число: ";
    std::cin >> y;
    std::cout << "Выберите операцию (1 - сложение, 2 - вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    std::cin >> z;

    if (z == 1)
    {
        std::cout << x << " + " << y << " = " << sum(x, y);
    }

    if (z == 2)
    {
        std::cout << x << " - " << y << " = " << sub(x, y);
    }

    if (z == 3)
    {
        std::cout << x << " * " << y << " = " << mult(x, y);
    }

    if (z == 4)
    {
        std::cout << x << " / " << y << " = " << division(x, y);
    }

    if (z == 5)
    {
        std::cout << x << " в степени " << y << " = " << exp(x, y);
    }
    
}


