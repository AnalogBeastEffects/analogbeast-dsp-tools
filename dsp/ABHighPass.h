/*
  ==============================================================================

    ABHighPass.h
    Created: 25 Dec 2025 5:57:37pm
    Author:  nonox
    Filtre High Pass simple -6db/octaves type RC
  ==============================================================================
*/

#pragma once
#include "ABFilterIIR1Pole.h"
class ABHighPass : public ABFilterIIR1Pole
{
public :
    float processSample(float sample);
};