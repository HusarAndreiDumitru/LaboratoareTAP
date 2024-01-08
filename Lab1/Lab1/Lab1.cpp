#include "Lab1.h"

#include <iostream>


Array_Stack::Array_Stack(int max) {
	this->max = max;
	this->top = 0;
	this->vector = new int[max];
}

Array_Stack::~Array_Stack() {
	this->top = 0;
	this->max = 0;
	delete[] this->vector;
}

void Array_Stack::push(int val) {
	if (isfull()) {
		throw Stack_Overflow();
	}
	else {
		vector[++top] = val;
	}
}

int Array_Stack::pop() {
	if (isempty()) {
		throw Stack_Underflow();
	}
	return vector[top--];
}

int Array_Stack::peek() {
	if (isempty()) {
		throw Stack_Underflow();
	}
    return(top);
}

bool Array_Stack::isempty() {
	return (top == -1);
}

bool Array_Stack::isfull() {
	return(top == max - 1);
}

void Array_Stack::print() {
	if (isempty()) {
        std::cout << "Stiva este goala!" << endl;
		return;
	}
    cout << "Elementele stivei: ";
	for (int i = 0; i <= top; ++i) {
        std::cout << vector[i] << " ";
    }
    std::cout << std::endl;
}

int main() {

	int a;
    std::cout << "Introduceti numarul maxim de elemente in stiva: ";
    std::cin >> a;
	Array_Stack stiva(a);

	int n;
	for (int i = 1; i < sizeof(Array_Stack); i++) {
        std::cout << "Introdu al " << i << "element: " << std::endl;
        std::cin >> n;
		stiva.push(n);
		if (stiva.isfull()) {
			stiva.print();
		}
	}

}
