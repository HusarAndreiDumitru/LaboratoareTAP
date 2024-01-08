#pragma once
#ifndef MANAGER_H
#define MANAGER_H

#include "Angajat.h"

class Manager : public Angajat {
private:
    int numarSubordonati; 

public:
   
    Manager();
    Manager(double tarif, int ore, int subordonati);

    double getSalar() const;
    void setNumarSubordonati(int subordonati);
    int getNumarSubordonati() const;
};

#endif // MANAGER_H
