/*
  ==============================================================================

    ABHighPassRC2Pole.h
    Created: 25 Dec 2025 5:57:37pm
    Author: Arnaud DUBREUIL / Analog BEAST
    Double highPass Filter IIR -12db/oct RC type
  ==============================================================================
*/

#pragma once
#include "ABHighPass.h"
class ABHighPassRC2Pole
{
public:
    void reset();
    void prepare(float sampleRate, float cutoffHz);
    float processSample(float sample);
private:
    ABHighPass filter1;
    ABHighPass filter2;
};