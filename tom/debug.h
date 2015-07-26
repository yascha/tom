//
//  debug.h
//  tom
//
//  Created by yfriesen on 2015-07-26.
//  Copyright (c) 2015 tom. All rights reserved.
//

#ifndef DEBUG_H
#define DEBUG_H

#include <iostream>
#include <stdio.h>


#define DEBUG_ENABLE 1

#define DEBUG(x) do { std::cerr << x << "\n"; } while (0)


#endif // DEBUG_H