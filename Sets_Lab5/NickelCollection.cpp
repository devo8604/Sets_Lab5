//*************************************************************************
// TITLE: 			   	STL Set Lab
// FILENAME:            NickelCollection.cpp
// PREPARED FOR:        CS230
// PROGRAMMER(S):       Devon J. Smith
// DEVELOPMENT DATE:    08/13/14
// COMPILER USED:       Apple LLVM Version 5.1
// TARGET PLATFORM:     Mac OS X i386 & x86_64
//=========================================================================
//                           PROJECT FILES
//    <LIST ALL PROGRAM AND HEADER FILES IN THE PROJECT HERE>
//		lab5.cpp (main)
//		Nickel.h
//		Nickel.cpp
//		NickelCollection.h
//		NickelCollection.cpp
//=========================================================================
//   		REVISION HISTORY
//   List revisions made to the Program
//
//   DATE     PROGRAMMER            DESCRIPTION OF CHANGES MADE
//	 08/13/14 Devon J. Smith        Original
//
//=========================================================================
//                          INCLUDE FILES
#include "NickelCollection.h"
#include "Nickel.h"
#include <set>
#include <time.h>
#include <string>
//*************************************************************************
//             Definition of member functions for class Entry
//*************************************************************************
using namespace std;

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
        availableNickels.insert(Nickel('D',i));
        availableNickels.insert(Nickel('P',i));
        
    }
    neededNickels(myCollection,availableNickels);
}





void NickelCollection::neededNickels(set<Nickel> myCollection,
                                     multiset<Nickel> availableNickels)
{
    multiset<Nickel> neededCoins;
    for (multiset<Nickel>::iterator oItr = availableNickels.begin(); oItr != availableNickels.end(); oItr++)
    {
        int i = 0;
        for (set<Nickel>::iterator sItr = myCollection.begin(); sItr != myCollection.end(); sItr++)
        {
            i++;
            if (oItr->getMint() == sItr->getMint() && oItr->getYear() == sItr->getYear())
            {
                break;
            }
            else if (i == myCollection.size())
            {
                neededCoins.insert(Nickel(oItr->getMint(), oItr->getYear()));
            }
        }
    }
    
    cout << "This is the list of coins you have: " << "\n-----------------------------------" << endl;
    for (set<Nickel>::iterator itr = myCollection.begin(); itr != myCollection.end(); itr++)
    {
        cout << "Mint Code: " << itr->getMint() << " Year Made: " << itr->getYear() << endl;
    }
    cout << "\nThis is the list of coins you need: " << "\n-----------------------------------" << endl;
    for (multiset<Nickel>::iterator itr = neededCoins.begin(); itr != neededCoins.end(); itr++)
    {
        cout << "Mint Code: " << itr->getMint() << " Year Made: " << itr->getYear() << endl;
    }
}





char NickelCollection::mint()
{
    int year = 0;
    char mint;
    year = rand() % 10;

    if (year < 5)
    {
        mint = 'D';
    } else {
        mint = 'P';
    }
    return mint;
}





int NickelCollection::year()
{
    int year = 0;
    year = rand() % (1950 - 2001) + 1950;
    return year;
}