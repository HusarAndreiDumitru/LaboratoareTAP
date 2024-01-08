#pragma once

#ifndef FRACTIE_H  // Asigură că fișierul header este inclus o singură dată
#define FRACTIE_H

class Fractie {
private:

    int numitor;
    int numarator;

public:

    Fractie();
    Fractie(int numitor);
    Fractie(int numitor, int numarator);
    Fractie(int numiNou, int numarNou);

    int adunare(int a, int b);
    int scadere(int a, int b);
    int inmultire(int a, int b);
    int impartire(int a, int b);

    
    static int cmmdc(int a, int b);
};

#endif  // FRACTIE_H
