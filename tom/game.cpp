//
//  game.cpp
//  tom
//
//  Created by yfriesen on 2015-07-25.
//  Copyright (c) 2015 tom. All rights reserved.
//

#include "debug.h"
#include "game.h"

/* This function knows how to translate the last response from the server
 into modifications in the game state. It may be better to have this logic
 in some sort of Game Abstraction Layer instead of in the game class. */
void Game::updateGameState(Response::Response lastServerMessage)
{
#ifdef DEBUG_ENABLE
    if (lastServerMessage.getResponseType() != Response::ResponseType::UPDATE)
    {
        return;
    }
#endif // DEBUG_ENABLE
}


void Game::setTimebank(unsigned int timebank)
{
    this->settings_timebank = timebank;
}
    
void Game::setTimePerMove(unsigned int timePerMove)
{
    this->settings_timePerMove = timePerMove;
}


void Game::setPlayersNames(std::string* names)
{
    // TBD
    this->settings_playerNames[0] = "";
    this->settings_playerNames[1] = "";
}

void Game::setMyName(std::string myName)
{
    this->settings_myName = myName;
}



void Game::setWidth(unsigned int width)
{
    this->settings_width = width;
}


void Game::setHeight(unsigned int height)
{
    this->settings_height = height;
}

