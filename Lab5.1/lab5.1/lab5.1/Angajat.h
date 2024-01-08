#ifndef ANGAJAT_H
#define ANGAJAT_H

#include <iostream>

class Angajat {
private:
    double tarifOrar = 5.5;
    int nrOre;

public:

    Angajat();
    Angajat(double tarif, int ore);
    Angajat(const Angajat& angajat); 
    ~Angajat();

    Angajat& operator=(const Angajat& angajat);

    double getSalar() const;
    double getTarifOrar() const;
    friend std::istream& operator>>(std::istream& input, Angajat& angajat);
    friend std::ostream& operator<<(std::ostream& output, const Angajat& angajat);
};

#endif // ANGAJAT_H
