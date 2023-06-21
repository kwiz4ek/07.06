#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int sum = 0;
    int count = 0;

    for (int i = 1; i <= 1000; ++i) {
        sum += i;
        count++;
    }

    int average = sum / count;

    std::cout << "Середнє арифметичне всіх чисел від 1 до 1000: " << average << std::endl;

    return 0;
}
