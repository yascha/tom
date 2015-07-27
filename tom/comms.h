//
//  comms.h
//  tom
//
//  Created by yfriesen on 2015-07-25.
//  Copyright (c) 2015 tom. All rights reserved.
//

#ifndef __tom__comms__
#define __tom__comms__

#include <stdio.h>
#include <string>
#include "response.h"

/* Handle all communication with the game engine/framework */
class Comms
{
    Response latestResponse;
    
public:
    
    Response getLatestResponse();
    std::string getNextMessageFromEngine();
    void sendMessage(std::string message);
    
    Comms(std::string input)
    {
        this->latestResponse = Response();
    }
};



#endif /* defined(__tom__comms__) */
