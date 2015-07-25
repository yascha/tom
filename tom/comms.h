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




/* Handle all communication with the game engine/framework */
class Comms
{
    
    
    
    
    std::string getNextMessage();
    void sendMessage(std::string message);
    
};



#endif /* defined(__tom__comms__) */
