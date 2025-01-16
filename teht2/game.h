#ifndef GAME_H
#define GAME_H

class Game
{
public:
    Game();
    int Play();
    void printGameResult(int arvauslkm);
    int arvauslkm;
    int maxnum;
    int arvaus;
    int satunnainenluku;
};

#endif // GAME_H
