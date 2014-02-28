#include "Header.h"


using namespace std;



float getAccuracy()
{
	int instances = MAX_INSTANCES, numAccurate = 0;
	float accuracy;

	data_Mushroom** checkAgainst = NULL;
	input_Mushroom* checkFor = NULL;

	checkFor = new input_Mushroom;

	checkAgainst = loadData("agaricus-lepiota.data.csv", instances);


	for (int i = MED_INSTANCES + 1; i < instances; i++)
	{
		checkFor->kNum = 3;
		checkFor->bruises = checkAgainst[i]->bruises;
		checkFor->capColor = checkAgainst[i]->capColor;
		checkFor->capShape = checkAgainst[i]->capShape;
		checkFor->capSurface = checkAgainst[i]->capSurface;
		checkFor->gillAttachment = checkAgainst[i]->gillAttachment;
		checkFor->gillColor = checkAgainst[i]->gillColor;
		checkFor->gillSize = checkAgainst[i]->gillSize;
		checkFor->gillSpacing = checkAgainst[i]->gillSpacing;
		checkFor->habitat = checkAgainst[i]->habitat;
		checkFor->odor = checkAgainst[i]->odor;
		checkFor->population = checkAgainst[i]->population;
		checkFor->ringNumber = checkAgainst[i]->ringNumber;
		checkFor->ringType = checkAgainst[i]->ringType;
		checkFor->sporePrintColor = checkAgainst[i]->sporePrintColor;
		checkFor->stalkColorAboveRing = checkAgainst[i]->stalkColorAboveRing;
		checkFor->stalkColorBelowRing = checkAgainst[i]->stalkColorBelowRing;
		checkFor->stalkRoot = checkAgainst[i]->stalkRoot;
		checkFor->stalkShape = checkAgainst[i]->stalkShape;
		checkFor->stalkSurfaceAboveRing = checkAgainst[i]->stalkSurfaceAboveRing;
		checkFor->stalkSurfaceBelowRing = checkAgainst[i]->stalkSurfaceBelowRing;
		checkFor->veilColor = checkAgainst[i]->veilColor;
		checkFor->veilType = checkAgainst[i]->veilType; 
		if ( getIsAccurate( checkFor, checkAgainst, MED_INSTANCES, checkAgainst[i] ) )
			++numAccurate;\
	}
	delete checkFor;
	delete [] *checkAgainst;
	accuracy = (100 * (float(numAccurate) / float(MAX_INSTANCES - MED_INSTANCES)));
	return accuracy;
}


void printAccuracy()
{
	cout << "Accuracy is " << getAccuracy() << "\n\a";
}


int timeAlgorithm(std::string filename)
{
	cout.setf(ios::fixed | ios::showpoint);
	cout.precision(16);

	TimerSystem timer;

	int instances = LOW_INSTANCES;
	
	timer.startClock();

	data_Mushroom** knownMushrooms = NULL;
	input_Mushroom* checkMushroom = NULL;

	knownMushrooms = loadData("agaricus-lepiota.data.csv", instances);
	checkMushroom  = loadInput(filename);

	bool bP = isPoison(checkMushroom, knownMushrooms, instances);

	cout << timer.getTime() << " seconds elapsed.\n";

	if(bP == true)
		cout << "The mushroom is poisonous!\n";
	else
		cout << "The mushroom is edible!\n";

	system("pause");

	for(int i = 0; i < instances; i++)
	{
		delete knownMushrooms[i];
		knownMushrooms[i] = NULL;
	}

	delete [] knownMushrooms;
	delete    checkMushroom;

	return 1;
}