#ifndef _GAME_H
#define _GAME_H



typedef struct Deck {
    int trump[26];//最初にだれが持つかで決めるのがよいらしい（今回は赤黒陣営でわけるので0~26）
} Deck;

typedef struct Field {
    int hand[8];
    int table[2];
} Field;   


typedef struct Player {
    int trump_sum_count;
    int color;

} Player;

typedef struct Game {
    Deck player_deck[2];//card_process
    Field field;
    Player player[2];


} Game;

#include "card_process.h"
#include "player.h"

#endif 