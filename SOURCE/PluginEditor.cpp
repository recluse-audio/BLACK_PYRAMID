#include "PluginProcessor.h"
#include "PluginEditor.h"
#include "Pyramid.h"
#include "PyramidView.h"

//==================================
PluginEditor::PluginEditor (PluginProcessor& p)
: AudioProcessorEditor (&p)
, mProcessor (p)
{
	setSize(400, 400);

	mPyramidView = std::make_unique<PyramidView>();
	addAndMakeVisible(mPyramidView.get());
	mPyramidView->setBounds(50, 50, 300, 300);
}

//=================================
PluginEditor::~PluginEditor()
{

}

//==============================================================================
void PluginEditor::paint (juce::Graphics& g)
{
	g.fillAll(juce::Colours::whitesmoke);
}


//=================================
void PluginEditor::resized()
{

}
