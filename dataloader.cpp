#include "dataloader.h"


using namespace std;

data_Mushroom  ** loadData(string filename, data_Mushroom * arr[], int numInstances = MAX_INSTANCES)
{
	ifstream fInput;

	fInput.open(filename);

	int i = 0;
	string tmp;

	if(fInput.good())
	{
		while(!fInput.eof() && i < numInstances)
		{
			getline(fInput, tmp);

			arr[i] = new data_Mushroom;

			for(int j = 0; j < 45; j = j + 2)
			{
				switch(j)
				{
				case 0:
					if(tmp[j] == 'p')
					{
						arr[i]->isEdible = false;
					}
					else
					{
						arr[i]->isEdible = true;
					}
					break;
				case 2:
					switch(tmp[j])
					{
					case 'b':
						arr[i]->capShape = CSH_BELL;
						break;
					case 'c':
						break;
					case 'x':
						break;
					case 'f':
						break;
					case 'k':
						break;
					case 's':
						break;
					default:
						break;
					}
					break;
				default:
					break;
				}
			}
		}
	}
}

input_Mushroom * loadInput(std::string filename)
{

}