#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//osa 2 tehtävästä

void guess_the_number(){

    srand(time(0));

    int satunnainenluku=rand()%20+1;
    //cout<<satunnainenluku<<endl;

    int veikkaus;

    cout << "Arvaa koneen valitsema luku, luvuista 1-20:" << endl;
    cin>>veikkaus;

    while(veikkaus!=satunnainenluku){

        if(veikkaus>satunnainenluku){
            cout<<"Arvauksesi on suurempi kuin luku."<<endl;
            cout << "Arvaa uudestaan luvuista 1-20:" << endl;
            cin>>veikkaus;
        }

        else if(veikkaus<satunnainenluku){
            cout<<"Arvauksesi on pienempi kuin luku."<<endl;
            cout << "Arvaa uudestaan luvuista 1-20:" << endl;
            cin>>veikkaus;
        }

    }

    if(veikkaus==satunnainenluku){
        cout<<"Onnea! Arvauksesi on oikein! :)"<<endl;
    }

}


//osa 3 tehtävästä

int game(int maxnum);



int main()
{
    //osa 3 tehtävästä
    int maxnum;
    cout<<"Anna kokonaisluku joka toimii korkeimpana etsittavana lukuna: ";
    cin>>maxnum;
    cout<<"Antamasi luku on "<<maxnum<<". Kone arpoo numeron satunnaisesti numeroiden 1-"<<maxnum<<" valilta. Arvaa minka luvun kone on arponut."<<endl;
    int arvaukset=game(maxnum);
    cout<<endl<<"Onnea! Arvauksesi oli oikein! :) Arvasit "<<arvaukset<<" kertaa ennen oikeaa arvausta."<<endl;
    return 0;


    //guess_the_number();  //osa 2 tehtävästä

    //osa 1 tehtävästä
    /*
    srand(time(0));

    int satunnainenluku=rand()%20+1;
   //cout<<satunnainenluku<<endl;

    int veikkaus;

    cout << "Arvaa koneen valitsema luku, luvuista 1-20:" << endl;
    cin>>veikkaus;

    while(veikkaus!=satunnainenluku){

    if(veikkaus>satunnainenluku){
    cout<<"Arvauksesi on suurempi kuin luku."<<endl;
    cout << "Arvaa uudestaan luvuista 1-20:" << endl;
    cin>>veikkaus;
    }

    else if(veikkaus<satunnainenluku){
    cout<<"Arvauksesi on pienempi kuin luku."<<endl;
    cout << "Arvaa uudestaan luvuista 1-20:" << endl;
    cin>>veikkaus;
    }

    }

    if(veikkaus==satunnainenluku){
    cout<<"Onnea! Arvauksesi on oikein! :)"<<endl;
    }

    return 0;
*/

}

//osa 3 tehtävästä

int game(int maxnum){

    srand(time(0));

    int satunnainenluku=rand()%maxnum+1;
    int veikkaus;
    int arvaustenmaara=0;
    //cout<<satunnainenluku<<endl;

    cout << "Arvaa koneen valitsema luku, luvuista 1-"<<maxnum<< endl;
    cin>>veikkaus;
    arvaustenmaara++;

    while(veikkaus!=satunnainenluku){

        if(veikkaus<satunnainenluku){
            cout<<"Arvauksesi on pienempi kuin luku."<<endl;
            cout <<endl<< "Arvaa uudestaan luvuista 1-" << maxnum<<endl;
            cin>>veikkaus;
            arvaustenmaara++;
        }

        else if(veikkaus>satunnainenluku){
            cout<<"Arvauksesi on suurempi kuin luku."<<endl;
            cout <<endl<< "Arvaa uudestaan luvuista 1-" <<maxnum<< endl;
            cin>>veikkaus;
            arvaustenmaara++;
        }

    }

    return arvaustenmaara;

}
