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
    // LPF 1-pole Coeff
    a0 = 1.0f - x;
    reset();
}

float ABFilterIIR1Pole::processSample(float x)
{
    z1 += a0 * (x - z1);
    return z1;
}

void ABFilterIIR1Pole::reset()
{
    x1 = 0.0f;
    z1 = 0.0f;
}
