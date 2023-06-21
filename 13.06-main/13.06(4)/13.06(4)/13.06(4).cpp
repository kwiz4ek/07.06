#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int a;
    std::cout << "Введіть значення a (1 <= a <= 20): ";
    std::cin >> a;

    if (a < 1 || a > 20) {
        std::cout << "Некоректне значення a!" << std::endl;
        return 0;
    }

    int product = 1;
    for (int i = a; i <= 20; ++i) {
        product *= i;
    }

    std::cout << "Добуток чисел від " << a << " до 20: " << product << std::endl;

    return 0;
}
