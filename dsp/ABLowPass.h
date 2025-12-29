/*
  ==============================================================================

    ABLowPass.h
    Created: 29 Dec 2025 10:59:31am
    Author: Arnaud DUBREUIL / Analog BEAST
    Simple lowPass Filter IIR -6db/oct RC type
  ==============================================================================
*/

#pragma once
#include "ABFilterIIR1Pole.h"

class ABLowPass : public ABFilterIIR1Pole
{
public:
    float processSample(float sample);
};
