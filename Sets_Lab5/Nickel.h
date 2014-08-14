//*************************************************************************
// TITLE: 			   	STL Set Lab
// FILENAME:            Nickel.h
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
//  This this the class where the nickels are created
//
//*************************************************************************
//
//*************************************************************************
//              PROCESS THIS FILE ONLY ONCE PER PROJECT
//
#ifndef __Sets_Lab5__Nickel__
#define __Sets_Lab5__Nickel__
//
//=========================================================================
//                     CONSTANT DEFINITIONS
//
//*************************************************************************
//                  STANDARD AND USER DEFINED INCLUDES
#include <iostream>
//*************************************************************************
//                     USER DEFINED DATA TYPES
class Nickel
{
public:
    //constructor
    Nickel();
    Nickel(char mint, int year);
    
    //Getters
    const char getMint() const;
    const int getYear() const;

    bool operator< (const Nickel LHS) const
    {
        return getYear() < LHS.getYear() ? true : false;
    }
    
private:
    //Variables
    char mint;
    int year;
    
    //Setters
    void setMint(char inMint);
    void setYear(int inYear);
};
//***************************************************************************
//                    END OF CONDITIONAL BLOCK
#endif /* defined(__Sets_Lab5__Nickel__) */
//***************************************************************************
//                      END OF HEADER FILE
//***************************************************************************