#ifndef _CARD_PROCESS_H
#define _CARD_PROCESS_H

typedef struct Deck {
    int Trump[26];//最初にだれが持つかで決めるのがよいらしい（今回は赤黒陣営なので0~26）
} Deck;

typedef struct Field {
    int trump[2];
    
} Field;


void trump_setup(Game *g);
Deck init_Deck();
void trump_shuffle(Game *g, int, int);

void from_deck_hand(Game *g, Player *p, int);

void trump_judgment(Game *g);

int trump_num(int);

int trump_mark(int);


#endif 