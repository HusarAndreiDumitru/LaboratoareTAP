#include <iostream>
#include "lab3.h"
#include "Punct.h"
#include "lista.h"

using namespace std;

int main() {

	Dreapta(5, 3);
	Lista lista;

	int n{4};
	cin >> n;
	

	lista.insertNode(10);
	std::cout << std::endl;
	lista.insertNode(30);
	std::cout << std::endl;
	lista.insertNode(50);
	std::cout << std::endl;
	lista.displayList();
	std::cout << std::endl;
	lista.deleteNode();

	std::cout << "Lista dupa stergerea primului nod: ";
	lista.displayList();

	return 0;

}