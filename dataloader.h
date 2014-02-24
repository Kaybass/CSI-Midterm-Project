#ifndef __DATA_LOADER__
#define __DATA_LOADER__

#include <fstream>
#include <string>
#include <mushroom.h>

data_Mushroom * loadData(std::string filename, data_Mushroom *arr, numInstances = 8124);

data_Mushroom loadInput(std::string filename)

#endif