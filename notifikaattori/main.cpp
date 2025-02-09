#include <iostream>
#include "seuraaja.h"
#include "notifikaattori.h"

using namespace std;

int main()
{
    Seuraaja *A = new Seuraaja("Hannu");
    Seuraaja *B = new Seuraaja("Gertrude");
    Seuraaja *C = new Seuraaja("Paula");
    Seuraaja *D = new Seuraaja("Tyrni");

    Notifikaattori *N = new Notifikaattori();

    cout << endl;

    N->lisaa(A);
    N->lisaa(B);
    N->lisaa(C);
    N->lisaa(D);
    N->tulosta();

    cout << endl;

    N->julkaise("Terve!");
    N->poista(C);
    N->julkaise("Hei hei!");

    cout << endl;


    /*Seuraaja *alku = A;
    while(alku != nullptr){
        cout << "Listassa nyt = " << alku->getNimi() << endl;
        alku->paivitys("Terve!");
        alku = alku->next;
        if(alku == nullptr){
            cout << "Lista loppui" << endl;
        }
    }*/

    delete A;
    delete B;
    delete C;
    delete D;
    delete N;
    return 0;
}
