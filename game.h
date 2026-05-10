#ifndef _GAME_H
#define _GAME_H



typedef struct Game {
    Deck player_deck[2];//card_process
    Field field;
    Player player[2];


} Game;

#endif 