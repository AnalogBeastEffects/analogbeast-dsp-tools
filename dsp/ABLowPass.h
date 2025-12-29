/*
  ==============================================================================

    ABLowPass.h
    Created: 29 Dec 2025 10:59:31am
    Author:  nonox
    Filtre Low Pass simple -6db/octaves type RC
  ==============================================================================
*/

#pragma once
#include "ABFilterIIR1Pole.h"

class ABLowPass : public ABFilterIIR1Pole
{
public:
    float processSample(float sample);
};