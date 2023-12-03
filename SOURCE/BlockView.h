
#pragma once
#include "Util/Juce_Header.h"

class BlockView : public juce::Component
{
public:
    BlockView();

    void paint(juce::Graphics& g) override;

    void resized() override;

private:

};