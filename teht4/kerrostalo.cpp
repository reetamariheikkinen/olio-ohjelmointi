#include "kerrostalo.h"

Kerrostalo::Kerrostalo()
{
    cout<<"Kerrostalo luotu"<<endl;
}

double Kerrostalo::laskeKulutus(double hinta)
{
    double kerrostalonkulutus;

    cout<<"Maaritellaan koko kerrostalon kaikki asunnot"<<endl;
    eka.maaritaAsunnot();
    toka.maaritaAsunnot();
    kolmas.maaritaAsunnot();

    kerrostalonkulutus=eka.laskeKulutus(hinta)+toka.laskeKulutus(hinta)+kolmas.laskeKulutus(hinta);

    cout<<"Kerrostalon kulutus, =";
    return kerrostalonkulutus;

}
