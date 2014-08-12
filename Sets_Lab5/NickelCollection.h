//
//  NickelCollection.h
//  Sets_Lab5
//
//  Created by Devon Smith on 8/12/14.
//  Copyright (c) 2014 Devon Smith. All rights reserved.
//

#ifndef __Sets_Lab5__NickelCollection__
#define __Sets_Lab5__NickelCollection__

#include "Nickel.h"
#include <iostream>
#include <set>

#endif /* defined(__Sets_Lab5__NickelCollection__) */

class NickelCollection
{
public:
    void collection();
    
private:
    std::string mint();
    int year();
    void neededNickels(std::set<Nickel> myCollection,
                       std::multiset<Nickel> availableNickels);
};