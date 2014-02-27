/* ***       Author:  Team Same
     *  Last Update:  February 25, 2014
     *        Class:  CSI-281
     *     Filename:  
     *			dataloader.h
     *  Description:
     *			loads mushrooms into memory
     *  
     *  Certification of Authenticity:
     *     I certify that this assignment is entirely our own work.
     **********************************************************************/

#ifndef __DATA_LOADER__
#define __DATA_LOADER__

#define MAX_INSTANCES 8124
#define MED_INSTANCES 5062
#define LOW_INSTANCES 2031

#include <fstream>
#include <string>
#include "mushroom.h"

/*
 *	Pre    : Need to load data into memory
 *	Purpose: Loading data
 *	Post   : Data is loaded
*/
data_Mushroom  ** loadData(std::string filename, int numInstances);

/*
 *	Pre    : Need to load input into memory
 *	Purpose: Loading input
 *	Post   : Input is loaded
*/
input_Mushroom * loadInput(std::string filename);

#endif