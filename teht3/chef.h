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

class italianChef
{
public:
    italianChef(string);
    ~italianChef();
    bool askSecret(string, int, int);

private:
    string password = "pizza";
    int flour;
    int water;
    int makePizza();
};

#endif // CHEF_H
