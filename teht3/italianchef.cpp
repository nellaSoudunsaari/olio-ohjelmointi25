#include "italianchef.h"

ItalianChef::ItalianChef(string name)
{
    cout << "Italian chef konstruktori" << endl;
    cout << "Italialaisen kokin nimi " << name << endl;
}

ItalianChef::~ItalianChef()
{
    cout << "Italian chef destruktori" << endl;
}

bool ItalianChef::askSecret(string password, int flour, int water)
{
    password = "pizza";
    string usrpassword;
    cin >> usrpassword;
    if((password.compare(usrpassword)== 0)){
        cout << "Oikea salsana!" << endl;
        cout << "Paljonko jauhoja on ?" << endl;
        cin >> flour;
        cout << "Jauhoja on " << flour << " kpl" << endl;
        cout << "Paljonko vetta on ?" << endl;
        cin >> water;
        cout << "Vetta on " << water << " kpl" << endl;
    } else {
        cout << "Vaara salasana!" << endl;
        return 0;
    }
    return makePizza(flour, water);
}

int ItalianChef::makePizza(int flour, int water){

    bool pizzaa;
    int annosmr = 0;
    if(flour >= 5 && water >= 5){
        cout << "Pizzaa tehty!" << endl;
        pizzaa = true;
    } else {
        cout << "Ei tarpeeksi aineksia pizzaan" << endl;
        pizzaa = false;
    }

    if(pizzaa == true){
        annosmr = flour/5;
    } else if (pizzaa == false){
        annosmr = 0;
    }
    cout << "Annosten maara " << annosmr << endl;
    return annosmr;
}
