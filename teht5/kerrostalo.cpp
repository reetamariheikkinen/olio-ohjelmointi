#include "kerrostalo.h"

Kerrostalo::Kerrostalo()
{
    cout<<"Kerrostalo luotu"<<endl;

    eka = new Katutaso;
    toka = new Kerros;
    kolmas = new Kerros;

    cout<<"Maaritellaan koko kerrostalon kaikki asunnot"<<endl;
    eka->maaritaAsunnot();
    toka->maaritaAsunnot();
    kolmas->maaritaAsunnot();
}

Kerrostalo::~Kerrostalo()
{
    delete eka;
    delete toka;
    delete kolmas;
    eka = nullptr;
    toka = nullptr;
    kolmas = nullptr;
}

double Kerrostalo::laskeKulutus(double hinta)
{
    double kerrostalonkulutus;

    kerrostalonkulutus=eka->laskeKulutus(hinta)+toka->laskeKulutus(hinta)+kolmas->laskeKulutus(hinta);

    cout<<"Kerrostalon kulutus, =";
    return kerrostalonkulutus;

}
