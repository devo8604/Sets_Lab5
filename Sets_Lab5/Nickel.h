//
//  Nickel.h
//  Sets_Lab5
//
//  Created by Devon Smith on 8/12/14.
//  Copyright (c) 2014 Devon Smith. All rights reserved.
//

#ifndef __Sets_Lab5__Nickel__
#define __Sets_Lab5__Nickel__

#include <iostream>

class Nickel
{
public:
    //constructor
    Nickel(char mint, int year);
    
    //Getters
    char getMint() const;
    int getYear() const;
    
    bool operator< (const Nickel LHS) const
    {
        return getYear() < LHS.getYear() ? true : false;
    }
    
private:
    //Variables
    std::string mint;
    int year;
    
    //Setters
    void setMint(char inMint);
    void setYear(int inYear);
};

#endif /* defined(__Sets_Lab5__Nickel__) */