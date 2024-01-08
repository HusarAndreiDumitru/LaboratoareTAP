#pragma once

class Dreapta {
private:
	int x;
	int m;
	int n;
	int y = m * x + n;
public:
	Dreapta(int m, int n);
	Dreapta(const Dreapta& c);
};
