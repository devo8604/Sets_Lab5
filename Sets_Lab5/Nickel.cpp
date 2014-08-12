//
//  Nickel.cpp
//  Sets_Lab5
//
//  Created by Devon Smith on 8/12/14.
//  Copyright (c) 2014 Devon Smith. All rights reserved.
//

#include "Nickel.h"
#include <string>

using namespace std;

string mint;
int year;

Nickel::Nickel(string mint, int year)
{
    setMint(mint);
    setYear(year);
}

void Nickel::setMint(string inMint)
{
    mint = inMint;
}

void Nickel::setYear(int inYear)
{
    year = inYear;
}

string Nickel::getMint() const
{
    return mint;
}

int Nickel::getYear() const
{
    return year;
}