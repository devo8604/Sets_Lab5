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
    Nickel(std::string mint, int year);
    
    //Getters
    std::string getMint() const;
    int getYear() const;
private:
    //Variables
    std::string mint;
    int year;
    
    //Setters
    void setMint(std::string inMint);
    void setYear(int inYear);
};

#endif /* defined(__Sets_Lab5__Nickel__) */