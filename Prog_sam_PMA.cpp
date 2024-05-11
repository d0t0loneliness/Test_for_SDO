#include <iostream>
#include <conio.h>

int main() {
    setlocale(LC_ALL, "Russian");
    char ch;

    std::cout << "Нажмите любую клавишу...\n";

    ch = _getch(); // Считываем нажатую клавишу без вывода ее на экран
    std::cout << "Вы нажали клавишу: ";

    // Проверяем специальные клавиши
    if (ch == 13) {
        std::cout << "Enter";
    }
    else if (ch == 27) {
        std::cout << "Esc";
    }
    else {
        std::cout << ch;
    }

    return 0;
}