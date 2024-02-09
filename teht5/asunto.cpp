#include "asunto.h"

Asunto::Asunto()
{
    cout<<"Asunto luotu"<<endl;

}


double Asunto::laskeKulutus(double hinta)
{
    return neliot*asukasMaara*hinta;
}

void Asunto::maarita(int asukasM, int nelio)
{
    asukasMaara=asukasM;
    neliot=nelio;

    cout<<"Asunto maaritetty asukkaita= "<<asukasMaara<<" nelioita= "<<neliot<<endl;
}
