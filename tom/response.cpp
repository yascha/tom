//
//  response.cpp
//  tom
//
//  Created by yfriesen on 2015-07-25.
//  Copyright (c) 2015 tom. All rights reserved.
//

#include "debug.h"
#include "response.h"


void Response::setResponseType(ResponseType responseType)
{
    this->responseType = responseType;
}


// Constructor: accepts the full string from the engine and builds
// the response object
Response::Response(std::string input)
{
    this->input = input;
    
    // Check if the the response type is ACTION
    if (std::string::npos != input.find(CONTROL_ACTION))
    {
        this->setResponseType(Response::ResponseType::ACTION);
        DEBUG("Action response");
        
    }
    // Check if the the response type is UPDATE
    else if (std::string::npos != input.find(CONTROL_UPDATE))
    {
        
        this->setResponseType(Response::ResponseType::UPDATE);
        DEBUG("Update response");
    }
    // Check if the the response type is SETTINGS
    else if (std::string::npos != input.find(CONTROL_SETTINGS))
    {
        this->setResponseType(Response::ResponseType::SETTINGS);
        DEBUG("Settings response");
    }
    else
    {
        this->setResponseType(Response::ResponseType::UNKNOWN);
        DEBUG("Unknown response");
    }
}