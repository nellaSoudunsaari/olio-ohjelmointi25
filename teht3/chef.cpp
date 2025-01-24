#include "chef.h"

chef::chef() {}

chef::chef(string name)
{
    chefName = name;
    cout << "Chef konstruktori, nimi " << chefName << endl;
}

chef::~chef()
{
    cout << "Chef destruktori" << endl;
}

string chef::getChefName() const
{
    return chefName;
}
