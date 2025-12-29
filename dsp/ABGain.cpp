/*
  ==============================================================================

    ABGain.cpp
    Created: 14 May 2025 8:52:38pm
    Author: Arnaud DUBREUIL / Analog BEAST
	Clipping tools: asymmetric soft clipping and hard clipping
  ==============================================================================
*/
#include "ABGain.h"
float ABGain::softClippingAsym(float input, float drive, float pos, float neg)
{
	if (drive > 1.0f)
	{
		if (drive > 30.0f)
			drive = 30.0f;

		input *= drive;
	}
	// Asymmetric soft clipping:
	// 'pos' and 'neg' can be set to slightly different values.
	// Even with near-symmetric values (e.g. 0.62f / 0.67f),
	// this produces a more natural clipping than perfectly symmetric thresholds.g more natural than 6.2f - 6.2f)
	if (input > pos)
	{
		input = pos + (input - pos) / (1.0f + std::pow((input - pos), 2.0f));
	}
	else if (input < -neg)
	{
		input = -neg + (input + neg) / (1.0f + std::pow((input + neg), 2.0f));
	}

	return input;
}
// postSlope avoids a flat horizontal wall and allows the signal
// to keep moving after the clipping threshold
float ABGain::hardClip(float input, float threshold, float postSlope)
{
	if (input > threshold)  return threshold + (input - threshold) * postSlope;
	if (input < -threshold) return -threshold + (input + threshold) * postSlope;
	return input;
}
// Helper function (not intended for use in the audio process loop).
// Prefer applying gain externally (e.g. Juce::decibelsToGain)
// and calling hardClip() directly.
float ABGain::distortionWithGain(float input, float gainDb, float threshold)
{
	input = ABGain::gain(input, gainDb);
	input = ABGain::hardClip(input, threshold);
	return input;
}
// avoid ABGain::gain in process block, I don't use this funcion , use instead a Juce::decibelTogain in the process block or in update filter
float ABGain::gain(float input, float gainDb)
{
	float vol = pow(10, gainDb / 20.0f);
	return input * vol;
}
 