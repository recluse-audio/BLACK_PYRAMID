#include "Pyramid.h"
#include "Block.h"

Pyramid::Pyramid()
{
    mBlocks.add(std::make_unique<Block>(0, 0));

    mBlocks.add(std::make_unique<Block>(1, 0));
    mBlocks.add(std::make_unique<Block>(1, 1));

    mBlocks.add(std::make_unique<Block>(2, 0));
    mBlocks.add(std::make_unique<Block>(2, 1));
    mBlocks.add(std::make_unique<Block>(2, 2));

}

Pyramid::~Pyramid()
{

}

void Pyramid::processBlock(juce::AudioBuffer<float>& buffer)
{

}

void Pyramid::addBlock(Block)
{
}
