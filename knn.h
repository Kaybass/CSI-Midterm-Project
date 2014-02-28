/* ***       Author:  Team Same
     *  Last Update:  February 25, 2014
     *        Class:  CSI-281
     *     Filename:  
     *			knn.h
     *  Description:
     *			contains functions for knn algorithm
     *  
     *  Certification of Authenticity:
     *     I certify that this assignment is entirely our own work.
     **********************************************************************/

#ifndef __KNN__
#define __KNN__

#include <climits>
#include <math.h>
#include "mushroom.h"

using namespace std;

/*
 *	Pre    : Have mushroom
 *	Purpose: Find if mushroom has poison
 *	Post   : Know if mushroom has poison
*/
bool isPoison(input_Mushroom *checkMushrooms, data_Mushroom** knownMushrooms, int length);

bool getIsAccurate(input_Mushroom *checkMushroom, data_Mushroom** knownMushrooms, int length, data_Mushroom* checkAgainst);

/*
 *	Pre    : Have two mushroom
 *	Purpose: Find distance between mushrooms
 *	Post   : Know distance between mushrooms
*/
double euclidDistance(input_Mushroom *myMushroom, data_Mushroom *knownMushrooms);

#endif