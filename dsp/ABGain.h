/*
  ==============================================================================

    ABGain.h
    Created: 14 May 2025 8:52:38pm
    Author: Arnaud DUBREUIL / Analog BEAST
	Clipping tools: asymmetric soft clipping and hard clipping
  ==============================================================================
*/
#pragma once
#include <cmath>

class ABGain 
{
public:
	float gain(float input, float gainDb);
	float distortionWithGain(float input, float gainDb, float threshold);
	float hardClip(float input, float threshold, float postSlope = 0.12f);
	float softClippingAsym(float input, float drive = 1.0f, float pos = 0.7f, float neg = 1.3f);
};