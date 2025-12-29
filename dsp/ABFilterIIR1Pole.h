/*
  ==============================================================================

    ABFilterIIR1Pole.h
    Created: 29 Dec 2025 12:16:30pm
    Author:  nonox
    IIR 1 pole type RC
  ==============================================================================
*/

#pragma once

class ABFilterIIR1Pole
{
public :
    void reset();
    void prepare(float sampleRate, float cutoffHz);
    float processSample(float sample);
private :
    float a0 = 0.0f;
    float b1 = 0.0f;
    float x1 = 0.0f;
    float z1 = 0.0f;
};