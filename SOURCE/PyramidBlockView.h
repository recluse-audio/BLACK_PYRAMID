
#pragma once
#include "Util/Juce_Header.h"

class PyramidBlockView : public juce::Component
{
public:
    PyramidBlockView();

    void paint(juce::Graphics& g) override;
    void resized() override;

private:

};