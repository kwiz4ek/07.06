#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int k;
    std::cout << "Введіть номер варіанта: ";
    std::cin >> k;

    std::cout << "Таблиця множення на " << k << ":" << std::endl;

    for (int i = 2; i <= 10; ++i) {
        int result = k * i;
        std::cout << k << " x " << i << " = " << result << std::endl;
    }

    return 0;
}
