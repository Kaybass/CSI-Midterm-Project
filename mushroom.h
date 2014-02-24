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

};

enum _bruises{

};

enum _odor{

};

enum _gill_attachment{

};

enum _gill_spacing{

};

enum _gill_size{

};

enum _gill_color{

};

enum _stalk_shape{

};

enum _stalk_root{

};

enum _stalk_surface_above_ring{

};

enum _stalk_surface_below_ring{

};

enum _stalk_color_above_ring{

};

enum _stalk_color_below_ring{

};

enum _veil_type{

};

enum _veil_color{

};

enum _ring_number{

};

enum _ring_type{

};

enum _spore_print_color{

};

enum _population{

};

enum _habitat{

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