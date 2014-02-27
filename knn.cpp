#include "knn.h"

float distance( input_Mushroom myMushroom, data_Mushroom knownMushrooms )
{
	float	total;
	int 	deltaCapShape,
			deltaCapSurface,
			deltaCapColor,
			deltaBruises,
			deltaOdor,
			deltaGillAttachment,
			deltaGillSpacing,
			deltaGillSize,
			deltaGillColor,
			deltaStalkShape,
			deltaStalkRoot,
			deltaStalkSurfaceAboveRing,
			deltaStalkSurfaceBelowRing,
			deltaStalkColorAboveRing,
			deltaStalkColorBelowRing,
			deltaVeilType,
			deltaVeilColor,
			deltaRingNumber,
			deltaRingType,
			deltaSporePrintColor,
			deltaPopulation,
			deltaHabitat;

	deltaCapShape = pow(float(myMushroom.capShape - knownMushrooms.capShape), 2);
	deltaCapSurface = pow(float(myMushroom.capSurface - knownMushrooms.capSurface), 2);
	deltaCapColor = pow(float(myMushroom.capColor - knownMushrooms.capColor), 2);
	deltaBruises = pow(float(myMushroom.bruises - knownMushrooms.bruises), 2);
	deltaOdor = pow(float(myMushroom.odor - knownMushrooms.odor), 2);
	deltaGillAttachment = pow(float(myMushroom.gillAttachment - knownMushrooms.gillAttachment), 2);
	deltaGillSpacing = pow(float(myMushroom.gillSpacing - knownMushrooms.gillSpacing), 2);
	deltaGillSize = pow(float(myMushroom.gillSize - knownMushrooms.gillSize), 2);
	deltaGillColor = pow(float(myMushroom.gillColor - knownMushrooms.gillColor), 2);
	deltaStalkShape = pow(float(myMushroom.stalkShape - knownMushrooms.stalkShape), 2);
	deltaStalkRoot = pow(float(myMushroom.stalkRoot - knownMushrooms.stalkRoot), 2);
	deltaStalkSurfaceAboveRing = pow(float(myMushroom.stalkSurfaceAboveRing - knownMushrooms.stalkSurfaceAboveRing), 2);
	deltaStalkSurfaceBelowRing = pow(float(myMushroom.stalkSurfaceBelowRing - knownMushrooms.stalkSurfaceBelowRing), 2);
	deltaStalkColorAboveRing = pow(float(myMushroom.stalkColorAboveRing - knownMushrooms.stalkColorAboveRing), 2);
	deltaStalkColorBelowRing = pow(float(myMushroom.stalkColorBelowRing - knownMushrooms.stalkColorBelowRing), 2);
	deltaVeilType = pow(float(myMushroom.veilType - knownMushrooms.veilType), 2);
	deltaVeilColor = pow(float(myMushroom.capSurface - knownMushrooms.capSurface), 2);
	deltaRingNumber = pow(float(myMushroom.veilColor - knownMushrooms.veilColor), 2);
	deltaRingType = pow(float(myMushroom.ringType - knownMushrooms.ringType), 2);
	deltaSporePrintColor = pow(float(myMushroom.sporePrintColor - knownMushrooms.sporePrintColor), 2);
	deltaPopulation = pow(float(myMushroom.population - knownMushrooms.population), 2);
	deltaHabitat = pow(float(myMushroom.habitat - knownMushrooms.habitat), 2);
	/*/VVV ALL ONE LINE VVV/*/
	{
	total = pow(float(deltaCapShape + deltaCapSurface + deltaCapColor + deltaBruises + deltaOdor + deltaGillAttachment +
		deltaGillSpacing + deltaGillSize + deltaGillColor + deltaStalkShape + deltaStalkRoot + deltaStalkSurfaceAboveRing +
		deltaStalkSurfaceBelowRing + deltaStalkColorAboveRing + deltaStalkColorBelowRing + deltaVeilType + deltaVeilColor +
		deltaRingNumber + deltaRingType + deltaSporePrintColor + deltaPopulation + deltaHabitat), float(0.5));
	}

	return total;

}