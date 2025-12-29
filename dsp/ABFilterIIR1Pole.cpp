/*
  ==============================================================================

    ABFilterIIR1Pole.cpp
    Created: 29 Dec 2025 12:17:02pm
    Author: Arnaud DUBREUIL / Analog BEAST
    IIR 1 pole RC Type
  ==============================================================================
*/

#include "ABFilterIIR1Pole.h"
#include <cmath>

void ABFilterIIR1Pole::prepare(float sampleRate, float cutoffHz)
{
    const float x = std::exp(-2.0f * 3.14159265359f * cutoffHz / sampleRate);

    // HPF 1-pole Coeff
    a0 = (1.0f + x) * 0.5f;
    b1 = x;

    reset();
}

float ABFilterIIR1Pole::processSample(float x)
{
    const float y = z1 + a0 * (x - z1);

    x1 = x;
    z1 = y;
    return y;
}

void ABFilterIIR1Pole::reset()
{
    x1 = 0.0f;
    z1 = 0.0f;
}
