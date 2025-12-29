/*
  ==============================================================================

    ABFilterIIR1Pole.h
    Created: 29 Dec 2025 12:16:30pm
    Author: Arnaud DUBREUIL / Analog BEAST
    IIR 1 pole RC Type
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