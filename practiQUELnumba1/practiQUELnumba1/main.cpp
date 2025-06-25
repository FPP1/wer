#include <iostream>
#include <Windows.h>
#include "Header.h"
#include "Header1.h"
#include "Header2.h"

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int vibor = 0;
    while (true) {
        cout << "\nМеню записной книжки:\n";
        cout << "1 - Ввод данных\n";
        cout << "2 - Поиск данных\n";
        cout << "3 - Сохранить все данные\n";
        cout << "4 - Выход\n";
        cout << "Выберите действие: ";
        cin >> vibor;

        switch (vibor) {
        case 1:
            enter();
            break;
        case 2:
            find();
            break;
        case 3:
            save();
            break;
        case 4:
            cout << "Выход из программы...\n";
            return 0;
        default:
            cout << "Неверный выбор!\n";
            break;
        }
    }
}