//*************************************************************************
// TITLE: 			   	STL Set Lab
// FILENAME:            Nickel.cpp
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
#include "Nickel.h"

using namespace std;
//*************************************************************************
//             Definition of member functions for class Entry
//*************************************************************************
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