#include "Header.h"


/*/
	Compares the value of an unknow mushroom agains known mushrooms
	If the unknown mushroom matches a mushroom exactly then it clames it found a match
	If there is no match then it checks gainst the nearest 3 and 
/*/
bool doKNN(input_Mushroom myMushroom, data_Mushroom** knownMushrooms, near_Mushroom** nearNeighors)
{
	float tmp, nearest1dist, nearest2dist, nearest3dist;
	bool isEdible;

	/*/Get the 3 nearest neighbors/*/
	for (int i = 0; i < sizeof(knownMushrooms); i++)
	{
		tmp = euclidDistance(myMushroom, knownMushrooms[i]);
		if ( tmp = 0 )
		{
			cout << "MATCH FOUND";
			return (knownMushrooms[i]->isEdible);
		}
		else if (nearest1dist != NULL && tmp <= nearest1dist)
		{
			/*/
			nearest3dist = nearest2dist;
			nearest3 = nearest2;
			nearest2dist = nearest1dist;
			nearest2 = nearest1;
			nearest1dist = tmp;
			nearest1 = knownMushrooms[i];
			/*/
		}
		else if (tmp <= nearest2dist)
		{
			/*/
			nearest3dist = nearest2dist;
			nearest3 = nearest2;
			nearest2dist = nearest1dist;
			nearest2 = knownMushrooms[i];
			/*/
		}
		else if (tmp <= nearest3dist)
		{
			/*/
			nearest3dist = nearest2dist;
			nearest3 = knownMushrooms[i];
			/*/
		}
	}
	if( (nearest1dist < ((nearest2dist + nearest3dist)/2)- 10) && (nearest1dist != nearest2dist) )
	{
		isEdible = nearest1->isEdible;
	}
	else
	{
		/*/If 2 or more have a value of false (1)/*/
		if (((int(nearest1->isEdible) + int(nearest2->isEdible) + int(nearest3->isEdible))/2) >= 1)
			isEdible = false;
		
		else
			isEdible = true;

	}
	return isEdible;
}


/*/
	Checks to see if the user wants to continue.
/*/
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
				<< "Please use \"Y\" for yes and \"N\" for no.\n";
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