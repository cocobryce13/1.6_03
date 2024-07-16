#include <iostream>
#include <windows.h>

void fibonacci(long number) 
{
    long a = 0;
    long b = 1;
    long result{};

    std::cout << "Числа Фибоначчи: " << a << " " << b << " ";

    for (long i = 2; i < number; i++) 
    {
        result = a + b;
        a = b;
        b = result;
        std::cout << result << " ";
    }

    std::cout << std::endl;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    long number;
    std::cout << "Введите число: ";
    std::cin >> number;

    fibonacci(number);

    return 0;
}
