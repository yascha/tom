//
//  comms.cpp
//  tom
//
//  Created by yfriesen on 2015-07-25.
//  Copyright (c) 2015 tom. All rights reserved.
//

#include "comms.h"
#include <iostream>


Response getNextMessageFromEngine()
{
    std::string input;

    // Get the latest line from the engine
    std::cin >> input;
    
    std::size_t found;
    
    // Check if the the response type is ACTION
    found = input.find(Response::ResponseType::ACTION);
    
    if (found == std::string::npos)
    {
        // Check if the the response type is UPDATE
        found = input.find(Response::ResponseType::UPDATE);
    }
    
    if (found == std::string::npos)
    {
        // Check if the the response type is SETTINGS
        found = input.find(Response::ResponseType::SETTINGS);
    }

    
    return (Response (Response::ResponseType::ACTION));
    
}