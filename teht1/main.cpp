#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game(int maxnum);

int main()
{
    int arvauslkm = 20;
    int maxnum = 40;
    arvauslkm = game(maxnum);
    cout << "Arvausten lukumaara: " << arvauslkm << endl;
    return 0;
}

int game(int maxnum){

    int arvaus = 0;
    int arvauslkm = 0;

    srand(time(NULL));
    int satunnainenluku = rand() % maxnum;

    while(true){
        cout << "Arvaa luku: " << endl;
        cin >> arvaus;
        cout << "Arvauksesi: " << arvaus << endl;
        if(arvaus == satunnainenluku){
            cout << "Arvasit oikein!"
                 << endl;
            arvauslkm++;
            break;
        } else if (arvaus > satunnainenluku){
            cout << "Luku on liian suuri"
                 << endl;
            arvauslkm++;
        } else if ( arvaus < satunnainenluku){
            cout << "Luku on liian pieni"
                 << endl;
            arvauslkm++;
        } else {
            cout << "Virhe?"
                 << endl;
        }
    }

    return arvauslkm;
}
