/*
  ==============================================================================

    ABHighPass.cpp
    Created: 25 Dec 2025 5:58:03pm
    Author: Arnaud DUBREUIL / Analog BEAST
    Simple highPass Filter IIR -6db/oct RC type
  ==============================================================================
*/

#include "ABHighPass.h"

void ABHighPass::prepare(float sampleRate, float cutoffHz)
{
    const float x = std::exp(-2.0f * 3.14159265359f * cutoffHz / sampleRate);
    // LPF 1-pole Coeff
    a0 = 1.0f - x;
    reset();
}

float ABHighPass::processSample(float x)
{
    z1 += a0 * (x - z1);
    return x-z1;
}

void ABHighPass::reset()
{
    z1 = 0.0f;
}