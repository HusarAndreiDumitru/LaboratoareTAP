#include <iostream>
#include "Punct.h"

using namespace std;

class Punct {
private:
	int x;
	int y;
public:
	Punct(int x, int y) {
		this->x = x;
		this->y = y;
	}

	Punct(const Punct& c) {
		Punct c = c;
	}

};