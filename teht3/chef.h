#ifndef CHEF_H
#define CHEF_H
#include <iostream>

using namespace std;


class Chef
{
public:

    Chef(string Name);
    ~Chef();
    void makeSalad();
    void makeSoup();

protected:
    string name;
};

#endif // CHEF_H
