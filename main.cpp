#include <iostream>

#include "dataloader.h"
#include "Header.h"
#include "knn.h"

using namespace std;

void main()
{
	bool cont;
	_options choice;
	do
	{
		choice = getOption();
		// request input file
		// check to see if file is good
		// if file is good run k-NN
		// out put likely hood of being poisonous
		cont = getContinue();
	} while(cont);
}