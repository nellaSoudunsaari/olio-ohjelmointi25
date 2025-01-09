#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int satunnainenluku = 20;
    int arvaus = 0;
    while(true){
        cout << "Arvaa luku: " << endl;
        cin >> arvaus;
        cout << "Arvauksesi: " << arvaus << endl;
        if(arvaus == satunnainenluku){
            cout << "Arvasit oikein!"
                 << endl;
            break;
        } else if (arvaus > satunnainenluku){
            cout << "Luku on liian suuri"
                 << endl;
        } else if ( arvaus < satunnainenluku){
            cout << "Luku on liian pieni"
                 << endl;
        } else {
            cout << "Virhe?"
                 << endl;
        }
    }

    return 0;
}
