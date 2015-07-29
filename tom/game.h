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

// settings control messages
#define SETTINGS "settings"
#define SETTINGS_TIMEBANK "timebank"
#define SETTINGS_TIME_PER_MOVE "time_per_move"
#define SETTINGS_PLAYER_NAMES "player_names"
#define SETTINGS_YOUR_BOT "your_bot"
#define SETTINGS_FIELD_WIDTH "field_width"
#define SETTINGS_FIELD_HEIGHT "field_height"


// action control messages
#define ACTION "action"
#define ACTION_UPDATE "update"

// update control messages
#define UPDATE "update"
#define UPDATE_GAME "game"
#define UPDATE_GAME_ROUND "round"
#define UPDATE_GAME_THIS_PIECE_TYPE "this_piece_type"
#define UPDATE_GAME_NEXT_PIECE_TYPE "next_piece_type"
#define UPDATE_GAME_THIS_PIECE_POSITION "this_piece_position"

/* Entire state of the game */
class Game
{
public:
    Board board;
    
    void updateGameState(std::string input);
    
    Game(void) : board(0,0) { };

//    void setTimebank(unsigned int timebank);
//    void setTimePerMove(unsigned int timePerMove);
//    void setPlayersNames(std::string* names);
//    void setMyName(std::string myName);
//    void setWidth(unsigned int width);
//    void setHeight(unsigned int height);
//    void setRound(unsigned int round);
//    void setCurrentPiece(char piece);
//    void setNextPiece(char piece);
    
//private:
    unsigned int settings_timebank;
    unsigned int settings_timePerMove;
    std::string settings_playerOneName;
    std::string settings_playerTwoName;
    std::string settings_myName;
    unsigned int settings_width;
    unsigned int settings_height;
    
    unsigned int game_round;
    char game_currentPieceType;
    char game_nextPieceType;
    unsigned int currentPieceX;
    unsigned int currentPieceY;
    
    
};



#endif /* defined(__tom__game__) */
