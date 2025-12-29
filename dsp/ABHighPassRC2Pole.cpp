/*
  ==============================================================================

    ABHighPassRC2Pole.h
    Created: 25 Dec 2025 5:57:37pm
    Author: Arnaud DUBREUIL / Analog BEAST
    Double  highPass Filter IIR -12db/oct RC type
  ==============================================================================
*/

#include "ABHighPassRC2Pole.h"
void ABHighPassRC2Pole::prepare(float sampleRate, float cutoffHz)
{
    filter1.prepare(sampleRate, cutoffHz);
    filter2.prepare(sampleRate, cutoffHz);
}

float ABHighPassRC2Pole::processSample(float x)
{
    x = filter1.processSample(x);
    x = filter2.processSample(x);
    return x;
}

void ABHighPassRC2Pole::reset()
{
    filter1.reset();
    filter2.reset();
}