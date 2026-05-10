#ifndef _PLAYER_H
#define _PLAYER_H

#include "game.h"
#include "card_process.h"

enum Player_Def {//pascalcase  
    PLAYER1,//0
    PLAYER2 //1
}; 

enum Plyer_Color {
    BLACK,
    RED
};

void player_def(Game *g);

#endif