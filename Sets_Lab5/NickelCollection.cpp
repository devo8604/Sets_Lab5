//
//  NickelCollection.cpp
//  Sets_Lab5
//
//  Created by Devon Smith on 8/12/14.
//  Copyright (c) 2014 Devon Smith. All rights reserved.
//

#include "NickelCollection.h"
#include "Nickel.h"
#include <set>
#include <time.h>
#include <string>

using namespace std;

bool operator < (const Nickel& LHS, const Nickel& RHS) 
{
    return LHS.Nickel::getYear() < RHS.Nickel::getYear();
}





void NickelCollection::collection()
{
    srand((unsigned) time(NULL));
    
    set<Nickel> myCollection;
    multiset<Nickel> availableNickels;
    
    //Generates my nickel collection
    while (myCollection.size() != 45)
    {
        myCollection.insert(Nickel(mint(),year()));
    }
    
    //Generates all of the nickels available
    for (int i = 1950; i < 2001; i++)
    {
        availableNickels.insert(Nickel("P",i));
        availableNickels.insert(Nickel("D",i));
        
    }

    neededNickels(myCollection,availableNickels);
}





void NickelCollection::neededNickels(set<Nickel> myCollection,
                                     multiset<Nickel> availableNickels)
{
    multiset<Nickel> neededCoins;
    
    set_difference(availableNickels.begin(),
                   availableNickels.end(),
                   myCollection.begin(),
                   myCollection.end(),
                   inserter(neededCoins,
                            neededCoins.begin()));

    cout << "This is the list of coins you have: " << "\n-----------------------------------" << endl;
    for (multiset<Nickel>::iterator itr = myCollection.begin(); itr != myCollection.end(); itr++)
    {
        cout << "Mint Code: " << itr->getMint() << " Year Made: " << itr->getYear() << endl;
    }
    
    cout << "\nThis is the list of coins you need: " << "\n-----------------------------------" << endl;
    for (multiset<Nickel>::iterator itr = neededCoins.begin(); itr != neededCoins.end(); itr++)
    {
        cout << "Mint Code: " << itr->getMint() << " Year Made: " << itr->getYear() << endl;
    }
    
}





string NickelCollection::mint()
{
    int year = 0;
    string mint;
    year = rand() % 10;

    if (year < 5)
    {
        mint = "D";
    } else {
        mint = "P";
    }
    return mint;
}





int NickelCollection::year()
{
    int year = 0;
    year = rand() % (1950 - 2001) + 1950;
    return year;
}