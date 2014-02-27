/*
 *
 * Mushroom structs and enum types based off of agaricus-lepiota.names
 *
 * TODO: Properly weight enums
*/


#ifndef __MUSHROOM__
#define __MUSHROOM__

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
	CSU_GROOVES,
	CSU_SCALY,
	CSU_SMOOTH,
	CSU_CAP_SURFACE_COUNT
};

enum _cap_color{
	CC_BROWN = 0,
	CC_BUFF,
	CC_CINNAMON,
	CC_GRAY,
	CC_GREEN, 
	CC_PINK,
	CC_PURPLE,
	CC_RED,
	CC_WHITE,
	CC_YELLOW,
	CC_COUNT
};

enum _bruises{
	B_BRUISED = 0,
	B_NOT_BRUISED,
	B_COUNT
};

enum _odor{
	O_ALMOND = 0,
	O_ANISE,
	O_CREOSOTE,
	O_FISHY,
	O_FOUL,
	O_MUSTY,
	O_NONE,
	O_PUNGENT,
	O_SPICE,
	O_COUNT,
};

enum _gill_attachment{
	GA_ATTACHED = 0,
	GA_DECENDING,
	GA_FREE,
	GA_NOTCHED,
	GA_COUNT
};

enum _gill_spacing{
	GSP_CLOSE = 0,
	GSP_CROWDED,
	GSP_DISTANT,
	GSP_COUNT
};

enum _gill_size{
	GSI_BROAD,
	GSI_NARROW,
	GSI_COUNT
};

enum _gill_color{
	GC_BLACK,
	GC_BROWN,
	GC_BUFF,
	GC_CHOCOLATE,
	GC_GRAY,
	GC_GREEN,
	GC_ORANGE,
	GC_PINK,
	GC_PURPLE,
	GC_RED,
	GC_WHITE,
	GC_YELLOW,
	GC_COUNT
};

enum _stalk_shape{
	SS_ENLARGING,
	SS_TAPERING,
	SS_COUNT
};

enum _stalk_root{
	SR_BULBOUS,
	SR_CLUB,
	SR_CUP,
	SR_EQUAL,
	SR_RHIZOMORPHS,
	SR_ROOTED,
	SR_MISSING,
	SR_COUNT
};

enum _stalk_surface_above_ring{
	SSAR_FIBROUS,
	SSAR_SCALLY,
	SSAR_SILKY,
	SSAR_SMOOTH,
	SSAR_COUNT
};

enum _stalk_surface_below_ring{
	SSBR_FIBROUS,
	SSBR_SCALLY,
	SSBR_SILKY,
	SSBR_SMOOTH,
	SSBR_COUNT
};

enum _stalk_color_above_ring{
	SCAR_BROWN = 0,
	SCAR_BUFF,
	SCAR_CINNAMON,
	SCAR_GRAY,
	SCAR_ORANGE, 
	SCAR_PINK,
	SCAR_RED,
	SCAR_WHITE,
	SCAR_YELLOW,
	SCAR_COUNT
};

enum _stalk_color_below_ring{
	SCBR_BROWN = 0,
	SCBR_BUFF,
	SCBR_CINNAMON,
	SCBR_GRAY,
	SCBR_ORANGE, 
	SCBR_PINK,
	SCBR_RED,
	SCBR_WHITE,
	SCBR_YELLOW,
	SCBR_COUNT
};

enum _veil_type{
	VT_PARTIAL,
	VT_UNIVERSAL,
	VT_COUNT
};

enum _veil_color{
	VC_BROWN,
	VC_ORANGE,
	VC_WHITE,
	VC_YELLOW,
	VC_COUNT
};

enum _ring_number{
	RN_NONE,
	RN_ONE,
	RN_TWO,
	RN_COUNT
};

enum _ring_type{
	RT_COBWEBBY,
	RT_EVANESCENT,
	RT_FLARING,
	RT_LARGE,
	RT_NONE,
	RT_PENDANT,
	RT_SHEATHING,
	RT_ZONE,
	RT_COUNT
};

enum _spore_print_color{
	SPC_BLACK,
	SPC_BROWN,
	SPC_BUFF,
	SPC_CHOCOLATE,
	SPC_GREEN,
	SPC_ORANGE,
	SPC_PURPLE,
	SPC_WHITE,
	SPC_YELLOW,
	SPC_COUNT
};

enum _population{
	P_ABUNDANT,
	P_CLUSTERED,
	P_NUMEROUS,
	P_SCATTERED,
	P_SEVERAL,
	P_SOLITARY,
	P_COUNT
};

enum _habitat{
	H_GRASSES,
	H_LEAVES,
	H_MEADOW,
	H_PATHS,
	H_URBAN,
	H_WASTE,
	H_WOODS,
	H_COUNT
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

#endif