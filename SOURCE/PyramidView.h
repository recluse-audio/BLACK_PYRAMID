#pragma once
#include "Util/Juce_Header.h"

class Pyramid;

class PyramidView : public juce::Component
{
public:
    PyramidView();
    void paint(juce::Graphics& g) override;
    void resized();

    void drawPyramid(Pyramid& pyramid);
private:

};