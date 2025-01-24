#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    chef olio("Hannu");
    ItalianChef toinenolio("Armando");
    int salaattimr = olio.makeSalad(12);
    cout << "Salaattien maara " << salaattimr << endl;
    int soppamr = olio.makeSoup(15);
    cout << "Soppien maara " << soppamr << endl;
    toinenolio.askSecret("pizza", 0, 0);
    return 0;
}
