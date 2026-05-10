#include <stdio.h>  //add status comitt push
#include <string.h> //文字列用
#include <stdlib.h>
#include <unistd.h>//即時入力＆待機時間用
#include <termios.h>//即時入力用
#include <time.h>//0で判定とペナルティ実装
#include "card_process.h"
#include "game.h"
#include "player.h"

//　構造体メモ　initで定義して代入　card=init_trump()    trump card  card = 0  return card;
//トランジスタ　h_bridge pwm 逆起電力　PCI
//camelCase　初手小文字



void setup(Game *g);

int main() {
    Game g;
    Player p;
    srand((unsigned)time(NULL));
    setup(&g);
}

void setup(Game *g) {
    trump_setup(g);
}