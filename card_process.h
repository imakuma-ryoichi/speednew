#ifndef _CARD_PROCESS_H
#define _CARD_PROCESS_H



typedef struct Game Game; //先に定義だけ見せないといけない
typedef struct Player Player;
typedef struct Deck Deck;
typedef struct Field Field;

typedef struct Deck {
    int trump[26];//最初にだれが持つかで決めるのがよいらしい（今回は赤黒陣営でわけるので0~26）
} Deck;

typedef struct Field {
    int hand[8];
    int table[2];
} Field;         

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