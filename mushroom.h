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

	CSH_BELL    = 5,
	CSH_CONICAL = 5,
	CSH_CONVEX  = 5,
	CSH_FLAT    = 5,
	CSH_KNOBBED = 5,
	CSH_SUNKEN  = 5
};

enum _cap_surface{

	CSU_FIBROUS = 5,
	CSU_GROOVES = 5,
	CSU_SCALY   = 5,
	CSU_SMOOTH  = 5
};

enum _cap_color{
	CC_BROWN    = 1,
	CC_BUFF     = 1,
	CC_CINNAMON = 1,
	CC_GRAY     = 1,
	CC_GREEN    = 1, 
	CC_PINK     = 1,
	CC_PURPLE   = 1,
	CC_RED      = 1,
	CC_WHITE    = 9,
	CC_YELLOW   = 1
};

enum _bruises{
	B_BRUISED     = 5,
	B_NOT_BRUISED = 5
};

enum _odor{
	O_ALMOND   = 1,
	O_ANISE    = 1,
	O_CREOSOTE = 9,
	O_FISHY    = 9,
	O_FOUL     = 9,
	O_MUSTY    = 9,
	O_NONE     = 5,
	O_PUNGENT  = 9,
	O_SPICE    = 9
};

enum _gill_attachment{
	GA_ATTACHED  = 0,
	GA_DECENDING = 1,
	GA_FREE      = 2,
	GA_NOTCHED   = 3
};

enum _gill_spacing{
	GSP_CLOSE   = 5,
	GSP_CROWDED = 5,
	GSP_DISTANT = 5
};

enum _gill_size{
	GSI_BROAD  = 5,
	GSI_NARROW = 5
};

enum _gill_color{
	GC_BLACK     = 5,
	GC_BROWN     = 5,
	GC_BUFF      = 5,
	GC_CHOCOLATE = 5,
	GC_GRAY      = 5,
	GC_GREEN     = 5,
	GC_ORANGE    = 5,
	GC_PINK      = 5,
	GC_PURPLE    = 5,
	GC_RED       = 5,
	GC_WHITE     = 5,
	GC_YELLOW    = 5
};

enum _stalk_shape{
	SS_ENLARGING = 5,
	SS_TAPERING  = 5
};

enum _stalk_root{
	SR_BULBOUS     = 5,
	SR_CLUB        = 5,
	SR_CUP         = 5,
	SR_EQUAL       = 5,
	SR_RHIZOMORPHS = 5,
	SR_ROOTED      = 5,
	SR_MISSING     = 5
};

enum _stalk_surface_above_ring{
	SSAR_FIBROUS = 1,
	SSAR_SCALLY  = 9,
	SSAR_SILKY   = 1,
	SSAR_SMOOTH  = 1
};

enum _stalk_surface_below_ring{
	SSBR_FIBROUS = 5,
	SSBR_SCALLY  = 5,
	SSBR_SILKY   = 5,
	SSBR_SMOOTH  = 5
};

enum _stalk_color_above_ring{
	SCAR_BROWN    = 1,
	SCAR_BUFF     = 5,
	SCAR_CINNAMON = 5,
	SCAR_GRAY     = 5,
	SCAR_ORANGE   = 5, 
	SCAR_PINK     = 5,
	SCAR_RED      = 5,
	SCAR_WHITE    = 5,
	SCAR_YELLOW   = 5
};

enum _stalk_color_below_ring{
	SCBR_BROWN    = 5,
	SCBR_BUFF     = 5,
	SCBR_CINNAMON = 5,
	SCBR_GRAY     = 5,
	SCBR_ORANGE   = 5, 
	SCBR_PINK     = 5,
	SCBR_RED      = 5,
	SCBR_WHITE    = 5,
	SCBR_YELLOW   = 5
};

enum _veil_type{
	VT_PARTIAL   = 5,
	VT_UNIVERSAL = 5
};

enum _veil_color{
	VC_BROWN  = 5,
	VC_ORANGE = 5,
	VC_WHITE  = 5,
	VC_YELLOW = 5
};

enum _ring_number{
	RN_NONE = 5,
	RN_ONE  = 5,
	RN_TWO  = 5
};

enum _ring_type{
	RT_COBWEBBY   = 5,
	RT_EVANESCENT = 5,
	RT_FLARING    = 5,
	RT_LARGE      = 5,
	RT_NONE       = 5,
	RT_PENDANT    = 5,
	RT_SHEATHING  = 5,
	RT_ZONE       = 5
};

enum _spore_print_color{
	SPC_BLACK     = 1,
	SPC_BROWN     = 1,
	SPC_BUFF      = 1,
	SPC_CHOCOLATE = 1,
	SPC_GREEN     = 9,
	SPC_ORANGE    = 1,
	SPC_PURPLE    = 1,
	SPC_WHITE     = 1,
	SPC_YELLOW    = 1
};

enum _population{
	P_ABUNDANT  = 1,
	P_CLUSTERED = 9,
	P_NUMEROUS  = 1,
	P_SCATTERED = 1,
	P_SEVERAL   = 1,
	P_SOLITARY  = 1
};

enum _habitat{
	H_GRASSES = 1,
	H_LEAVES  = 9,
	H_MEADOW  = 1,
	H_PATHS   = 1,
	H_URBAN   = 1,
	H_WASTE   = 1,
	H_WOODS   = 1
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