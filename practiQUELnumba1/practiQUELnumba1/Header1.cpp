#include "Header1.h"

struct Person {
    string surname;
    string city;
    string birthDate;
    string profession;
};

void find() {
    ifstream fin("Notebook.txt");
    if (!fin.is_open()) {
        cout << "Файл с данными не найден!\n";
        return;
    }

    vector<Person> people;
    Person temp;
    while (fin >> temp.surname >> temp.city >> temp.birthDate >> temp.profession) {
        people.push_back(temp);
    }
    fin.close();

    // Поиск по фамилии
    string searchSurname;
    cout << "Введите фамилию для поиска: ";
    cin >> searchSurname;

    cout << "Даты рождения для фамилии '" << searchSurname << "':\n";
    bool found = false;
    for (const auto& person : people) {
        if (person.surname == searchSurname) {
            cout << person.birthDate << endl;
            found = true;
        }
    }
    if (!found) cout << "Не найдено.\n";

    // Поиск по профессии
    string searchProfession;
    cout << "Введите профессию для поиска: ";
    cin >> searchProfession;

    cout << "Фамилии по профессии '" << searchProfession << "':\n";
    found = false;
    for (const auto& person : people) {
        if (person.profession == searchProfession) {
            cout << person.surname << endl;
            found = true;
        }
    }
    if (!found) cout << "Не найдено.\n";
}