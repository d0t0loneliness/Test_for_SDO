#include <iostream>
#include <conio.h>

int main() {
    setlocale(LC_ALL, "Russian");
    char ch;

    std::cout << "������� ����� �������...\n";

    ch = _getch(); // ��������� ������� ������� ��� ������ �� �� �����
    std::cout << "�� ������ �������: ";

    // ��������� ����������� �������
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