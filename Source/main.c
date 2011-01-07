//
//  main.c
//  Dominion
//
//  Created by Timothy Shoaf on 1/6/11.
//  Copyright (c) 2011 Lone Black Samurai. All rights reserved.
//
#define new 

#include <stdio.h>
#include "player.h"

int main (int argc, const char * argv[]) {

    // insert code here...
    Player* jim = new player("jim");
    printf("Hello my name is, %s\n", jim->name);
    jim->free(jim);
    return 0;
}

