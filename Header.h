/* ***       Author:  Team Same
     *  Last Update:  February 25, 2014
     *        Class:  CSI-281
     *     Filename:  
     *			Header.h
     *  Description:
     *			Contains functions for main
     *  
     *  Certification of Authenticity:
     *     I certify that this assignment is entirely our own work.
     **********************************************************************/

#ifndef __HEADER__
#define __HEADER__

#include <iostream>
#include <fstream>
#include <string>
#include "dataloader.h"
#include "knn.h"
#include "mushroom.h"
#include "timerSystem.h"


using namespace std;

/*
 *	Pre    : I need to time kNN algorithm
 *	Purpose: Yiming algoritm and loading data
 *	Post   : Print out time to terminal
*/
int timeAlgorithm(std::string filename);

float getAccuracy();
void printAccuracy();

#endif