//
//  game.h
//  tom
//
//  Created by yfriesen on 2015-07-25.
//  Copyright (c) 2015 tom. All rights reserved.
//

#ifndef __tom__game__
#define __tom__game__

#include <stdio.h>
#include "board.h"

#include <iostream>

/* Handle all communication with the game engine/framework */
class Game
{
public:
    Board board;
    
    Game(unsigned int width, unsigned int height) : board(width,height) { };

    
};



#endif /* defined(__tom__game__) */
