#pragma once
#ifndef lista.h
#define lista_h

#include "Nod.h"

class Lista
{
private:
	Nod* head;

public:
	Lista();
	void insertNode(int value);
	void deleteNode();
	void displayList();
};

#endif // !lista.h

