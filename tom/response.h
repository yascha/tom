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
    
    void setResponseType(ResponseType responseType);
    ResponseType getResponseType(void);
    
    
    Response();
    void updateResponse(std::string input);

    
private:
    std::string input;
    ResponseType responseType;
    char const * responseData;


    
};

#endif /* defined(__tom__response__) */
