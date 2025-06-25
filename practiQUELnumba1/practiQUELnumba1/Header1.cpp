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
        cout << "���� � ������� �� ������!\n";
        return;
    }

    vector<Person> people;
    Person temp;
    while (fin >> temp.surname >> temp.city >> temp.birthDate >> temp.profession) {
        people.push_back(temp);
    }
    fin.close();

    // ����� �� �������
    string searchSurname;
    cout << "������� ������� ��� ������: ";
    cin >> searchSurname;

    cout << "���� �������� ��� ������� '" << searchSurname << "':\n";
    bool found = false;
    for (const auto& person : people) {
        if (person.surname == searchSurname) {
            cout << person.birthDate << endl;
            found = true;
        }
    }
    if (!found) cout << "�� �������.\n";

    // ����� �� ���������
    string searchProfession;
    cout << "������� ��������� ��� ������: ";
    cin >> searchProfession;

    cout << "������� �� ��������� '" << searchProfession << "':\n";
    found = false;
    for (const auto& person : people) {
        if (person.profession == searchProfession) {
            cout << person.surname << endl;
            found = true;
        }
    }
    if (!found) cout << "�� �������.\n";
}