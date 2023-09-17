#pragma once
#include "Util/Juce_Header.h"

class PyramidBlockView;

class PyramidView : public juce::Component
{
public:
    PyramidView();
    void paint(juce::Graphics& g) override;
    void resized();

private:
    std::vector<PyramidBlockView> mBlockViews;
};