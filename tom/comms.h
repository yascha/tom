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

#define CONTROL_SETTINGS "settings"
#define CONTROL_UPDATE "update"
#define CONTROL_ACTION "action"

/* Handle all communication with the game engine/framework */
class Comms
{
    
public:

    
    
    Response getNextMessageFromEngine();
    void sendMessage(std::string message);
    
    
};



#endif /* defined(__tom__comms__) */
