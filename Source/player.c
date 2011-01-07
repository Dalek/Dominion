//
//  player.c
//  Dominion
//
//  Created by Timothy Shoaf on 1/6/11.
//  Copyright (c) 2011 Lone Black Samurai. All rights reserved.
//

#include "player.h"
#include <stdlib.h>
#include <string.h>



Player* player(char* name)
    {
        Player* retval = (Player*)malloc(sizeof(Player));
        retval->score = 0;
        retval->name = newString(name);
        retval->free = &freePlayer;
        return retval;
    }


char * newString(char * source)
    {
        char* dest = (char *)malloc((strlen(source) + 1) * sizeof(char));
        strcpy(dest, source);
        return dest;
    }

void freePlayer(Player* p)
    {
        free(p->name);
        free(p);
    }