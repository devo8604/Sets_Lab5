//*************************************************************************
// TITLE: 			   	STL Set Lab
// FILENAME:            NickelCollection.h
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
//                        CLASS DESCRIPTION
//  This this the class where the nickel collection sets are created
//
//*************************************************************************
//
//*************************************************************************
//              PROCESS THIS FILE ONLY ONCE PER PROJECT
//
#ifndef __Sets_Lab5__NickelCollection__
#define __Sets_Lab5__NickelCollection__
//
//=========================================================================
//                     CONSTANT DEFINITIONS
//
//*************************************************************************
//                  STANDARD AND USER DEFINED INCLUDES
#include "Nickel.h"
#include <iostream>
#include <set>
//*************************************************************************
//
class NickelCollection
{
public:
    void collection();
    
private:
    char mint();
    int year();
    void neededNickels(std::set<Nickel> myCollection,
                       std::multiset<Nickel> availableNickels);
};
//***************************************************************************
//                    END OF CONDITIONAL BLOCK
#endif /* defined(__Sets_Lab5__NickelCollection__) */
//***************************************************************************
//                      END OF HEADER FILE
//***************************************************************************