#ifndef __KNN__
#define __KNN__

#include <math.h>
#include "mushroom.h"


bool isPoison(input_Mushroom *checkMushrooms, data_Mushroom** knownMushrooms, int length);

double euclidDistance(input_Mushroom *myMushroom, data_Mushroom *knownMushrooms);

#endif