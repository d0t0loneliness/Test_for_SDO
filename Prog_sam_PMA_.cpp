#include <iostream>
#include <conio.h>

int main() {
    setlocale(LC_ALL, "Russian");
    char claw;

    std::cout << "������� ����� �������...\n";

    claw = _getch(); // ��������� ������� ������� ��� ������ �� �� �����
    std::cout << "�� ������ �������: ";

    // ��������� ����������� �������
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