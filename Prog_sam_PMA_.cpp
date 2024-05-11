#include <iostream>
#include <conio.h>

int main() {
    setlocale(LC_ALL, "Russian");
    char claw;

    std::cout << "Нажмите любую клавишу...\n";

    claw = _getch(); // Считываем нажатую клавишу без вывода ее на экран
    std::cout << "Вы нажали клавишу: ";

    // Проверяем специальные клавиши
    if (claw == 13) {
        std::cout << "Enter";
    }
    else if (claw == 27) {
        std::cout << "Esc";
    }
    else {
        std::cout << claw;
    }

    return 0;
}