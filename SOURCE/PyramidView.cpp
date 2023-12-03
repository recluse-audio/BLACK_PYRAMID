#include "PyramidView.h"
#include "Pyramid.h"
#include "Block.h"
#include "BlockView.h"

PyramidView::PyramidView()
{

}

void PyramidView::paint(juce::Graphics& g)
{

}

void PyramidView::resized()
{

}

void PyramidView::drawPyramid(Pyramid& pyramid)
{
    const int blockHeight = 20;
    const int blockWidth = 30;

    auto blocks = pyramid.getBlocks();
    for(auto block : blocks)
    {
        auto blockView = std::make_unique<BlockView>();
        addAndMakeVisible(blockView.get());

        const int x = block->getRow() * blockWidth;
        const int y = block->getIndex() * blockHeight;
        blockView->setBounds( x, y, blockHeight, blockWidth );
    }
}