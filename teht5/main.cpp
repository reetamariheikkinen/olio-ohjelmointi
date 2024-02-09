#include <iostream>
#include "asunto.h"
#include "kerros.h"
#include "katutaso.h"
#include "kerrostalo.h"

using namespace std;

int main()
{
//        Asunto *ekaAsunto = new Asunto;
//        ekaAsunto->maarita(2,100);
//        cout<<"asunnon kulutus, kun hinta=1 on "<<ekaAsunto->laskeKulutus(1)<<endl;
//        delete ekaAsunto;
//        ekaAsunto=nullptr;

//        Katutaso *ekaKatutaso = new Katutaso;
//        ekaKatutaso->maaritaAsunnot();
//        cout<<"Katutason ja perityn kerroksen kulutus, kun hinta=1 on "<<ekaKatutaso->laskeKulutus(1)<<endl;
//        delete ekaKatutaso;
//        ekaKatutaso = nullptr;

    Kerrostalo *ekaKerrostalo = new Kerrostalo;
    cout<<ekaKerrostalo->laskeKulutus(1)<<endl;
    delete ekaKerrostalo;
    ekaKerrostalo = nullptr;


    return 0;
}


/*3. Ainoat muutokset luokkakaaviossa tässä tapauksessa olisi, että asunto, kerros ja katutason jäsenet
 * merkittäisiin pointtereina ja luokkakaavioon pitäisi lisätä Luokiin: Kerros, Katutaso ja Kerrostalo destruktorit
 * joissa poistin pointterit.*/
