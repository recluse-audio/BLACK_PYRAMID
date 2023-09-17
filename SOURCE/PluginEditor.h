#pragma once
#include "PluginProcessor.h"


//==============================================================================
class PluginEditor  : public juce::AudioProcessorEditor
{
public:
    explicit PluginEditor (PluginProcessor&);
    ~PluginEditor() override;

    void paint (juce::Graphics&) override;
    void resized() override;
	
private:
	PluginProcessor& mProcessor;


    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (PluginEditor)
};
