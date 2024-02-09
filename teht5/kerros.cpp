#include "kerros.h"

Kerros::Kerros()
{
    cout<<"Kerros luotu"<<endl;
    as1 = new Asunto;

    as2 = new Asunto;

    as3 = new Asunto;

    as4 = new Asunto;
}

Kerros::~Kerros()
{
    delete as1;
    delete as2;
    delete as3;
    delete as4;
    as1 = nullptr;
    as2 = nullptr;
    as3 = nullptr;
    as4 = nullptr;
}

void Kerros::maaritaAsunnot()
{
    cout<<"Maaritetaan 4 kpl kerroksen asuntoja"<<endl;
    as1->maarita(2,100);
    as2->maarita(2,100);
    as3->maarita(2,100);
    as4->maarita(2,100);

}

double Kerros::laskeKulutus(double hinta)
{
    double yht;
    yht=as1->laskeKulutus(hinta)+as2->laskeKulutus(hinta)+as3->laskeKulutus(hinta)+as4->laskeKulutus(hinta);
    return yht;

}
