#include "knn.h"

float distance( input_Mushroom myMushroom, data_Mushroom knownMushrooms )
{
	return pow(float(pow(float(myMushroom.capShape - knownMushrooms.capShape), 2) +
				pow(float(myMushroom.capSurface - knownMushrooms.capSurface), 2) +
				pow(float(myMushroom.capColor - knownMushrooms.capColor), 2) +
				pow(float(myMushroom.bruises - knownMushrooms.bruises), 2) +
				pow(float(myMushroom.odor - knownMushrooms.odor), 2) +
				pow(float(myMushroom.gillAttachment - knownMushrooms.gillAttachment), 2) +
				pow(float(myMushroom.gillSpacing - knownMushrooms.gillSpacing), 2) +
				pow(float(myMushroom.gillSize - knownMushrooms.gillSize), 2) +
				pow(float(myMushroom.gillColor - knownMushrooms.gillColor), 2) +
				pow(float(myMushroom.stalkShape - knownMushrooms.stalkShape), 2) +
				pow(float(myMushroom.stalkRoot - knownMushrooms.stalkRoot), 2) +
				pow(float(myMushroom.stalkSurfaceAboveRing - knownMushrooms.stalkSurfaceAboveRing), 2) +
				pow(float(myMushroom.stalkSurfaceBelowRing - knownMushrooms.stalkSurfaceBelowRing), 2) +
				pow(float(myMushroom.stalkColorAboveRing - knownMushrooms.stalkColorAboveRing), 2) +
				pow(float(myMushroom.stalkColorBelowRing - knownMushrooms.stalkColorBelowRing), 2) +
				pow(float(myMushroom.veilType - knownMushrooms.veilType), 2) +
				pow(float(myMushroom.capSurface - knownMushrooms.capSurface), 2) +
				pow(float(myMushroom.veilColor - knownMushrooms.veilColor), 2) +
				pow(float(myMushroom.ringType - knownMushrooms.ringType), 2) +
				pow(float(myMushroom.sporePrintColor - knownMushrooms.sporePrintColor), 2) +
				pow(float(myMushroom.population - knownMushrooms.population), 2) +
				pow(float(myMushroom.habitat - knownMushrooms.habitat), 2))
				, float(0.5)
		);
}