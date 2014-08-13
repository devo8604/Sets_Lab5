//
//  Nickel.cpp
//  Sets_Lab5
//
//  Created by Devon Smith on 8/12/14.
//  Copyright (c) 2014 Devon Smith. All rights reserved.
//

#include "Nickel.h"

using namespace std;

char mint;
int year;

Nickel::Nickel(char mint, int year)
{
    setMint(mint);
    setYear(year);
}

void Nickel::setMint(char inMint)
{
    mint = inMint;
}

void Nickel::setYear(int inYear)
{
    year = inYear;
}

const char Nickel::getMint() const
{
    return mint;
}

const int Nickel::getYear() const
{
    return year;
}