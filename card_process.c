#include <stdio.h>  //add status comitt push
#include <string.h> //文字列用
#include <stdlib.h>
#include <time.h>
#include "card_process.h"

Deck init_Deck() {
    Deck d = {0};
    return d;
}


void trump_setup(Game *g) {
    g->player_deck[PLAYER1] = init_Deck();
    g->player_deck[PLAYER2] = init_Deck();

    for (int j = 0; j < 2; j++) {
        for (int i = 0; i < 26; i++) {
            g->player_deck[j].trump[i] = i;//Game構造体のなかのDeck構造体の中のint型のtrumpに代入
        }
    }
    
    for (int j = 0; j < 2; j++) {
        for (int i = 25; i > 0; i--) {
            trump_shuffle(g,j,i);
        }
    }
}

void trump_shuffle(Game *g, int player_num, int n) {//プレイヤー別に分けてからしないとまったく同じ手札になってしまう（マークは別）
    int i = 0, copy;
    i = rand () % (n + 1);
    copy = g->player_deck[player_num].trump[i];
    g->player_deck[player_num].trump[i] = g->player_deck[player_num].trump[n];
    g->player_deck[player_num].trump[n] = copy;
}

void from_deck_hand(Game *g, Player *p, int player_num) {//引数調整(構造体に状態を覚えさす)
    g->field[].trump[] = g->player_deck[player_num].trump[];
}

void trump_judgment(Game *g) {//判別の時
    for (int j = 0;j < 2; j++) {
        
    }
}

int trump_num(int n) {
    int num;
    num = n % 13;
    return num;
}

int trump_mark(int n) {
    int mark;
    mark = n / 13;
    return mark;
}