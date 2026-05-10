#include "player.h"
#include <stdio.h>
#include <string.h> //
#include <unistd.h>//即時入力＆待機時間用
#include "card_process.h"
#include "game.h"

void player_def(Game *g){//クールタイム宣言を戻しておく
    char player[10];
    while(1){
        printf("プレイヤー1は赤or黒を入力してください");
        scanf("%s",player);
            if(strcmp(player,"赤")==0){
                g->player[PLAYER1].color=RED;
                g->player[PLAYER2].color=BLACK;
                break;
            }else if(strcmp(player,"黒")==0){
                g->player[PLAYER1].color=BLACK;
                g->player[PLAYER2].color=RED;
                break;
            }else{
                printf("正しく入力してください");
                continue;
            }
    }
    
    for (int i = 0; i < 2; i++) {
        g->player[i].trump_sum_count = 4;
    }
    printf("プレイヤー1は上側で左のカードから1~4\n");
    printf("プレイヤー2は下側で左のカードから7~0でカードを出します\n");
    sleep(1);
    printf("カードを並べます\n");
    //printf("ペナルティ時間は%lfsです\n",PENALTY_TIME);
}
