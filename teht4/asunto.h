#ifndef ASUNTO_H
#define ASUNTO_H
#include <iostream>

using namespace std;


class Asunto
{
public:
    Asunto();
    double laskeKulutus(double hinta);
    void maarita(int asukasM, int nelio);

    int asukasMaara;
    int neliot;

};

#endif // ASUNTO_H
