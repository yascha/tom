//
//  game.cpp
//  tom
//
//  Created by yfriesen on 2015-07-25.
//  Copyright (c) 2015 tom. All rights reserved.
//

#include "debug.h"
#include "game.h"
#include <sstream>


/* This function knows how to translate the last response from the server
 into modifications in the game state. It may be better to have this logic
 in some sort of Game Abstraction Layer instead of in the game class. */
void Game::updateGameState(std::string input)
{
    std::istringstream inputAsStream(input);
    std::string commandWord;
    std::string nextWord;
    
    inputAsStream >> commandWord;
    
    DEBUG("total input is " << input);
    
    // Check if the the response type is ACTION
    if (commandWord == ACTION)
    {
        DEBUG("Action message");
        
        inputAsStream >> nextWord;
        
        if (nextWord == UPDATE)
        {
            // Time to make a move boyeeeeees!
            return;
        }
#ifdef DEBUG_ENABLE
        else
        {
            DEBUG("Invalid action message received: " << input);
        }
#endif // DEBUG_ENABLE
        
    }
    // Check if the the response type is UPDATE
    else if (commandWord == UPDATE)
    {
        DEBUG("Update message");
        
        inputAsStream >> nextWord;
        
        if (nextWord == UPDATE_GAME)
        {
            inputAsStream >> nextWord;
            
            
            if (nextWord == UPDATE_GAME_ROUND)
            {
                inputAsStream >> nextWord;
                this->game_round = std::atoi(nextWord.c_str());
                
            }
            else if (nextWord == UPDATE_GAME_THIS_PIECE_TYPE)
            {
                inputAsStream >> nextWord;
                this->game_currentPieceType = (char)nextWord[0];
            }
            else if (nextWord == UPDATE_GAME_NEXT_PIECE_TYPE)
            {
                inputAsStream >> nextWord;
                this->game_nextPieceType = (char)nextWord[0];
            }
            else if (nextWord == UPDATE_GAME_THIS_PIECE_POSITION)
            {
                inputAsStream >> nextWord;
                
                // position of the top left corner of "this piece" comes as x,y

            }

        }
#ifdef DEBUG_ENABLE
        else
        {
            DEBUG("invalid update message received: " << input);
        }
#endif // DEBUG_ENABLE
        
    }
    // Check if the the response type is SETTINGS
    else if (commandWord == SETTINGS)
    {
        DEBUG("Settings message");
        
        inputAsStream >> nextWord;
        if (nextWord == SETTINGS_TIMEBANK)
        {
            inputAsStream >> nextWord;
            this->settings_timebank = atoi(nextWord.c_str());
        }
        else if (nextWord == SETTINGS_TIME_PER_MOVE)
        {
            inputAsStream >> nextWord;
            this->settings_timePerMove = atoi(nextWord.c_str());
        }
        else if (nextWord == SETTINGS_PLAYER_NAMES)
        {
            inputAsStream >> nextWord;
            this->settings_playerOneName = nextWord;
            inputAsStream >> nextWord;
            this->settings_playerTwoName = nextWord;
        }
        else if (nextWord == SETTINGS_YOUR_BOT)
        {
            inputAsStream >> nextWord;
            this->settings_myName = nextWord;
        }
        else if (nextWord == SETTINGS_FIELD_WIDTH)
        {
            inputAsStream >> nextWord;
            this->settings_width = atoi(nextWord.c_str());
        }
        else if (nextWord == SETTINGS_FIELD_HEIGHT)
        {
            inputAsStream >> nextWord;
            this->settings_height = atoi(nextWord.c_str());
        }
#ifdef DEBUG_ENABLE
        else
        {
            DEBUG("Invalid settings message received: " << input);
        }
#endif // DEBUG_ENABLE
        
    }
    else
    {
        DEBUG("Unknown message :(");
        DEBUG("Unknown message was: " << input);
    }
}
