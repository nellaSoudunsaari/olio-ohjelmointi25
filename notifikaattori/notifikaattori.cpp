#include "notifikaattori.h"
#include "seuraaja.h"

Notifikaattori::Notifikaattori() {}

void Notifikaattori::lisaa(Seuraaja *uusiSeur)
{
    uusiSeur->next = seuraajat;
    seuraajat = uusiSeur;
    cout << "Lisattiin seuraaja: " << uusiSeur->getNimi() << endl;
}

void Notifikaattori::poista(Seuraaja *poistaSeur)
{
    Seuraaja *alku = seuraajat;
    while(alku->next != nullptr){
        if(alku->next == poistaSeur){
            alku->next = poistaSeur->next;
        } else {
            alku = alku->next;
        }
    }
    cout << "Poistettiin seuraaja: " << poistaSeur->getNimi() << endl;

}

void Notifikaattori::tulosta()
{
    cout << "Seuraajat: " << endl;
    Seuraaja *alku = seuraajat;
    while(alku != nullptr){
        cout << alku->getNimi()<< endl;
        alku = alku->next;
    }
}

void Notifikaattori::julkaise(string v)
{
    Seuraaja *alku = seuraajat;
    while(alku != nullptr){
        alku->paivitys(v);
        alku = alku->next;
    }
}
