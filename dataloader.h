#ifndef __DATA_LOADER__
#define __DATA_LOADER__

#define MAX_INSTANCES 8124

#include <fstream>
#include <string>
#include "mushroom.h"

data_Mushroom  ** loadData(std::string filename, int numInstances = MAX_INSTANCES);

input_Mushroom * loadInput(std::string filename = "input1.txt");

#endif