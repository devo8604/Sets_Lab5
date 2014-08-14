//*************************************************************************
// TITLE: 			   	STL Set Lab
// FILENAME:            lab4.cpp
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
//
//=========================================================================
//   			PROGRAM DESCRIPTION
//
//  This application generates a set of 45 nickels in your collection
//  with no duplicates from 1950 to 2000 from P mint and D mint. Another
//  set is generated that has nickels from both mints during that time period
//  the two sets are then compared and the nickels not in your set are inserted
//  into another set, which is then output to the user.
//
// INPUTS: NONE
//
// OUTPUTS:  The nickels that you still need to add to your collection.
//
//=========================================================================
//                          INCLUDE FILES
#include "NickelCollection.h"
#include <iostream>
//
//=========================================================================
//                        CONSTANT DEFINITIONS
//                             NONE
//
//=========================================================================
//                      EXTERNAL CLASS VARIABLES
//                          NONE
//=========================================================================
//
//*************************************************************************
//                     BEGINNING OF PROGRAM CODE
//*************************************************************************
int main(int argc, const char * argv[])
{
    
    NickelCollection mine;
    mine.collection();
    return 0;
}

/*------OUTPUT-------
 
 This is the list of coins you have:
 -----------------------------------
 Mint Code: D Year Made: 1950
 Mint Code: P Year Made: 1952
 Mint Code: D Year Made: 1954
 Mint Code: P Year Made: 1955
 Mint Code: D Year Made: 1956
 Mint Code: D Year Made: 1957
 Mint Code: D Year Made: 1958
 Mint Code: P Year Made: 1959
 Mint Code: D Year Made: 1961
 Mint Code: P Year Made: 1963
 Mint Code: D Year Made: 1964
 Mint Code: D Year Made: 1965
 Mint Code: P Year Made: 1966
 Mint Code: P Year Made: 1967
 Mint Code: P Year Made: 1968
 Mint Code: P Year Made: 1969
 Mint Code: P Year Made: 1970
 Mint Code: D Year Made: 1971
 Mint Code: D Year Made: 1972
 Mint Code: D Year Made: 1973
 Mint Code: P Year Made: 1974
 Mint Code: D Year Made: 1975
 Mint Code: D Year Made: 1976
 Mint Code: P Year Made: 1977
 Mint Code: D Year Made: 1978
 Mint Code: D Year Made: 1979
 Mint Code: D Year Made: 1980
 Mint Code: P Year Made: 1981
 Mint Code: D Year Made: 1982
 Mint Code: D Year Made: 1984
 Mint Code: P Year Made: 1985
 Mint Code: D Year Made: 1986
 Mint Code: P Year Made: 1987
 Mint Code: D Year Made: 1988
 Mint Code: P Year Made: 1989
 Mint Code: D Year Made: 1990
 Mint Code: D Year Made: 1991
 Mint Code: P Year Made: 1992
 Mint Code: P Year Made: 1993
 Mint Code: D Year Made: 1994
 Mint Code: D Year Made: 1995
 Mint Code: P Year Made: 1996
 Mint Code: P Year Made: 1997
 Mint Code: D Year Made: 1999
 Mint Code: P Year Made: 2000
 
 This is the list of coins you need:
 -----------------------------------
 Mint Code: P Year Made: 1950
 Mint Code: D Year Made: 1951
 Mint Code: P Year Made: 1951
 Mint Code: D Year Made: 1952
 Mint Code: D Year Made: 1953
 Mint Code: P Year Made: 1953
 Mint Code: P Year Made: 1954
 Mint Code: D Year Made: 1955
 Mint Code: P Year Made: 1956
 Mint Code: P Year Made: 1957
 Mint Code: P Year Made: 1958
 Mint Code: D Year Made: 1959
 Mint Code: D Year Made: 1960
 Mint Code: P Year Made: 1960
 Mint Code: P Year Made: 1961
 Mint Code: D Year Made: 1962
 Mint Code: P Year Made: 1962
 Mint Code: D Year Made: 1963
 Mint Code: P Year Made: 1964
 Mint Code: P Year Made: 1965
 Mint Code: D Year Made: 1966
 Mint Code: D Year Made: 1967
 Mint Code: D Year Made: 1968
 Mint Code: D Year Made: 1969
 Mint Code: D Year Made: 1970
 Mint Code: P Year Made: 1971
 Mint Code: P Year Made: 1972
 Mint Code: P Year Made: 1973
 Mint Code: D Year Made: 1974
 Mint Code: P Year Made: 1975
 Mint Code: P Year Made: 1976
 Mint Code: D Year Made: 1977
 Mint Code: P Year Made: 1978
 Mint Code: P Year Made: 1979
 Mint Code: P Year Made: 1980
 Mint Code: D Year Made: 1981
 Mint Code: P Year Made: 1982
 Mint Code: D Year Made: 1983
 Mint Code: P Year Made: 1983
 Mint Code: P Year Made: 1984
 Mint Code: D Year Made: 1985
 Mint Code: P Year Made: 1986
 Mint Code: D Year Made: 1987
 Mint Code: P Year Made: 1988
 Mint Code: D Year Made: 1989
 Mint Code: P Year Made: 1990
 Mint Code: P Year Made: 1991
 Mint Code: D Year Made: 1992
 Mint Code: D Year Made: 1993
 Mint Code: P Year Made: 1994
 Mint Code: P Year Made: 1995
 Mint Code: D Year Made: 1996
 Mint Code: D Year Made: 1997
 Mint Code: D Year Made: 1998
 Mint Code: P Year Made: 1998
 Mint Code: P Year Made: 1999
 Mint Code: D Year Made: 2000
 */
