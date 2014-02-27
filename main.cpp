#include <iostream>

#include "dataloader.h"
#include "Header.h"
#include "knn.h"
#include "mushroom.h"

using namespace std;

void main()
{
	bool cont;
	_options choice;

	data_Mushroom** knownMushrooms = NULL;
	input_Mushroom* checkMushroom = NULL;
	near_Mushroom** nearNeighors = NULL;

	knownMushrooms = loadData("agaricus-lepiota.data.csv", MAX_INSTANCES);

	do
	{
		choice = getOption();
		switch(choice)
		{
		case (OPT_ADD_SPECIFIED_FILE):

			break;
		case (OPT_ADD_DEFAULT_FILE):
			checkMushroom = loadInput("input1.txt");
			break;
		case (OPT_SKIP):
		case (OPT_COUNT):
		case (OPT_ERROR):
		default:
			break;
		}
		nearNeighors = new data_Mushroom*[checkMushroom->kNum];

		doKNN(*checkMushroom, knownMushrooms, nearNeibors);


		cont = getContinue();
	} while(cont);
	delete [] *knownMushrooms;
	delete [] checkMushroom;
	delete [] *nearNeighors;
}