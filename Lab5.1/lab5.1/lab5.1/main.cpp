#include <iostream>
#include "Angajat.h"
#include "Manager.h"

int main() {
    double tarifOrar;
    int nrOre;
    int nrSubordonati;
    

    std::cout << "Introduceti tariful orar: ";
    std::cin >> tarifOrar;

    std::cout << "Introduceti numarul de ore lucrate: ";
    std::cin >> nrOre;

    // Crearea unui obiect Angajat utilizând constructorul cu parametri
    Angajat angajat(tarifOrar, nrOre);

    // Afișarea tarifului orar și a salariului angajatului
    std::cout << angajat;

    std::cout << "Introduceti numarul de subordonati: ";
    std::cin >> nrSubordonati;

    Manager manager(tarifOrar, nrOre, nrSubordonati);

    std::cout << "Salar manager: " << manager.getSalar() << "\n";

    return 0;
}
