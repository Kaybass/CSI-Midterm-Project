#include "Header.h"


using namespace std;

int timeAlgorithm(std::string filename)
{
	cout.setf(ios::fixed | ios::showpoint);
	cout.precision(16);

	TimerSystem timer;
	
	timer.startClock();

	data_Mushroom** knownMushrooms = NULL;
	input_Mushroom* checkMushroom = NULL;

	knownMushrooms = loadData("agaricus-lepiota.data.csv", MAX_INSTANCES);
	checkMushroom  = loadInput(filename);

	bool bP = isPoison(checkMushroom, knownMushrooms, MAX_INSTANCES);

	cout << timer.getTime() << " seconds elapsed.\n";

	if(bP == true)
		cout << "The mushroom is poisonous!\n";
	else
		cout << "The mushroom is edible!\n";

	system("pause");

	return 1;
}