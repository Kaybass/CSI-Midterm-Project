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
	data_Mushroom ** dArr = new data_Mushroom*[myMushroom->kNum];

	double* iArr = new double[myMushroom->kNum];

	bool bP;

	int temp = 0;

	for(int i = 0; i < length; i++)
	{
		temp = euclidDistance(myMushroom,knownMushrooms[i]);
	}
	
	return bP;
}