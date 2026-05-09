#ifndef _CARD_PROCESS_H
#define _CARD_PROCESS_H

typedef struct trump {
    int trump[26]
} trump;

trump init();
void trump_shuffle(int);

trump trump_setup();

#endif 