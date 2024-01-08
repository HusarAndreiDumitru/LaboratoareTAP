#include <iostream>
#include "lab2.h"
using namespace std;

class Fractie {

private:

	int numitor = 0;
	int numarator = 1;

public:
	Fractie() {
		int a = 0;
		int b = 1;

		double rezultat = a / b;
	}

	Fractie(int numitor) {
		this->numitor = numitor;
		int b = 1;

		double rezultat = numitor / b;
	}

	Fractie(int numitor, int numarator) {
		this->numitor = numitor;
		this->numarator = numarator;

		double rezultat = numitor / numarator;
	}
	
	Fractie(int numiNou, int numarNou) {
		numitor = numiNou;
		numarator = numarNou;

		double rezFractie = numitor / numarator;
	}

	int adunare(int a, int b) {
		int rezultat = a + b;

		return rezultat;
	}

	int scadere(int a, int b) {
		int rezultat;
		if (a > b) {
			rezultat = a - b;
		}
		else {
			rezultat = b - a;
		}
		return rezultat;
	}

	int inmultire(int a, int b) {
		int rezultat;
		if (a == 0 || b == 0) {
			rezultat = 0;
			return rezultat;
		}
		else {
			rezultat = a * b;
		}
		return rezultat;
	}

	int impartire(int a, int b) {
		double rezultat;
		if (a == 0 || b == 0) {
			rezultat = 0;
			return rezultat;
		}
		else if (a == 1) {
			return b;
		}
		else if(b == 1)	{
			return a;
		}
		else {
			rezultat = a / b;
		}
		return rezultat;
	}

	static int cmmdc(int a, int b) {
		while (a != b) {
			if (a > b) {
				a = a - b;
			}
			else {
				b = b - a;
			}
		}
		return a;
	}

	int simplifica() {
		int tmp = numarator;
		numarator = numitor;
		numitor = tmp;

		double rezult = numitor / numarator;
		return rezult;
	}

	double reciproca() const {
		if (numitor == 0 || numarator == 0) {
			cout << "Fractia este indefinita!\n";
			return 0.0;
		}
		return static_cast<double>(numitor) / numarator;
	}



};
