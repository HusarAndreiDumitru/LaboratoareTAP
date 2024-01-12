#include "Fractie.h"
#include <iostream>

using namespace std;

int main() {
    int m;
    int n;

    cout << "Introduceti m";
    cin >> m;
    cout << "Introduceti n";
    cin >> n;

    Fractie fractia(m, n);
    Fractie fractie2(1, 4);
    fractia.display();

    Fractie rezultatAdunare = fractia + fractie2;
    rezultatAdunare.display();


    ++fractia;
    fractia.display();

    return 0;
}