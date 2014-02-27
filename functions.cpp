#include "Header.h"


using namespace std;

int timeAlgorithm(std::string filename)
{
	cout.setf(ios::fixed | ios::showpoint);
	cout.precision(16);

	TimerSystem timer;

	int instances = MAX_INSTANCES;
	
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