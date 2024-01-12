#pragma once
#ifndef Nod.h
#define Nod_h

class Lista;

class Nod
{
private:
	int data;
	Nod* next;
	friend class Lista;
};

#endif // !Nod.h

