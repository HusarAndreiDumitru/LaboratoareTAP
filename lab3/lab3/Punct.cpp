#include <iostream>
#include "Punct.h"

using namespace std;


Punct::Punct(int x, int y) {
		this->x = x;
		this->y = y;
}

Punct::Punct(const Punct& c) {
	this->x = c.x;
	this->y = c.y;
}

Punct::Punct() {

}
