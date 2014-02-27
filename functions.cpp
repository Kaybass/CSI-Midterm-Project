#include "Header.h"


bool doKNN(const input_Mushroom& myMushroom, data_Mushroom** knownMushrooms)
{
	data_Mushroom nearest1, nearest2, nearest3;
	float tmp, nearest1dist, nearest2dist, nearest3dist;

	/*/Get the 3 nearest neighbors/*/
	for (int i = 0; i < sizeof(knownMushrooms); i++)
	{
		tmp = euclidDistance(myMushroom, *knownMushrooms[i]);
		if ( tmp = 0 )
		{
			cout << "MATCH FOUND";
			return (knownMushrooms[i]->isEdible);
		}
		else if (tmp <= nearest1dist)
		{
			nearest3dist = nearest2dist;
			nearest3 = nearest2;
			nearest2dist = nearest1dist;
			nearest2 = nearest1;
			nearest1dist = tmp;
			nearest1 = *knownMushrooms[i];
		}
		else if (tmp <= nearest2dist)
		{
			nearest3dist = nearest2dist;
			nearest3 = nearest2;
			nearest2dist = nearest1dist;
			nearest2 = *knownMushrooms[i];
		}
		else if (tmp <= nearest3dist)
		{
			nearest3dist = nearest2dist;
			nearest3 = *knownMushrooms[i];
		}
	}
}

bool getContinue()
{
	string answer;
	bool ans, valInput;
	do
	{
		cout << "Would you like to run this again? [Y]es [N]o: ";
		cin >> answer;
		if (answer == "Y" || answer == "y")
		{
			ans = true;
			valInput = true;
		}
		else if (answer == "N" || answer == "n")
		{
			ans = false;
			valInput = true;
		}
		else
		{
			valInput = false;
			cout << "I'm sorry, your input was invalid."
				<< "Please use \"Y\" for yes and \"N\" for no.\N";
		}
	}while (!valInput);
	return ans;
}

_options getOption()
{
	string answer;
	_options choice;
	bool valInput;
	
	do
	{
		cout	<< "What would you like to do?\n"
				<< "S: ADD FROM SPECIFIED FILE\n"
				<< "D: ADD FROM DEFAULT FILE\n"
				<< "X: NOTHING\n";
		cin >> answer;

		if (answer == "S" || answer == "s")
		{
			choice = OPT_ADD_SPECIFIED_FILE;
			valInput = true;
		}

		else if (answer == "D" || answer == "d")
		{
			choice = OPT_ADD_DEFAULT_FILE;
			valInput = true;
		}

		else if (answer == "X" || answer == "x")
		{
			choice = OPT_SKIP;
			valInput = true;
		}

		else
		{
			choice = OPT_ERROR;
			valInput = false;
		}
	}while (!valInput);

	return choice;
}