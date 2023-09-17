#include "PyramidBlock.h"

PyramidBlock::PyramidBlock()
{

}

void PyramidBlock::paint(juce::Graphics& g)
{
    auto blockRect = this->getLocalBounds().toFloat();
    g.setColour(juce::Colours::grey);
    g.drawRoundedRectangle(blockRect, 1.f, 1.f);
    g.setColour(juce::Colours::black);
    g.fillRoundedRectangle(blockRect, 1.f);
}


void PyramidBlock::resized()
{

}