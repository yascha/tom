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


Response::ResponseType Response::getResponseType(void)
{
    return responseType;
}

// Constructor: accepts the full string from the engine and builds
// the response object
Response::Response()
{
}

void Response::updateResponse(std::string input)
{
    this->input = input;
    std::size_t found;
    
    DEBUG("total input is " << input);
    
    // Check if the the response type is ACTION
    if (std::string::npos != (found = input.find(CONTROL_ACTION)))
    {
        DEBUG("Action response");
        
        this->setResponseType(Response::ResponseType::ACTION);
        responseData = &input[found + strlen(CONTROL_ACTION) + 1];
        
    }
    // Check if the the response type is UPDATE
    else if (std::string::npos != (found = input.find(CONTROL_UPDATE)))
    {
        DEBUG("Update response");

        this->setResponseType(Response::ResponseType::UPDATE);
        responseData = &input[found + strlen(CONTROL_UPDATE) + 1];
        
    }
    // Check if the the response type is SETTINGS
    else if (std::string::npos != (found = input.find(CONTROL_SETTINGS)))
    {
        DEBUG("Settings response");
        
        this->setResponseType(Response::ResponseType::SETTINGS);
        responseData = &input[found + strlen(CONTROL_SETTINGS) + 1];
    }
    else
    {
        DEBUG("Unknown response");
        
        this->setResponseType(Response::ResponseType::UNKNOWN);
    }
#ifdef DEBUG_ENABLE
    if (responseType != Response::ResponseType::UNKNOWN)
    {
        DEBUG("responseData = " << responseData);
    }
#endif // DEBUG_ENABLE
}