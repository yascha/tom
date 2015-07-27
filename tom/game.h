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
#include "response.h"

#include <iostream>

/* Entire state of the game */
class Game
{
public:
    Board board;
    
    void updateGameState(Response::Response lastServerMessage);
    
    Game(void) : board(0,0) { };

    void setTimebank(unsigned int timebank);
    void setTimePerMove(unsigned int timePerMove);
    void setPlayersNames(std::string* names);
    void setMyName(std::string myName);
    void setWidth(unsigned int width);
    void setHeight(unsigned int height);
    
private:
    unsigned int settings_timebank;
    unsigned int settings_timePerMove;
    std::string settings_playerNames[2];
    std::string settings_myName;
    unsigned int settings_width;
    unsigned int settings_height;
    
    
};



#endif /* defined(__tom__game__) */
