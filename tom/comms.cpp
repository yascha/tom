//
//  comms.cpp
//  tom
//
//  Created by yfriesen on 2015-07-25.
//  Copyright (c) 2015 tom. All rights reserved.
//

#include "comms.h"
#include <iostream>


std::string Comms::getNextMessageFromEngine()
{
    std::string input;

    // Get the latest line from the engine
    std::cin >> input;
    
    return input;
}

void Comms::sendMessage(std::string message)
{
    std::cout << message;
}

Response Comms::getLatestResponse(void)
{
    return latestResponse;
}