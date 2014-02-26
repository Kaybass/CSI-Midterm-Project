#include "Header.h"

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