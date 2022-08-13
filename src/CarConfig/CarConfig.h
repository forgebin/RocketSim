#pragma once
#include "../BaseInc.h"

struct WheelPairConfig {
	// Radius of both wheels
	float wheelRadius;

	// How far out the suspension rests
	float suspensionRestLength;

	// Where the wheel actually connects (suspension start position)
	// NOTE: Y should ALWAYS be positive. It will be automatically negated when creating the second wheel. 
	Vec connectionPointOffset;
};

struct CarConfig {
	// Full size of hitbox (NOT the half-size/extent)
	Vec hitboxSize;

	// Offset of the hitbox (from it's origin)
	// NOTE: Does not effect car's center of mass, that's always at local (0,0,0)
	Vec hitboxPosOffset;

	WheelPairConfig frontWheels, backWheels;
};

// Global car configurations for all car type presets
// NOTE: CAR_CONFIG_PLANK is the batmobile preset
// TODO: Make sure these are all right (defined in .cpp)
const extern CarConfig
	CAR_CONFIG_OCTANE, CAR_CONFIG_DOMINUS, CAR_CONFIG_PLANK, CAR_CONFIG_BREAKOUT, CAR_CONFIG_HYBRID, CAR_CONFIG_MERC;