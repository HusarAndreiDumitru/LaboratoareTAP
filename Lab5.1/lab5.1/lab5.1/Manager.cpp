#include "Manager.h"


Manager::Manager() : Angajat(), numarSubordonati(0) {
   
}


Manager::Manager(double tarif, int ore, int subordonati) : Angajat(tarif, ore), numarSubordonati(subordonati) {
    
}

Manager::~Manager() {
    
}


Manager::Manager(const Manager& manager) : Angajat(manager), numarSubordonati(manager.numarSubordonati) {

}

Manager& Manager::operator=(const Manager& manager) {
    if (this != &manager) {
        Angajat::operator=(manager); 
        numarSubordonati = manager.numarSubordonati;
    }
    return *this;
}


    