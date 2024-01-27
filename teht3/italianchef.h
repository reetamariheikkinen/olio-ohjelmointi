#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"


class ItalianChef : public Chef
{
public:

    ItalianChef(string chefname, int water, int flour);
    string getName();
    void makePasta(int AmountOfWater, int AmountOfFLour);

    //Tehtävän osa 3
    /*
    ItalianChef(string);
    void makePasta();
    */

private:
    int vesi;
    int jauhot;
};

#endif // ITALIANCHEF_H

