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

class Response
{
    
public:
     enum ResponseType { SETTINGS, UPDATE, ACTION, UNKNOWN };
    
    ResponseType responseType;
    
    Response(Response::ResponseType responseType) : responseType(responseType)
    {
        ;
    }
};

#endif /* defined(__tom__response__) */
