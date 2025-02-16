#ifndef PANKKITILI_H
#define PANKKITILI_H
#include <iostream>

using namespace std;

class pankkitili
{
public:
    pankkitili(string);
    double getBalance;
    virtual bool talleta(double);
    virtual bool nosta(double);
protected:
    string omistaja;
    double saldo = 0;
};

#endif // PANKKITILI_H
