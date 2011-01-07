//
//  player.h
//  Dominion
//
//  Created by Timothy Shoaf on 1/6/11.
//  Copyright (c) 2011 Lone Black Samurai. All rights reserved.
//
#include "stack.h"

typedef struct
    {
        int score;
        
        char *name;
        Stack *hand, *deck, *discard; //this to be stack type after working out mysql
        
        void (*free)(void*);
    } Player;

Player* player(char* name);

char* newString(char*);

void freePlayer(Player*);