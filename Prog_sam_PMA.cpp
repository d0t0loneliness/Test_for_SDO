#include <iostream>
#include <conio.h>

int main() {
    setlocale(LC_ALL, "Russian");
    char claw;

    std::cout << "Íàæìèòå ëþáóþ êëàâèøó...\n";

    claw = _getch(); // Ñ÷èòûâàåì íàæàòóþ êëàâèøó áåç âûâîäà åå íà ýêðàí
    std::cout << "Âû íàæàëè êëàâèøó: ";

    // Ïðîâåðÿåì ñïåöèàëüíûå êëàâèøè
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
