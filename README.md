# AnalogBeast DSP Tools

**AnalogBeast DSP Tools** is a collection of real-time safe DSP building blocks and JUCE-based UI components designed for modern audio plugins and audio applications.

The goal of this project is to provide **clean, reusable, and well-documented tools** for building high-quality audio effects, with a focus on **analog-inspired behavior**, **performance**, and **clarity**.

---

## Features

### DSP
- Sample-accurate gain processing with parameter smoothing
- Zero-allocation DSP modules suitable for real-time audio
- Classic building blocks: Gain, clipping / distortion ,filters, dynamics, sag, slew
- Sample-rate independent designs
- Designed to be easily unit-tested and reused outside of JUCE

### UI (JUCE)
- Reusable JUCE UI components (knobs, sliders)
- Custom LookAndFeel inspired by analog hardware
- Clear separation between DSP and presentation

---

## Design Philosophy

- **Real-time first**  
  No memory allocation, no locks, no surprises in the audio thread.

- **Separation of concerns**  
  Core DSP code has **no JUCE dependency**. JUCE is used only for UI, plugin wrappers, and examples.

- **Readable DSP**  
  Code is written to be understood, not just to be fast.

- **Analog-inspired, not emulated**  
  The focus is on musical behavior and usability rather than circuit-level modeling.

---

## Repository Structure
analogbeast-dsp-tools/
├── dsp/ # Core DSP modules (framework-agnostic)
├── ui/ # JUCE UI components
├── juce/ # JUCE helpers and plugin wrappers
├── examples/ # Example plugins and test applications
└── docs/ # Documentation and technical articles
