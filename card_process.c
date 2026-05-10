#include <stdio.h>  //add status comitt push
#include <string.h> //文字列用
#include <stdlib.h>
#include <time.h>
#include "card_process.h"
#include "game.h"
#include "player.h"

Deck init_Deck() {
    Deck d = {0};   
    return d;
}

void trump_setup(Game *g) {//なんか初期設定もできるだけ関数が望ましんですね
    g->player_deck[PLAYER1] = init_Deck();
    g->player_deck[PLAYER2] = init_Deck();
    trump_def(g);
    trump_shuffle(g);
}

void trump_def(Game *g) {
    for (int j = 0; j < 2; j++) {
        for (int i = 0; i < 26; i++) {
            g->player_deck[j].trump[i] = i;//Game構造体のなかのDeck構造体の中のint型のtrumpに代入
        }
    }

}

void trump_shuffle(Game *g) {//プレイヤー別に分けてからしないとまったく同じ手札になってしまう（マークは別）
    int r = 0, copy;

    for (int j = 0; j < 2; j++) {

        for (int i = 25; i > 0; i--) {
            r = rand () % (i + 1);
            copy = g->player_deck[j].trump[r];
            g->player_deck[j].trump[r] = g->player_deck[j].trump[i];
            g->player_deck[j].trump[i] = copy;
        }
    }
}

void field_setup(Game *g) {
    first_from_deck_hand(g);
}

void first_from_deck_hand(Game *g) {
    int a = 0,r = 0;

    for (int j = 0; j < 2; j++) {//とりあえず同じ流れにするのがきれい

        for (int i = 0; i < 4; i++) {
        g->field.hand[r++] = g->player_deck[j].trump[i];
        }
    }
    for (int i = 0; i < 5; i += 3) {
        from_deck_hand(g,a++,i);
    }
}


void from_deck_hand(Game *g, int field_num, int hand_num) {//引数調整(構造体に状態を覚えさす)

    g->field.table[field_num] =  g->field.hand[hand_num];

    if (hand_num < 4) {
        g->player[PLAYER1].trump_count += 1;
    } else {
        g->player[PLAYER2].trump_count += 1;
    }
}

void trump_judgment(Game *g) {//判別の時
    for (int j = 0;j < 2; j++) {
        
    }
}

int trump_num_judge(int n) {
    int num;
    num = n % 13;
    return num;
}

int trump_mark_judge(int n) {
    int mark;
    mark = n / 13;
    return mark;
}