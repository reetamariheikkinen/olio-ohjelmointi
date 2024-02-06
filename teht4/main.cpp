#include <iostream>
#include "asunto.h"
#include "kerros.h"
#include "katutaso.h"
#include "kerrostalo.h"

using namespace std;

int main()
{
//    Asunto ekaAsunto;
//    ekaAsunto.maarita(2,100);
//    cout<<"asunnon kulutus, kun hinta=1 on "<<ekaAsunto.laskeKulutus(1)<<endl;

    Katutaso ekaKatutaso;
    ekaKatutaso.maaritaAsunnot();
    cout<<"Katutason ja perityn kerroksen kulutus, kun hinta=1 on "<<ekaKatutaso.laskeKulutus(1)<<endl;

//    Kerrostalo ekaKerrostalo;
//    cout<<ekaKerrostalo.laskeKulutus(1)<<endl;


    return 0;
}
