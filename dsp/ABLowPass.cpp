/*
  ==============================================================================

    ABLowPass.cpp
    Created: 29 Dec 2025 10:59:16am
    Author: Arnaud DUBREUIL / Analog BEAST
    Simple lowPass Filter IIR -6db/oct RC type
  ==============================================================================
*/

#include "ABLowPass.h"

float ABLowPass::processSample(float x)
{
    return ABFilterIIR1Pole::processSample(x);
}
