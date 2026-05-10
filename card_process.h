#ifndef _CARD_PROCESS_H
#define _CARD_PROCESS_H

#include "game.h"
#include "player.h"

void card_setup(Game *g);
void trump_setup(Game *g);
Deck init_Deck();
void trump_def(Game *g);
void trump_shuffle(Game *g);
void field_setup(Game *g);
void first_from_deck_hand(Game *g);
void from_deck_hand(Game *g, int, int);

void trump_judgment(Game *g);

int from_num_player(int);
int trump_num_judge(int);
int trump_mark_judge(int);


#endif 