/*
  ==============================================================================

    ABLowPass.cpp
    Created: 29 Dec 2025 10:59:16am
    Author:  nonox
    Filtre Low Pass simple -6db/octaves type RC
  ==============================================================================
*/

#include "ABLowPass.h"

float ABLowPass::processSample(float x)
{
    return ABFilterIIR1Pole::processSample(x);
}
