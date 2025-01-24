#ifndef CHEF_H
#define CHEF_H
#include <iostream>
using namespace std;

class chef
{
public:
    chef();
    chef(string name);
    ~chef();
    int makeSalad(int aines);
    int makeSoup(int aines);
    string getChefName() const;

protected:
    string chefName;
};

#endif // CHEF_H
