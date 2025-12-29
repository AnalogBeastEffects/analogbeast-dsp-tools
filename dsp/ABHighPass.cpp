/*
  ==============================================================================

    ABHighPass.cpp
    Created: 25 Dec 2025 5:58:03pm
    Author: Arnaud DUBREUIL / Analog BEAST
    Simple highPass Filter IIR -6db/oct RC type
  ==============================================================================
*/

#include "ABHighPass.h"

float ABHighPass::processSample(float x)
{
    //const float y = a0 * (x - x1) + b1 * z1;
    const float lp = ABFilterIIR1Pole::processSample(x);
    return x - lp;
}
