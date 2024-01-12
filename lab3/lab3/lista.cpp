#include "lista.h"
#include <iostream>

Lista::Lista() : head(nullptr) {}


void  Lista::insertNode(int value) {
	Nod* newNode = new Nod;
	newNode->data = value;
	newNode->next = head;
	head = newNode;
}

void Lista::deleteNode() {
	if (head == nullptr) {
		std::cout << "Empty list";
		return;
	}
	Nod* temp = head;
	head = head->next;
	delete temp;
}

void Lista::displayList() {
	Nod* current = head;
	while (current != nullptr) {
		std::cout << current->data << "";
		current = current->next;
	}
	std::cout << std::endl;
}
