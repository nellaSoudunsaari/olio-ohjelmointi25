#include "game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

Game::Game(int maxNumber){
    maxnum = maxNumber;
    cout << "Konstruktori" << endl;
    cout << "Pelin maxNumber on " << maxNumber << endl;
}

Game::~Game()
{
    cout << "Muisti pyyhitty tai jtn" << endl;
}

void Game::play(){
    arvaus = 0;
    arvauslkm = 0;

    srand(time(NULL));
    satunnainenluku = rand() % maxnum;

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
    printGameResult();
}

void Game::printGameResult()
{
    cout << "Arvausten lukumaara: " << arvauslkm << endl;
}

