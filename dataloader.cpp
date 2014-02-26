#include "dataloader.h"


using namespace std;

data_Mushroom  ** loadData(string filename, data_Mushroom * arr[], int numInstances = MAX_INSTANCES)
{
	ifstream fInput;
	int numInstances;

	fInput.open(filename);

	int i = 0;
	string tmp;

	if(fInput.good())
	{
		fInput >> numInstances;
		while(!fInput.eof() && i < numInstances)
		{
			getline(fInput, tmp);

			arr[i] = new data_Mushroom;

			for(int j = 0; j < 45; j = j + 2)
			{
				switch(j)
				{
				case 0:
					switch (tmp[j])
					{
					case 'p':
						arr[i]->isEdible = false;
						break;
					case 'e':
						arr[i]->isEdible = true;
						break;
					default:
						break;
					}
					break;
				case 2:
					switch(tmp[j])
					{
					case 'b':
						arr[i]->capShape = CSH_BELL;
						break;
					case 'c':
						arr[i]->capShape = CSH_CONICAL;
						break;
					case 'x':
						arr[i]->capShape = CSH_CONVEX;
						break;
					case 'f':
						arr[i]->capShape = CSH_FLAT;
						break;
					case 'k':
						arr[i]->capShape = CSH_KNOBBED;
						break;
					case 's':
						arr[i]->capShape = CSH_SUNKEN;
						break;
					default:
						break;
					}
					break;
				case 4:
					switch(tmp[j])
					{
					case 'f':
						arr[i]->capSurface = CSU_FIBROUS;
						break;
					case 'g':
						arr[i]->capSurface = CSU_GROOVES;
						break;
					case 'y':
						arr[i]->capSurface = CSU_SCALY;
						break;
					case 's':
						arr[i]->capSurface = CSU_SMOOTH;
						break;
					default:
						break;
					}
					break;
				case 6:
					switch(tmp[j])
					{
					case 'n':
						arr[i]->capColor = CC_BROWN;
						break;
					case 'b':
						arr[i]->capColor = CC_BUFF;
						break;
					case 'c':
						arr[i]->capColor = CC_CINNAMON;
						break;
					case 'g':
						arr[i]->capColor = CC_GRAY;
						break;
					case 'r':
						arr[i]->capColor = CC_GREEN;
						break;
					case 'p':
						arr[i]->capColor = CC_PINK;
						break;
					case 'u':
						arr[i]->capColor = CC_PURPLE;
						break;
					case 'e':
						arr[i]->capColor = CC_RED;
						break;
					case 'w':
						arr[i]->capColor = CC_WHITE;
						break;
					case 'y':
						arr[i]->capColor = CC_YELLOW;
						break;
					default:
						break;
					}
					break;
				case 8:
					switch (tmp[j])
					{
					case 't':
						arr[i]->bruises = B_BRUISED;
						break;
					case 'f':
						arr[i]->bruises = B_NOT_BRUISED;
					default:
						break;
					}
					break;
				case 10:
					switch (tmp[j])
					{
					case 'a':
						arr[i]->odor = O_ALMOND;
						break;
					case 'l':
						arr[i]->odor = O_ANISE;
						break;
					case 'c':
						arr[i]->odor = O_CREOSOTE;
						break;
					case 'y':
						arr[i]->odor = O_FISHY;
						break;
					case 'f':
						arr[i]->odor = O_FOUL;
						break;
					case 'm':
						arr[i]->odor = O_MUSTY;
						break;
					case 'n':
						arr[i]->odor = O_NONE;
						break;
					case 'p':
						arr[i]->odor = O_PUNGENT;
						break;
					case 's':
						arr[i]->odor = O_SPICE;
						break;
					default:
						break;
					}
					break;
				case 12:
					switch (tmp[j])
					{
					case 'a':
						arr[i]->gillAttachment = GA_ATTACHED;
						break;
					case 'd':
						arr[i]->gillAttachment = GA_DECENDING;
						break;
					case 'f':
						arr[i]->gillAttachment = GA_FREE;
						break;
					case 'n':
						arr[i]->gillAttachment = GA_NOTCHED;
						break;
					default:
						break;
					}
					break;
				case 14:
					switch (tmp[j])
					{
					case 'c':
						arr[i]->gillSpacing = GSP_CLOSE;
						break;
					case 'w':
						arr[i]->gillSpacing = GSP_CROWDED;
						break;
					case 'd':
						arr[i]->gillSpacing = GSP_DISTANT;
						break;
					default:
						break;
					}
					break;
				case 16:
					switch (tmp[j])
					{
					case 'b':
						arr[i]->gillSize = GSI_BROAD;
						break;
					case 'n':
						arr[i]->gillSize = GSI_NARROW;
						break;
					default:
						break;
					}
					break;
				case 18:
					switch (tmp[j])
					{
					case 'k':
						arr[i]->gillColor = GC_BLACK;
						break;
					case 'n':
						arr[i]->gillColor = GC_BROWN;
						break;
					case 'b':
						arr[i]->gillColor = GC_BUFF;
						break;
					case 'g':
						arr[i]->gillColor = GC_GRAY;
						break;
					case 'r':
						arr[i]->gillColor = GC_GREEN;
						break;
					case 'o':
						arr[i]->gillColor = GC_ORANGE;
						break;
					case 'p':
						arr[i]->gillColor = GC_PINK;
						break;
					case 'u':
						arr[i]->gillColor = GC_PURPLE;
						break;
					case 'e':
						arr[i]->gillColor = GC_RED;
						break;
					case 'w':
						arr[i]->gillColor = GC_WHITE;
						break;
					case 'y':
						arr[i]->gillColor = GC_YELLOW;
						break;
					default:
						break;
					}
					break;
				case 20:
					switch (tmp[j])
					{
					case 'e':
						arr[i]->stalkShape = SS_ENLARGING;
						break;
					case 't':
						arr[i]->stalkShape = SS_TAPERING;
						break;
					default:
						break;
					}
					break;
				case 22:
					switch (tmp[j])
					{
					case 'b':
						arr[i]->stalkRoot = SR_BULBOUS;
						break;
					case 'c':
						arr[i]->stalkRoot = SR_CLUB;
						break;
					case 'u':
						arr[i]->stalkRoot = SR_CUP;
						break;
					case 'e':
						arr[i]->stalkRoot = SR_EQUAL;
						break;
					case 'z':
						arr[i]->stalkRoot = SR_RHIZOMORPHS;
						break;
					case 'r':
						arr[i]->stalkRoot = SR_ROOTED;
						break;
					case '?':
						arr[i]->stalkRoot = SR_MISSING;
						break;
					default:
						break;
					}
				default:
					break;
				}
			}
		}
	}
}

input_Mushroom * loadInput(std::string filename = "input1.txt")
{
		ifstream fInput;
	int numInstances;

	fInput.open(filename);

	int i = 0;
	string tmp;

	if(fInput.good())
	{
		while(!fInput.eof() && i < numInstances)
		{
			getline(fInput, tmp);

			arr[i] = new input_Mushroom;

			for(int j = 0; j < 45; j = j + 2)
			{
				switch(j)
				{
				case 0:
					switch (tmp[j])
					{
					case 'p':
						arr[i]->isEdible = false;
						break;
					case 'e':
						arr[i]->isEdible = true;
						break;
					default:
						break;
					}
					break;
				case 2:
					switch(tmp[j])
					{
					case 'b':
						arr[i]->capShape = CSH_BELL;
						break;
					case 'c':
						arr[i]->capShape = CSH_CONICAL;
						break;
					case 'x':
						arr[i]->capShape = CSH_CONVEX;
						break;
					case 'f':
						arr[i]->capShape = CSH_FLAT;
						break;
					case 'k':
						arr[i]->capShape = CSH_KNOBBED;
						break;
					case 's':
						arr[i]->capShape = CSH_SUNKEN;
						break;
					default:
						break;
					}
					break;
				case 4:
					switch(tmp[j])
					{
					case 'f':
						arr[i]->capSurface = CSU_FIBROUS;
						break;
					case 'g':
						arr[i]->capSurface = CSU_GROOVES;
						break;
					case 'y':
						arr[i]->capSurface = CSU_SCALY;
						break;
					case 's':
						arr[i]->capSurface = CSU_SMOOTH;
						break;
					default:
						break;
					}
					break;
				case 6:
					switch(tmp[j])
					{
					case 'n':
						arr[i]->capColor = CC_BROWN;
						break;
					case 'b':
						arr[i]->capColor = CC_BUFF;
						break;
					case 'c':
						arr[i]->capColor = CC_CINNAMON;
						break;
					case 'g':
						arr[i]->capColor = CC_GRAY;
						break;
					case 'r':
						arr[i]->capColor = CC_GREEN;
						break;
					case 'p':
						arr[i]->capColor = CC_PINK;
						break;
					case 'u':
						arr[i]->capColor = CC_PURPLE;
						break;
					case 'e':
						arr[i]->capColor = CC_RED;
						break;
					case 'w':
						arr[i]->capColor = CC_WHITE;
						break;
					case 'y':
						arr[i]->capColor = CC_YELLOW;
						break;
					default:
						break;
					}
					break;
				case 8:
					switch (tmp[j])
					{
					case 't':
						arr[i]->bruises = B_BRUISED;
						break;
					case 'f':
						arr[i]->bruises = B_NOT_BRUISED;
					default:
						break;
					}
					break;
				case 10:
					switch (tmp[j])
					{
					case 'a':
						arr[i]->odor = O_ALMOND;
						break;
					case 'l':
						arr[i]->odor = O_ANISE;
						break;
					case 'c':
						arr[i]->odor = O_CREOSOTE;
						break;
					case 'y':
						arr[i]->odor = O_FISHY;
						break;
					case 'f':
						arr[i]->odor = O_FOUL;
						break;
					case 'm':
						arr[i]->odor = O_MUSTY;
						break;
					case 'n':
						arr[i]->odor = O_NONE;
						break;
					case 'p':
						arr[i]->odor = O_PUNGENT;
						break;
					case 's':
						arr[i]->odor = O_SPICE;
						break;
					default:
						break;
					}
					break;
				case 12:
					switch (tmp[j])
					{
					case 'a':
						arr[i]->gillAttachment = GA_ATTACHED;
						break;
					case 'd':
						arr[i]->gillAttachment = GA_DECENDING;
						break;
					case 'f':
						arr[i]->gillAttachment = GA_FREE;
						break;
					case 'n':
						arr[i]->gillAttachment = GA_NOTCHED;
						break;
					default:
						break;
					}
					break;
				case 14:
					switch (tmp[j])
					{
					case 'c':
						arr[i]->gillSpacing = GSP_CLOSE;
						break;
					case 'w':
						arr[i]->gillSpacing = GSP_CROWDED;
						break;
					case 'd':
						arr[i]->gillSpacing = GSP_DISTANT;
						break;
					default:
						break;
					}
					break;
				case 16:
					switch (tmp[j])
					{
					case 'b':
						arr[i]->gillSize = GSI_BROAD;
						break;
					case 'n':
						arr[i]->gillSize = GSI_NARROW;
						break;
					default:
						break;
					}
					break;
				case 18:
					switch (tmp[j])
					{
					case 'k':
						arr[i]->gillColor = GC_BLACK;
						break;
					case 'n':
						arr[i]->gillColor = GC_BROWN;
						break;
					case 'b':
						arr[i]->gillColor = GC_BUFF;
						break;
					case 'g':
						arr[i]->gillColor = GC_GRAY;
						break;
					case 'r':
						arr[i]->gillColor = GC_GREEN;
						break;
					case 'o':
						arr[i]->gillColor = GC_ORANGE;
						break;
					case 'p':
						arr[i]->gillColor = GC_PINK;
						break;
					case 'u':
						arr[i]->gillColor = GC_PURPLE;
						break;
					case 'e':
						arr[i]->gillColor = GC_RED;
						break;
					case 'w':
						arr[i]->gillColor = GC_WHITE;
						break;
					case 'y':
						arr[i]->gillColor = GC_YELLOW;
						break;
					default:
						break;
					}
					break;
				case 20:
					switch (tmp[j])
					{
					case 'e':
						arr[i]->stalkShape = SS_ENLARGING;
						break;
					case 't':
						arr[i]->stalkShape = SS_TAPERING;
						break;
					default:
						break;
					}
					break;
				case 22:
					switch (tmp[j])
					{
					case 'b':
						arr[i]->stalkRoot = SR_BULBOUS;
						break;
					case 'c':
						arr[i]->stalkRoot = SR_CLUB;
						break;
					case 'u':
						arr[i]->stalkRoot = SR_CUP;
						break;
					case 'e':
						arr[i]->stalkRoot = SR_EQUAL;
						break;
					case 'z':
						arr[i]->stalkRoot = SR_RHIZOMORPHS;
						break;
					case 'r':
						arr[i]->stalkRoot = SR_ROOTED;
						break;
					case '?':
						arr[i]->stalkRoot = SR_MISSING;
						break;
					default:
						break;
					}
				default:
					break;
				}
			}
		}
	}
}