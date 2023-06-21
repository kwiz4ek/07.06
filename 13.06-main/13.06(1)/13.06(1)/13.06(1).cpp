#include <iostream>
#include <windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int a;
    std::cout << "Введіть значення a: ";
    std::cin >> a;

    int sum = 0;
    for (int i = a; i <= 500; ++i) {
        sum += i;
    }

    std::cout << "Сума чисел від " << a << " до 500: " << sum << std::endl;

    return 0;
}
