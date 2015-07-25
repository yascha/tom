//
//  board.h
//  tom
//
//  Created by yfriesen on 2015-07-25.
//  Copyright (c) 2015 tom. All rights reserved.
//

#ifndef __tom__board__
#define __tom__board__

#include <stdio.h>
#include <iostream>
#include <stdlib.h>

/* Represents the boardstate */
class Board
{
public:
    unsigned int width;
    unsigned int height;
    
    char* board;
    
    Board(unsigned int width, unsigned int height) : width(width), height(height)
    {
        board = (char *)std::malloc(sizeof(char) * (width*height));
    };
    
    
    ~Board()
    {
        std::free(board);
    };
    
};



#endif /* defined(__tom__board__) */
