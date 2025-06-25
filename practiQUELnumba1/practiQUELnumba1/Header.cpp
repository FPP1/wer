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
    cout << "������� ���������� �������: ";
    cin >> n;

    Person* people = new Person[n];
    for (int i = 0; i < n; i++) {
        cout << "\n������ #" << i + 1 << endl;
        cout << " �������: ";
        cin >> people[i].surname;
        cout << " �����: ";
        cin >> people[i].city;
        cout << " ���� �������� (��.��.����): ";
        cin >> people[i].birthDate;
        cout << " ���������: ";
        cin >> people[i].profession;

        fout << people[i].surname << " " << people[i].city << " "
            << people[i].birthDate << " " << people[i].profession << endl;
    }

    fout.close();
    delete[] people;
    cout << "������ ��������� � Notebook.txt\n";
}