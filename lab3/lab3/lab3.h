#pragma once
#ifndef lab3.h
#define lab3_h

class Dreapta
{
private:
	double m;
	double n;
public:
	Dreapta(double m, double n);
	Dreapta(Dreapta& other);
	~Dreapta();
};

#endif // !lab3.h


