#include "italianchef.h"


ItalianChef::ItalianChef(string Name, int water, int flour) : Chef(Name)
{
    name=Name;
    vesi=water;
    jauhot=flour;
    cout<<"Chef "<<getName()<<" konstruktori"<<endl;
    makePasta(vesi,jauhot);
}

string ItalianChef::getName()
{
    return name;
}

void ItalianChef::makePasta(int AmountOfWater, int AmountOfFlour)
{
    cout<<"Chef "<<getName()<<" makes pasta with special recipe"<<endl;
    cout<<"Chef "<<getName()<<" users jauhot = "<<AmountOfFlour<<endl;
    cout<<"Chef "<<getName()<<" users vesi = "<<AmountOfWater<<endl;
}


//Tehtävän osa 3
/*
ItalianChef::ItalianChef(string Name) : Chef(Name)
{
    name=Name;
    cout<<"Chef "<<getName()<<" konstruktori"<<endl;
}

void ItalianChef::makePasta()
{
    cout<<"Chef "<<getName()<<" makes pasta"<<endl;
}
*/

