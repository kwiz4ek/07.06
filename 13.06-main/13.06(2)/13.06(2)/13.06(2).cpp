#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int x, y;
    std::cout << "Введіть число x: ";
    std::cin >> x;
    std::cout << "Введіть число y: ";
    std::cin >> y;

    int result = 1;
    for (int i = 0; i < y; ++i) {
        result *= x;
    }

    std::cout << x << " у степені " << y << " дорівнює " << result << std::endl;

    return 0;
}
