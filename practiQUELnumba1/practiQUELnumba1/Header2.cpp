#include "Header2.h"


void save() {
    std::ifstream fin("Notebook.txt");
    if (!fin.is_open()) {
        std::cerr << "���� Notebook.txt �� ������!\n";
        return;
    }

    std::ofstream fout("Notebook_Results.txt");
    std::string line;
    while (std::getline(fin, line)) { 
        fout << line << "\n";
    }

    fin.close();
    fout.close();
    std::cout << "��� ������ ��������� � Notebook_Results.txt\n";
}