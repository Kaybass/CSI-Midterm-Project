/* ***       Author:  Team Same
     *  Last Update:  February 25, 2014
     *        Class:  CSI-281
     *     Filename:  
     *			mushroom.h
     *  Description:
     *			contains types for mushrooms
     *  
     *  Certification of Authenticity:
     *     I certify that this assignment is entirely our own work.
     **********************************************************************/

#ifndef __MUSHROOM__
#define __MUSHROOM__


/*
 * Traits that show edibility are closer to 1 and traits that show non-edibility are closer to 9
*/

enum _cap_shape{

	CSH_BELL    = 0,
	CSH_CONICAL = 1,
	CSH_CONVEX  = 2,
	CSH_FLAT    = 3,
	CSH_KNOBBED = 4,
	CSH_SUNKEN  = 5
};

enum _cap_surface{

	CSU_FIBROUS = 0,
	CSU_GROOVES = 1,
	CSU_SCALY   = 2,
	CSU_SMOOTH  = 3
};

enum _cap_color{
	CC_BROWN    = 0,
	CC_BUFF     = 1,
	CC_CINNAMON = 2,
	CC_GRAY     = 3,
	CC_GREEN    = 4, 
	CC_PINK     = 5,
	CC_PURPLE   = 6,
	CC_RED      = 7,
	CC_WHITE    = 8,
	CC_YELLOW   = 9
};

enum _bruises{
	B_BRUISED     = 0,
	B_NOT_BRUISED = 1
};

enum _odor{
	O_ALMOND   = 0,
	O_ANISE    = 1,
	O_CREOSOTE = 2,
	O_FISHY    = 3,
	O_FOUL     = 4,
	O_MUSTY    = 5,
	O_NONE     = 6,
	O_PUNGENT  = 7,
	O_SPICE    = 8
};

enum _gill_attachment{
	GA_ATTACHED  = 0,
	GA_DECENDING = 1,
	GA_FREE      = 2,
	GA_NOTCHED   = 3
};

enum _gill_spacing{
	GSP_CLOSE   = 0,
	GSP_CROWDED = 1,
	GSP_DISTANT = 2
};

enum _gill_size{
	GSI_BROAD  = 0,
	GSI_NARROW = 1
};

enum _gill_color{
	GC_BLACK     = 0,
	GC_BROWN     = 1,
	GC_BUFF      = 2,
	GC_CHOCOLATE = 3,
	GC_GRAY      = 4,
	GC_GREEN     = 5,
	GC_ORANGE    = 6,
	GC_PINK      = 7,
	GC_PURPLE    = 8,
	GC_RED       = 9,
	GC_WHITE     = 10,
	GC_YELLOW    = 11
};

enum _stalk_shape{
	SS_ENLARGING = 0,
	SS_TAPERING  = 1
};

enum _stalk_root{
	SR_BULBOUS     = 0,
	SR_CLUB        = 1,
	SR_CUP         = 2,
	SR_EQUAL       = 3,
	SR_RHIZOMORPHS = 4,
	SR_ROOTED      = 5,
	SR_MISSING     = 6
};

enum _stalk_surface_above_ring{
	SSAR_FIBROUS = 0,
	SSAR_SCALLY  = 1,
	SSAR_SILKY   = 2,
	SSAR_SMOOTH  = 3
};

enum _stalk_surface_below_ring{
	SSBR_FIBROUS = 0,
	SSBR_SCALLY  = 1,
	SSBR_SILKY   = 2,
	SSBR_SMOOTH  = 3
};

enum _stalk_color_above_ring{
	SCAR_BROWN    = 0,
	SCAR_BUFF     = 1,
	SCAR_CINNAMON = 2,
	SCAR_GRAY     = 3,
	SCAR_ORANGE   = 4, 
	SCAR_PINK     = 5,
	SCAR_RED      = 6,
	SCAR_WHITE    = 7,
	SCAR_YELLOW   = 8
};

enum _stalk_color_below_ring{
	SCBR_BROWN    = 0,
	SCBR_BUFF     = 1,
	SCBR_CINNAMON = 2,
	SCBR_GRAY     = 3,
	SCBR_ORANGE   = 4, 
	SCBR_PINK     = 5,
	SCBR_RED      = 6,
	SCBR_WHITE    = 7,
	SCBR_YELLOW   = 8
};

enum _veil_type{
	VT_PARTIAL   = 0,
	VT_UNIVERSAL = 1
};

enum _veil_color{
	VC_BROWN  = 0,
	VC_ORANGE = 1,
	VC_WHITE  = 2,
	VC_YELLOW = 3
};

enum _ring_number{
	RN_NONE = 0,
	RN_ONE  = 1,
	RN_TWO  = 2
};

enum _ring_type{
	RT_COBWEBBY   = 0,
	RT_EVANESCENT = 1,
	RT_FLARING    = 2,
	RT_LARGE      = 3,
	RT_NONE       = 4,
	RT_PENDANT    = 5,
	RT_SHEATHING  = 6,
	RT_ZONE       = 7
};

enum _spore_print_color{
	SPC_BLACK     = 0,
	SPC_BROWN     = 1,
	SPC_BUFF      = 2,
	SPC_CHOCOLATE = 3,
	SPC_GREEN     = 4,
	SPC_ORANGE    = 5,
	SPC_PURPLE    = 6,
	SPC_WHITE     = 7,
	SPC_YELLOW    = 8
};

enum _population{
	P_ABUNDANT  = 0,
	P_CLUSTERED = 1,
	P_NUMEROUS  = 2,
	P_SCATTERED = 3,
	P_SEVERAL   = 4,
	P_SOLITARY  = 5
};

enum _habitat{
	H_GRASSES = 0,
	H_LEAVES  = 1,
	H_MEADOW  = 2,
	H_PATHS   = 3,
	H_URBAN   = 4,
	H_WASTE   = 5,
	H_WOODS   = 6
};

typedef struct{

	bool isEdible;
	_cap_shape capShape;
	_cap_surface capSurface;
	_cap_color capColor;
	_bruises bruises;
	_odor odor;
	_gill_attachment gillAttachment;
	_gill_spacing gillSpacing;
	_gill_size gillSize;
	_gill_color gillColor;
	_stalk_shape stalkShape;
	_stalk_root stalkRoot;
	_stalk_surface_above_ring stalkSurfaceAboveRing;
	_stalk_surface_below_ring stalkSurfaceBelowRing;
	_stalk_color_above_ring stalkColorAboveRing;
	_stalk_color_below_ring stalkColorBelowRing;
	_veil_type veilType;
	_veil_color veilColor;
	_ring_number ringNumber;
	_ring_type ringType;
	_spore_print_color sporePrintColor;
	_population population;
	_habitat habitat;

} data_Mushroom;

typedef struct{

	int kNum;
	_cap_shape capShape;
	_cap_surface capSurface;
	_cap_color capColor;
	_bruises bruises;
	_odor odor;
	_gill_attachment gillAttachment;
	_gill_spacing gillSpacing;
	_gill_size gillSize;
	_gill_color gillColor;
	_stalk_shape stalkShape;
	_stalk_root stalkRoot;
	_stalk_surface_above_ring stalkSurfaceAboveRing;
	_stalk_surface_below_ring stalkSurfaceBelowRing;
	_stalk_color_above_ring stalkColorAboveRing;
	_stalk_color_below_ring stalkColorBelowRing;
	_veil_type veilType;
	_veil_color veilColor;
	_ring_number ringNumber;
	_ring_type ringType;
	_spore_print_color sporePrintColor;
	_population population;
	_habitat habitat;

} input_Mushroom;

typedef struct{
	double distance;
	bool isEdible;
} near_Mushrooms;

#endif