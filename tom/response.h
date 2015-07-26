//
//  response.h
//  tom
//
//  Created by yfriesen on 2015-07-25.
//  Copyright (c) 2015 tom. All rights reserved.
//

#ifndef __tom__response__
#define __tom__response__

#include <stdio.h>
#include <string>

#define CONTROL_SETTINGS "settings"
#define CONTROL_UPDATE "update"
#define CONTROL_ACTION "action"

class Response
{
    
public:
    enum ResponseType { SETTINGS, UPDATE, ACTION, UNKNOWN };
    std::string input;
    
    void setResponseType(ResponseType responseType);
    
    // default constructor
    Response(void) : input("") {}

    // actual constructor
    Response(std::string input);

    
private:
    ResponseType responseType;
    void parseActions();
    void parseUpdates();
    void parseSettings();
    
};

#endif /* defined(__tom__response__) */
