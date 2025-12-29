/*
  ==============================================================================

    ABHighPass.cpp
    Created: 25 Dec 2025 5:58:03pm
    Author:  nonox
    Filtre High Pass simple -6db/octaves type RC
  ==============================================================================
*/

#include "ABHighPass.h"

float ABHighPass::processSample(float x)
{
    //const float y = a0 * (x - x1) + b1 * z1;
    const float lp = ABFilterIIR1Pole::processSample(x);
    return x - lp;
}