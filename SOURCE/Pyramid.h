#pragma once
#include "Util/Juce_Header.h"

class Block;

class Pyramid
{
public:
    Pyramid();
    ~Pyramid();

    void processBlock(juce::AudioBuffer<float>& buffer);

    void addBlock(Block newBlock);

    juce::OwnedArray<Block>& getBlocks()
    {
        return mBlocks;
    }
private:
    juce::OwnedArray<Block> mBlocks;
};