#include <iostream>
#include <fstream>
#include <string>
#include "knn.h"
#include "mushroom.h"

using namespace std;

enum _options {
	OPT_ERROR = -1, 
	OPT_ADD_SPECIFIED_FILE = 0,
	OPT_ADD_DEFAULT_FILE,
	OPT_SKIP,
	OPT_COUNT
};

bool doKNN(const input_Mushroom& checkMushrooms, data_Mushroom**  knownMushrooms);

bool getContinue();

_options getOption();