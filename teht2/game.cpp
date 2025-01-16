#include "game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

Game::Game() {
    cout << "Arvaa luku: " << endl;
}

int Game::Play(){
    while(true){
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

void Game::printGameResult(int arvauslkm){
    cout << "Arvausten lukumaara: " << arvauslkm << endl;
}
