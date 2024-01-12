#include "lab3.h"



Dreapta::Dreapta(double m, double n) {
	this->m = 1;
	this->n = 0;
}

Dreapta::Dreapta(Dreapta &d) {
	this->n = d.m;
	this->m = d.n;
}

Dreapta::~Dreapta() {

}
