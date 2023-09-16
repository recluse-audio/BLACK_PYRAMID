#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
PluginEditor::PluginEditor (PluginProcessor& p)
: AudioProcessorEditor (&p)
, mProcessor (p)
{
	setSize(400, 400);
}

PluginEditor::~PluginEditor()
{
}

//==============================================================================
void PluginEditor::paint (juce::Graphics& g)
{
	this->fillAll(juce::Colours::red);
}


//=================================
void PluginEditor::resized()
{

}
