#ifndef KERROSTALO_H
#define KERROSTALO_H
#include "katutaso.h"
#include "kerros.h"


class Kerrostalo
{
public:
    Kerrostalo();
    double laskeKulutus(double hinta);

private:
    Katutaso eka;
    Kerros toka;
    Kerros kolmas;
};

#endif // KERROSTALO_H
