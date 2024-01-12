#pragma once
#ifndef Fractie.h
#define Fractie_h

using namespace std;

class Fractie
{
private:
	int numarator;
	int numitor;
public:
	Fractie();
	Fractie(int numarator);
	Fractie(int numarator, int numitor);
	Fractie(const Fractie& other);

	void display();
	Fractie operator+(const Fractie& f);
	Fractie operator-(const Fractie& f);
	Fractie operator*(const Fractie& f);
	Fractie operator/(const Fractie& f);
	bool operator<(const Fractie& f);
	bool operator>(const Fractie& f);
	bool operator<=(const Fractie& f);
	bool operator>=(const Fractie& f);
	bool operator==(const Fractie& f);
	bool operator!=(const Fractie& f);

	Fractie& operator++();
	Fractie& operator--();

	Fractie operator++(int);
	Fractie operator--(int);


	void simplifica();
	void reciproc();
	bool egal(const Fractie&);

	friend ostream& operator<<(ostream& os, const Fractie& f);

};
ostream& operator<<(ostream& os, const Fractie& f);

#endif // !Fractie.h

