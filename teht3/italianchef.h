#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"

class ItalianChef : public chef
{
public:
    ItalianChef(string name);
    ~ItalianChef();
    bool askSecret(string, int, int);

private:
    string password = "pizza";
    int flour;
    int water;
    int makePizza(int flour, int water);
};

#endif // ITALIANCHEF_H
