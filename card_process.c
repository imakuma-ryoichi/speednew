#include <stdio.h>  //add status comitt push
#include <string.h> //文字列用
#include <stdlib.h>
#include <time.h>
#include "card_process.h"

trump init() {
    trump t = {0};
    return t;
}

trump setup() {
    trump t = init();
    for (int i = 0; i < 26; i++) {
        c.trump[i] = i;
    }  
    return t;
}

void trump_shuffle(trump *c, int n) {//プレイヤー別に分けてからしないとまったく同じ手札になってしまう（マークは別）
    int i = 0, copy;
    i = rand () % (n + 1);
    
}