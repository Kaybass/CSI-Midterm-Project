#include <iostream>
#include <fstream>
#include <string>

using namespace std;

enum _options {
	OPT_ERROR = -1, 
	OPT_ADD_SPECIFIED_FILE = 0,
	OPT_ADD_DEFAULT_FILE,
	OPT_SKIP,
	OPT_COUNT
};

bool getContinue();

_options getOption();