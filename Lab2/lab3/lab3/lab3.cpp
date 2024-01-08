#include <iostream>


using namespace std;

class Dreapta {

private:
	int x;
	int m;
	int n;
	int y = m * x + n;

public:
	Dreapta(int m = 1, int n = 0) {
		this->m = m;
		this->n = n;
	}

	Dreapta(const Dreapta& c) {
		Dreapta c = c;
	}

};
