/*
 *
 * Mushroom structs and enum types based off of agaricus-lepiota.names
 *
 * TODO: Properly weight enums
*/


#ifndef __MUSHROOM__
#define __MUSHROOM__

enum _cap_shape{

	BELL = 0,
	CONICAL = 1,
	CONVEX = 2,
	FLAT = 3,
	KNOBBED = 4,
	SUNKEN = 5
};

enum _cap_surface{

	FIBROUS = 0,
	GROOVES,
	SCALY,
	SMOOTH
};

enum _cap_color{

	BROWN = 0,
	BUFF,
	CINNAMON,
	GRAY,
	GREEN,
	PINK,
	PURPLE,
	RED,
	WHITE,
	YELLOW
};

enum _bruises{

	BRUISED = 0,
	NOT_BRUISED
};

enum _odor{

	ALOMND = 0,
	ANISE,
	CRESOTE,
	FISHY,
	FOUL,
	MUSTY,
	NONE,
	PUGENT,
	SPICY
};

enum _gill_attachment{

	ATTACHED,
	DESCENDING,
	FREE,
	NOTCHED
};

enum _gill_spacing{

	CLOSE,
	CROWDED,
	DISTANT
};

enum _gill_size{

	BROAD,
	NARROW
};

enum _gill_color{

	BLACK,
	BROWN,
	BUFF,
	CHOCOLATE,
	GRAY,
	GREEN,
	ORANGE,
	PINK,
	PURPLE,
	RED,
	WHITE,
	YELLOW
};

enum _stalk_shape{

	ENLARGING,
	TAPERING
};

enum _stalk_root{

	BULBOUS,
	CLUB,
	CUP,
	EQUAL,
	RHIZOMORPHS,
	ROOTED,
	MISSING
};

enum _stalk_surface_above_ring{

	FIBROUS,
	SCALY,
	SILKY,
	SMOOTH
};

enum _stalk_surface_below_ring{

	FIBROUS,
	SCALY,
	SILKY,
	SMOOTH
};

enum _stalk_color_above_ring{

	BROWN,
	BUFF,
	CINNAMON,
	GRAY,
	ORANGE,
	PINK,
	RED,
	WHITE,
	YELLOW
};

enum _stalk_color_below_ring{

	BROWN,
	BUFF,
	CINNAMON,
	GRAY,
	ORANGE,
	PINK,
	RED,
	WHITE,
	YELLOW
};

enum _veil_type{

	PARTIAL,
	UNIVERSAL
};

enum _veil_color{

	BROWN,
	ORANGE,
	WHITE,
	YELLOW
};

enum _ring_number{

	NONE,
	ONE,
	TWO
};

enum _ring_type{

	COBWEBBY,
	EVANESCENT,
	FLARING,
	LARGE,
	NONE,
	PENDANT,
	SHEATHING,
	ZONE
};

enum _spore_print_color{

	BLACK,
	BROWN,
	BUFF,
	CHOCOLATE,
	GREEN,
	ORANGE,
	PURPLE,
	WHITE,
	YELLOW
};

enum _population{

	ABUNDANT,
	CLUSTERED,
	NUMEROUS,
	SCATTERED,
	SEVERAL,
	SOLITARY
};

enum _habitat{

	GRASSES,
	LEAVES,
	MEADOWS,
	PATHS,
	URBAN,
	WASTE,
	WOODS
};

typedef struct{

	bool isEdible,
	_cap_shape capShape,
	_cap_surface capSurface,
	_cap_color capColor,
	_bruises bruises,
	_odor odor,
	_gill_attachment gillAttachment,
	_gill_spacing gillSpacing,
	_gill_size gillSize,
	_gill_color gillColor,
	_stalk_shape stalkShape,
	_stalk_root stalkRoot,
	_stalk_surface_above_ring stalkSurfaceAboveRing,
	_stalk_surface_below_ring stalkSurfaceBelowRing,
	_stalk_color_above_ring stalkColorAboveRing,
	_stalk_color_below_ring stalkColorBelowRing,
	_veil_type veilType,
	_veil_color veilColor,
	_ring_number ringNumber,
	_ring_type ringType,
	_spore_print_color sporePrintColor,
	_population population,
	_habitat habitat

} data_Mushroom;

typedef struct{

	_cap_shape capShape,
	_cap_surface capSurface,
	_cap_color capColor,
	_bruises bruises,
	_odor odor,
	_gill_attachment gillAttachment,
	_gill_spacing gillSpacing,
	_gill_size gillSize,
	_gill_color gillColor,
	_stalk_shape stalkShape,
	_stalk_root stalkRoot,
	_stalk_surface_above_ring stalkSurfaceAboveRing,
	_stalk_surface_below_ring stalkSurfaceBelowRing,
	_stalk_color_above_ring stalkColorAboveRing,
	_stalk_color_below_ring stalkColorBelowRing,
	_veil_type veilType,
	_veil_color veilColor,
	_ring_number ringNumber,
	_ring_type ringType,
	_spore_print_color sporePrintColor,
	_population population,
	_habitat habitat

} input_Mushroom;

#endif