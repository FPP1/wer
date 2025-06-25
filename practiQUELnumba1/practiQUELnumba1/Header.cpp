#include "Header.h"

struct Person {
    string surname;
    string city;
    string birthDate;
    string profession;
};

void enter() {
    ofstream fout("Notebook.txt", ios::app);
    int n;
    cout << "Введите количество записей: ";
    cin >> n;

    Person* people = new Person[n];
    for (int i = 0; i < n; i++) {
        cout << "\nЗапись #" << i + 1 << endl;
        cout << " Фамилия: ";
        cin >> people[i].surname;
        cout << " Город: ";
        cin >> people[i].city;
        cout << " Дата рождения (ДД.ММ.ГГГГ): ";
        cin >> people[i].birthDate;
        cout << " Профессия: ";
        cin >> people[i].profession;

        fout << people[i].surname << " " << people[i].city << " "
            << people[i].birthDate << " " << people[i].profession << endl;
    }

    fout.close();
    delete[] people;
    cout << "Данные сохранены в Notebook.txt\n";
}