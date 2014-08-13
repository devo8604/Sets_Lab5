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

class NickelCollection
{
public:
    void collection();
    
private:
    std::string mint();
    int year();
    void neededNickels(const std::set<Nickel>& myCollection,
                       const std::multiset<Nickel>& availableNickels);
};

#endif /* defined(__Sets_Lab5__NickelCollection__) */