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

int chef::makeSalad(int aines)
{
    aines = 0;
    cout << "Paljonko salaattiaineksia on? ";
    cin >> aines;
    cout << "Salaattiaineksia on " << aines << endl;
    if (aines >= 5){
        cout << "Salaattia tehty!" << endl;
    } else {
        cout << "Ei tarpeeksi aineksia salaattiin" << endl;
    }
    int annosmr = aines / 5;
    return annosmr;
}

int chef::makeSoup(int aines)
{
    aines = 0;
    cout << "Paljonko soppa-aineksia on? ";
    cin >> aines;
    cout << "Soppa-aineksia on " << aines << endl;
    if (aines >= 3){
        cout << "Soppaa tehty!" << endl;
    } else {
        cout << "Ei tarpeeksi aineksia soppaan" << endl;
    }
    int annosmr = aines / 3;
    return annosmr;
}

string chef::getChefName() const
{
    return chefName;
}

