#include "knn.h"

double euclidDistance(input_Mushroom *myMushroom, data_Mushroom *knownMushrooms )
{
	return pow(static_cast<double>(
				pow(static_cast<double>(myMushroom->capShape - knownMushrooms->capShape), 2) +
				pow(static_cast<double>(myMushroom->capSurface - knownMushrooms->capSurface), 2) +
				pow(static_cast<double>(myMushroom->capColor - knownMushrooms->capColor), 2) +
				pow(static_cast<double>(myMushroom->bruises - knownMushrooms->bruises), 2) +
				pow(static_cast<double>(myMushroom->odor - knownMushrooms->odor), 2) +
				pow(static_cast<double>(myMushroom->gillAttachment - knownMushrooms->gillAttachment), 2) +
				pow(static_cast<double>(myMushroom->gillSpacing - knownMushrooms->gillSpacing), 2) +
				pow(static_cast<double>(myMushroom->gillSize - knownMushrooms->gillSize), 2) +
				pow(static_cast<double>(myMushroom->gillColor - knownMushrooms->gillColor), 2) +
				pow(static_cast<double>(myMushroom->stalkShape - knownMushrooms->stalkShape), 2) +
				pow(static_cast<double>(myMushroom->stalkRoot - knownMushrooms->stalkRoot), 2) +
				pow(static_cast<double>(myMushroom->stalkSurfaceAboveRing - knownMushrooms->stalkSurfaceAboveRing), 2) +
				pow(static_cast<double>(myMushroom->stalkSurfaceBelowRing - knownMushrooms->stalkSurfaceBelowRing), 2) +
				pow(static_cast<double>(myMushroom->stalkColorAboveRing - knownMushrooms->stalkColorAboveRing), 2) +
				pow(static_cast<double>(myMushroom->stalkColorBelowRing - knownMushrooms->stalkColorBelowRing), 2) +
				pow(static_cast<double>(myMushroom->veilType - knownMushrooms->veilType), 2) +
				pow(static_cast<double>(myMushroom->capSurface - knownMushrooms->capSurface), 2) +
				pow(static_cast<double>(myMushroom->veilColor - knownMushrooms->veilColor), 2) +
				pow(static_cast<double>(myMushroom->ringType - knownMushrooms->ringType), 2) +
				pow(static_cast<double>(myMushroom->sporePrintColor - knownMushrooms->sporePrintColor), 2) +
				pow(static_cast<double>(myMushroom->population - knownMushrooms->population), 2) +
				pow(static_cast<double>(myMushroom->habitat - knownMushrooms->habitat), 2))
				,0.5
		);
}

bool isPoison(input_Mushroom *myMushroom, data_Mushroom** knownMushrooms, int length)
{

	bool bP = true;

	double curDist = 0, tmpDist = 0;
	bool curEdible, tmpEdible;
	int poi = 0, edib = 0, size;
	size = myMushroom->kNum;
	near_Mushrooms * nArr = new near_Mushrooms[size];

	for (int h = 0; h < size; h++)
	{
		nArr[h].distance = INT_MAX;
	}

	for(int i = 0; i < length; i++)
	{
		curDist = euclidDistance(myMushroom,knownMushrooms[i]);
		curEdible = knownMushrooms[i]->isEdible;
		if (curDist == 0)
		{
			return !curEdible;
		}
		else
		{
			for(int j = 0; j < myMushroom->kNum; j++)
			{
				if (nArr[j].distance > curDist)
				{
					tmpDist = nArr[j].distance;
					tmpEdible = nArr[j].isEdible;
					nArr[j].distance = curDist;
					nArr[j].isEdible = curEdible;
					curDist = tmpDist;
					curEdible = tmpEdible;
				}
				/*/ ONLY RUN IF EDIBLE /*/
				else if (nArr[j].distance == curDist && nArr[j].isEdible)
				{
					tmpDist = nArr[j].distance;
					tmpEdible = nArr[j].isEdible;
					nArr[j].distance = curDist;
					nArr[j].isEdible = curEdible;
					curDist = tmpDist;
					curEdible = tmpEdible;
				}
			}
		}
	}

	/*/ get mode poison value /*/

	for (int k = 0; k < myMushroom->kNum; k++)
	{
		if (nArr[k].isEdible)
			++edib;
		else
			++poi;
	}

	if (edib > poi)
		bP = false;

	else
		bP = true;

	delete [] nArr;
	return bP;
}


bool getIsAccurate(input_Mushroom *checkMushroom, data_Mushroom** knownMushrooms, int length, data_Mushroom* checkAgainst)
{
	bool bP = true;

	double curDist = 0, tmpDist = 0;
	bool curEdible, tmpEdible;
	int poi = 0, edib = 0, size;
	size = checkMushroom->kNum;
	near_Mushrooms * nArr = new near_Mushrooms[size];

	for (int h = 0; h < size; h++)
	{
		nArr[h].distance = _I32_MAX;
	}

	for(int i = 0; i < length; i++)
	{
		curDist = euclidDistance(checkMushroom,knownMushrooms[i]);
		curEdible = knownMushrooms[i]->isEdible;
		if (curDist == 0)
		{
			/*/ DO NOTHING HERE /*/
		}
		else
		{
			for(int j = 0; j < checkMushroom->kNum; j++)
			{
				if (nArr[j].distance > curDist)
				{
					tmpDist = nArr[j].distance;
					tmpEdible = nArr[j].isEdible;
					nArr[j].distance = curDist;
					nArr[j].isEdible = curEdible;
					curDist = tmpDist;
					curEdible = tmpEdible;
				}
				/*/ ONLY RUN IF EDIBLE /*/
				else if (nArr[j].distance == curDist && nArr[j].isEdible)
				{
					tmpDist = nArr[j].distance;
					tmpEdible = nArr[j].isEdible;
					nArr[j].distance = curDist;
					nArr[j].isEdible = curEdible;
					curDist = tmpDist;
					curEdible = tmpEdible;
				}
			}
		}
	}

	/*/ get mode poison value /*/

	for (int k = 0; k < checkMushroom->kNum; k++)
	{
		if (nArr[k].isEdible)
			++edib;
		else
			++poi;
	}

	if (edib > poi)
		bP = false;

	else
		bP = true;

	delete [] nArr;

	return (bP = checkAgainst->isEdible);
}