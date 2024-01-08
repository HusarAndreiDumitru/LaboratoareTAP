#include "Angajat.h"

// Constructorul implicit
Angajat::Angajat() {
    // Implementare constructor implicit
}

// Constructorul cu parametri
Angajat::Angajat(double tarif, int ore) : tarifOrar(tarif), nrOre(ore) {
    // Implementare constructor cu parametri
}

// Copy constructor
Angajat::Angajat(const Angajat& angajat) {
    tarifOrar = angajat.tarifOrar;
    nrOre = angajat.nrOre;
}

// Destructor
Angajat::~Angajat() {
    std::cout << "Destructor activat" << std::endl;
}

// Operator =
Angajat& Angajat::operator=(const Angajat& angajat) {
    if (this != &angajat) {
        tarifOrar = angajat.tarifOrar;
        nrOre = angajat.nrOre;
    }
    return *this;
}

// Metoda getSalar
double Angajat::getSalar() const {
    return tarifOrar * nrOre;
}

// Metoda getTarifOrar
double Angajat::getTarifOrar() const {
    return tarifOrar;
}

// Supraincarcarea operatorului >>
std::istream& operator>>(std::istream& input, Angajat& angajat) {
    input >> angajat.nrOre;
    return input;
}

// Supraincarcarea operatorului <<
std::ostream& operator<<(std::ostream& output, const Angajat& angajat) {
    output << "Tariful orar: " << angajat.tarifOrar << std::endl;
    output << "Salarul angajatului: " << angajat.getSalar() << std::endl;
    return output;
}
