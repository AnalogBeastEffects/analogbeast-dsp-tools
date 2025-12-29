/*
  ==============================================================================

    ABHighPass.h
    Created: 25 Dec 2025 5:57:37pm
    Author: Arnaud DUBREUIL / Analog BEAST
    Simple lowPass Filter IIR -6db/oct RC type
  ==============================================================================
*/

#pragma once
#include "ABFilterIIR1Pole.h"
class ABHighPass : public ABFilterIIR1Pole
{
public :
    float processSample(float sample);
};
