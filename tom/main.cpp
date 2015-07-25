//
//  main.cpp
//  tom
//
//  Created by yfriesen on 2015-07-25.
//  Copyright (c) 2015 tom. All rights reserved.
//

#include <iostream>
#include <string>
#include "comms.h"
#include "game.h"


int main(int argc, const char * argv[]) {
    Comms comms;
    Game game (0, 0);
    
    std::string input;
    
    
    std::cin >> input;
    
    std::cout << "Hello " + input + "!\n";
    
    
    // handle latest input
    
    // if we need to make a move, decide on move
    
    // communicate our move to the framework
    
    
    
    
    return 0;
}

// classes that I need:

// game -- stores the entire game state (points, combo, board, etc)

// board -- subclass of game, stores the game board

// comms -- handles communications from the game engine

// some other stuff related to the specifics of how the actual heuristic turns out (zobrist/hash map)


