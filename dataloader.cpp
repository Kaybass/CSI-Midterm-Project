#include "dataloader.h"


using namespace std;

data_Mushroom  ** loadData(string filename, int numInstances = MAX_INSTANCES)
{
	ifstream fInput;

	fInput.open(filename);

	data_Mushroom ** arr = new data_Mushroom*[numInstances];

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
					break;
				case 24:
					switch (tmp[j])
					{
					case 'f':
						arr[i]->stalkSurfaceAboveRing = SSAR_FIBROUS;
						break;
					case 'y':
						arr[i]->stalkSurfaceAboveRing = SSAR_SCALLY;
						break;
					case 'k':
						arr[i]->stalkSurfaceAboveRing = SSAR_SILKY;
						break;
					case 's':
						arr[i]->stalkSurfaceAboveRing = SSAR_SMOOTH;
						break;
					default:
						break;
					}
					break;
				case 26:
					switch (tmp[j])
					{
					case 'f':
						arr[i]->stalkSurfaceBelowRing = SSBR_FIBROUS;
						break;
					case 'y':
						arr[i]->stalkSurfaceBelowRing = SSBR_SCALLY;
						break;
					case 'k':
						arr[i]->stalkSurfaceBelowRing = SSBR_SILKY;
						break;
					case 's':
						arr[i]->stalkSurfaceBelowRing = SSBR_SMOOTH;
						break;
					default:
						break;
					}
					break;
				case 28:
					switch (tmp[j])
					{
					case 'n':
						arr[i]->stalkColorAboveRing = SCAR_BROWN;
						break;
					case 'b':
						arr[i]->stalkColorAboveRing = SCAR_BUFF;
						break;
					case 'c':
						arr[i]->stalkColorAboveRing = SCAR_CINNAMON;
						break;
					case 'g':
						arr[i]->stalkColorAboveRing = SCAR_GRAY;
						break;
					case 'o':
						arr[i]->stalkColorAboveRing = SCAR_ORANGE;
						break;
					case 'p':
						arr[i]->stalkColorAboveRing = SCAR_PINK;
						break;
					case 'e':
						arr[i]->stalkColorAboveRing = SCAR_RED;
						break;
					case 'w':
						arr[i]->stalkColorAboveRing = SCAR_WHITE;
						break;
					case 'y':
						arr[i]->stalkColorAboveRing = SCAR_YELLOW;
						break;
					default:
						break;
					}
					break;
				case 30:
					switch (tmp[j])
					{
					case 'n':
						arr[i]->stalkColorBelowRing = SCBR_BROWN;
						break;
					case 'b':
						arr[i]->stalkColorBelowRing = SCBR_BUFF;
						break;
					case 'c':
						arr[i]->stalkColorBelowRing = SCBR_CINNAMON;
						break;
					case 'g':
						arr[i]->stalkColorBelowRing = SCBR_GRAY;
						break;
					case 'o':
						arr[i]->stalkColorBelowRing = SCBR_ORANGE;
						break;
					case 'p':
						arr[i]->stalkColorBelowRing = SCBR_PINK;
						break;
					case 'e':
						arr[i]->stalkColorBelowRing = SCBR_RED;
						break;
					case 'w':
						arr[i]->stalkColorBelowRing = SCBR_WHITE;
						break;
					case 'y':
						arr[i]->stalkColorBelowRing = SCBR_YELLOW;
						break;
					default:
						break;
					}
					break;
				case 32:
					switch (tmp[j])
					{
					case 'p':
						arr[i]->veilType = VT_PARTIAL;
						break;
					case 'u':
						arr[i]->veilType = VT_UNIVERSAL;
						break;
					default:
						break;
					}
					break;
				case 34:
					switch (tmp[j])
					{
					case 'n':
						arr[i]->veilColor = VC_BROWN;
						break;
					case 'o':
						arr[i]->veilColor = VC_ORANGE;
						break;
					case 'w':
						arr[i]->veilColor = VC_WHITE;
						break;
					case 'y':
						arr[i]->veilColor = VC_YELLOW;
						break;
					default:
						break;
					}
					break;
				case 36:
					switch (tmp[j])
					{
					case 'n':
						arr[i]->ringNumber = RN_NONE;
						break;
					case 'o':
						arr[i]->ringNumber = RN_ONE;
						break;
					case 't':
						arr[i]->ringNumber = RN_TWO;
					default:
						break;
					}
					break;
				case 38:
					switch (tmp[j])
					{
					case 'c':
						arr[i]->ringType = RT_COBWEBBY;
						break;
					case 'e':
						arr[i]->ringType = RT_EVANESCENT;
						break;
					case 'f':
						arr[i]->ringType = RT_FLARING;
						break;
					case 'l':
						arr[i]->ringType = RT_LARGE;
						break;
					case 'n':
						arr[i]->ringType = RT_NONE;
						break;
					case 'p':
						arr[i]->ringType = RT_PENDANT;
						break;
					case 's':
						arr[i]->ringType = RT_SHEATHING;
						break;
					case 'z':
						arr[i]->ringType = RT_ZONE;
						break;
					default:
						break;
					}
					break;
				case 40:
					switch (tmp[j])
					{
					case 'k':
						arr[i]->sporePrintColor = SPC_BLACK;
						break;
					case 'n':
						arr[i]->sporePrintColor = SPC_BROWN;
						break;
					case 'b':
						arr[i]->sporePrintColor = SPC_BUFF;
						break;
					case 'h':
						arr[i]->sporePrintColor = SPC_CHOCOLATE;
						break;
					case 'r':
						arr[i]->sporePrintColor = SPC_GREEN;
						break;
					case 'o':
						arr[i]->sporePrintColor = SPC_ORANGE;
						break;
					case 'u':
						arr[i]->sporePrintColor = SPC_PURPLE;
						break;
					case 'w':
						arr[i]->sporePrintColor = SPC_WHITE;
						break;
					case 'y':
						arr[i]->sporePrintColor = SPC_YELLOW;
						break;
					default:
						break;
					}
					break;
				case 42:
					switch (tmp[j])
					{
					case 'a':
						arr[i]->population = P_ABUNDANT;
						break;
					case 'c':
						arr[i]->population = P_CLUSTERED;
						break;
					case 'n':
						arr[i]->population = P_NUMEROUS;
						break;
					case 's':
						arr[i]->population = P_SCATTERED;
						break;
					case 'v':
						arr[i]->population = P_SEVERAL;
						break;
					case 'y':
						arr[i]->population = P_SOLITARY;
						break;
					default:
						break;
					}
					break;
				case 44:
					switch (tmp[j])
					{
					case 'g':
						arr[i]->habitat = H_GRASSES;
						break;
					case 'l':
						arr[i]->habitat = H_LEAVES;
						break;
					case 'm':
						arr[i]->habitat = H_MEADOW;
						break;
					case 'p':
						arr[i]->habitat = H_PATHS;
						break;
					case 'u':
						arr[i]->habitat = H_URBAN;
						break;
					case 'w':
						arr[i]->habitat = H_WASTE;
						break;
					case 'd':
						arr[i]->habitat = H_WOODS;
						break;
					default:
						break;
					}
					break;
				default:
					break;
				}
			}
			i++;
		}
	}

	fInput.close();

	return arr;
}

input_Mushroom * loadInput(std::string filename = "input1.txt")
{
	ifstream fInput;

	fInput.open(filename);

	string tmp;

	input_Mushroom * mush = new input_Mushroom;

	if(fInput.good())
	{
		getline(fInput,tmp);

		mush->kNum = atoi(tmp.c_str());

		getline(fInput, tmp);

		for(int j = 0; j < 43; j = j + 2)
		{
			switch(j)
			{
			case 0:
				switch(tmp[j])
				{
				case 'b':
					mush->capShape = CSH_BELL;
					break;
				case 'c':
					mush->capShape = CSH_CONICAL;
					break;
				case 'x':
					mush->capShape = CSH_CONVEX;
					break;
				case 'f':
					mush->capShape = CSH_FLAT;
					break;
				case 'k':
					mush->capShape = CSH_KNOBBED;
					break;
				case 's':
					mush->capShape = CSH_SUNKEN;
					break;
				default:
					break;
				}
				break;
			case 2:
				switch(tmp[j])
				{
				case 'f':
					mush->capSurface = CSU_FIBROUS;
					break;
				case 'g':
					mush->capSurface = CSU_GROOVES;
					break;
				case 'y':
					mush->capSurface = CSU_SCALY;
					break;
				case 's':
					mush->capSurface = CSU_SMOOTH;
					break;
				default:
					break;
				}
				break;
			case 4:
				switch(tmp[j])
				{
				case 'n':
					mush->capColor = CC_BROWN;
					break;
				case 'b':
					mush->capColor = CC_BUFF;
					break;
				case 'c':
					mush->capColor = CC_CINNAMON;
					break;
				case 'g':
					mush->capColor = CC_GRAY;
					break;
				case 'r':
					mush->capColor = CC_GREEN;
					break;
				case 'p':
					mush->capColor = CC_PINK;
					break;
				case 'u':
					mush->capColor = CC_PURPLE;
					break;
				case 'e':
					mush->capColor = CC_RED;
					break;
				case 'w':
					mush->capColor = CC_WHITE;
					break;
				case 'y':
					mush->capColor = CC_YELLOW;
					break;
				default:
					break;
				}
				break;
			case 6:
				switch (tmp[j])
				{
				case 't':
					mush->bruises = B_BRUISED;
					break;
				case 'f':
					mush->bruises = B_NOT_BRUISED;
				default:
					break;
				}
				break;
			case 8:
				switch (tmp[j])
				{
				case 'a':
					mush->odor = O_ALMOND;
					break;
				case 'l':
					mush->odor = O_ANISE;
					break;
				case 'c':
					mush->odor = O_CREOSOTE;
					break;
				case 'y':
					mush->odor = O_FISHY;
					break;
				case 'f':
					mush->odor = O_FOUL;
					break;
				case 'm':
					mush->odor = O_MUSTY;
					break;
				case 'n':
					mush->odor = O_NONE;
					break;
				case 'p':
					mush->odor = O_PUNGENT;
					break;
				case 's':
					mush->odor = O_SPICE;
					break;
				default:
					break;
				}
				break;
			case 10:
				switch (tmp[j])
				{
				case 'a':
					mush->gillAttachment = GA_ATTACHED;
					break;
				case 'd':
					mush->gillAttachment = GA_DECENDING;
					break;
				case 'f':
					mush->gillAttachment = GA_FREE;
					break;
				case 'n':
					mush->gillAttachment = GA_NOTCHED;
					break;
				default:
					break;
				}
				break;
			case 12:
				switch (tmp[j])
				{
				case 'c':
					mush->gillSpacing = GSP_CLOSE;
					break;
				case 'w':
					mush->gillSpacing = GSP_CROWDED;
					break;
				case 'd':
					mush->gillSpacing = GSP_DISTANT;
					break;
				default:
					break;
				}
				break;
			case 14:
				switch (tmp[j])
				{
				case 'b':
					mush->gillSize = GSI_BROAD;
					break;
				case 'n':
					mush->gillSize = GSI_NARROW;
					break;
				default:
					break;
				}
				break;
			case 16:
				switch (tmp[j])
				{
				case 'k':
					mush->gillColor = GC_BLACK;
					break;
				case 'n':
					mush->gillColor = GC_BROWN;
					break;
				case 'b':
					mush->gillColor = GC_BUFF;
					break;
				case 'g':
					mush->gillColor = GC_GRAY;
					break;
				case 'r':
					mush->gillColor = GC_GREEN;
					break;
				case 'o':
					mush->gillColor = GC_ORANGE;
					break;
				case 'p':
					mush->gillColor = GC_PINK;
					break;
				case 'u':
					mush->gillColor = GC_PURPLE;
					break;
				case 'e':
					mush->gillColor = GC_RED;
					break;
				case 'w':
					mush->gillColor = GC_WHITE;
					break;
				case 'y':
					mush->gillColor = GC_YELLOW;
					break;
				default:
					break;
				}
				break;
			case 18:
				switch (tmp[j])
				{
				case 'e':
					mush->stalkShape = SS_ENLARGING;
					break;
				case 't':
					mush->stalkShape = SS_TAPERING;
					break;
				default:
					break;
				}
				break;
			case 20:
				switch (tmp[j])
				{
				case 'b':
					mush->stalkRoot = SR_BULBOUS;
					break;
				case 'c':
					mush->stalkRoot = SR_CLUB;
					break;
				case 'u':
					mush->stalkRoot = SR_CUP;
					break;
				case 'e':
					mush->stalkRoot = SR_EQUAL;
					break;
				case 'z':
					mush->stalkRoot = SR_RHIZOMORPHS;
					break;
				case 'r':
					mush->stalkRoot = SR_ROOTED;
					break;
				case '?':
					mush->stalkRoot = SR_MISSING;
					break;
				default:
					break;
				}
				break;
			case 22:
				switch (tmp[j])
				{
				case 'f':
					mush->stalkSurfaceAboveRing = SSAR_FIBROUS;
					break;
				case 'y':
					mush->stalkSurfaceAboveRing = SSAR_SCALLY;
					break;
				case 'k':
					mush->stalkSurfaceAboveRing = SSAR_SILKY;
					break;
				case 's':
					mush->stalkSurfaceAboveRing = SSAR_SMOOTH;
					break;
				default:
					break;
				}
				break;
			case 24:
				switch (tmp[j])
				{
				case 'f':
					mush->stalkSurfaceBelowRing = SSBR_FIBROUS;
					break;
				case 'y':
					mush->stalkSurfaceBelowRing = SSBR_SCALLY;
					break;
				case 'k':
					mush->stalkSurfaceBelowRing = SSBR_SILKY;
					break;
				case 's':
					mush->stalkSurfaceBelowRing = SSBR_SMOOTH;
					break;
				default:
					break;
				}
				break;
			case 26:
				switch (tmp[j])
				{
				case 'n':
					mush->stalkColorAboveRing = SCAR_BROWN;
					break;
				case 'b':
					mush->stalkColorAboveRing = SCAR_BUFF;
					break;
				case 'c':
					mush->stalkColorAboveRing = SCAR_CINNAMON;
					break;
				case 'g':
					mush->stalkColorAboveRing = SCAR_GRAY;
					break;
				case 'o':
					mush->stalkColorAboveRing = SCAR_ORANGE;
					break;
				case 'p':
					mush->stalkColorAboveRing = SCAR_PINK;
					break;
				case 'e':
					mush->stalkColorAboveRing = SCAR_RED;
					break;
				case 'w':
					mush->stalkColorAboveRing = SCAR_WHITE;
					break;
				case 'y':
					mush->stalkColorAboveRing = SCAR_YELLOW;
					break;
				default:
					break;
				}
				break;
			case 28:
				switch (tmp[j])
				{
				case 'n':
					mush->stalkColorBelowRing = SCBR_BROWN;
					break;
				case 'b':
					mush->stalkColorBelowRing = SCBR_BUFF;
					break;
				case 'c':
					mush->stalkColorBelowRing = SCBR_CINNAMON;
					break;
				case 'g':
					mush->stalkColorBelowRing = SCBR_GRAY;
					break;
				case 'o':
					mush->stalkColorBelowRing = SCBR_ORANGE;
					break;
				case 'p':
					mush->stalkColorBelowRing = SCBR_PINK;
					break;
				case 'e':
					mush->stalkColorBelowRing = SCBR_RED;
					break;
				case 'w':
					mush->stalkColorBelowRing = SCBR_WHITE;
					break;
				case 'y':
					mush->stalkColorBelowRing = SCBR_YELLOW;
					break;
				default:
					break;
				}
				break;
			case 30:
				switch (tmp[j])
				{
				case 'p':
					mush->veilType = VT_PARTIAL;
					break;
				case 'u':
					mush->veilType = VT_UNIVERSAL;
					break;
				default:
					break;
				}
				break;
			case 32:
				switch (tmp[j])
				{
				case 'n':
					mush->veilColor = VC_BROWN;
					break;
				case 'o':
					mush->veilColor = VC_ORANGE;
					break;
				case 'w':
					mush->veilColor = VC_WHITE;
					break;
				case 'y':
					mush->veilColor = VC_YELLOW;
					break;
				default:
					break;
				}
				break;
			case 34:
				switch (tmp[j])
				{
				case 'n':
					mush->ringNumber = RN_NONE;
					break;
				case 'o':
					mush->ringNumber = RN_ONE;
					break;
				case 't':
					mush->ringNumber = RN_TWO;
				default:
					break;
				}
				break;
			case 36:
				switch (tmp[j])
				{
				case 'c':
					mush->ringType = RT_COBWEBBY;
					break;
				case 'e':
					mush->ringType = RT_EVANESCENT;
					break;
				case 'f':
					mush->ringType = RT_FLARING;
					break;
				case 'l':
					mush->ringType = RT_LARGE;
					break;
				case 'n':
					mush->ringType = RT_NONE;
					break;
				case 'p':
					mush->ringType = RT_PENDANT;
					break;
				case 's':
					mush->ringType = RT_SHEATHING;
					break;
				case 'z':
					mush->ringType = RT_ZONE;
					break;
				default:
					break;
				}
				break;
			case 38:
				switch (tmp[j])
				{
				case 'k':
					mush->sporePrintColor = SPC_BLACK;
					break;
				case 'n':
					mush->sporePrintColor = SPC_BROWN;
					break;
				case 'b':
					mush->sporePrintColor = SPC_BUFF;
					break;
				case 'h':
					mush->sporePrintColor = SPC_CHOCOLATE;
					break;
				case 'r':
					mush->sporePrintColor = SPC_GREEN;
					break;
				case 'o':
					mush->sporePrintColor = SPC_ORANGE;
					break;
				case 'u':
					mush->sporePrintColor = SPC_PURPLE;
					break;
				case 'w':
					mush->sporePrintColor = SPC_WHITE;
					break;
				case 'y':
					mush->sporePrintColor = SPC_YELLOW;
					break;
				default:
					break;
				}
				break;
			case 40:
				switch (tmp[j])
				{
				case 'a':
					mush->population = P_ABUNDANT;
					break;
				case 'c':
					mush->population = P_CLUSTERED;
					break;
				case 'n':
					mush->population = P_NUMEROUS;
					break;
				case 's':
					mush->population = P_SCATTERED;
					break;
				case 'v':
					mush->population = P_SEVERAL;
					break;
				case 'y':
					mush->population = P_SOLITARY;
					break;
				default:
					break;
				}
				break;
			case 42:
				switch (tmp[j])
				{
				case 'g':
					mush->habitat = H_GRASSES;
					break;
				case 'l':
					mush->habitat = H_LEAVES;
					break;
				case 'm':
					mush->habitat = H_MEADOW;
					break;
				case 'p':
					mush->habitat = H_PATHS;
					break;
				case 'u':
					mush->habitat = H_URBAN;
					break;
				case 'w':
					mush->habitat = H_WASTE;
					break;
				case 'd':
					mush->habitat = H_WOODS;
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
	fInput.close();

	return mush;
}
