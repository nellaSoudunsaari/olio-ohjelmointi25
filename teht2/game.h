#ifndef GAME_H
#define GAME_H

class Game
{
public:
    Game(int);
    ~Game();
    void play();

private:
    int arvauslkm;
    int maxnum;
    int arvaus;
    int satunnainenluku;
    void printGameResult();
};

#endif // GAME_H
