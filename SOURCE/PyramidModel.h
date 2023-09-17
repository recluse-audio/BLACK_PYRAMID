#pragma once
#include "Util/Juce_Header.h"

struct PyramidBlockModel
{
    PyramidBlockModel(bool active, int row, int index)
    {
        mIsActive = active;
        mRow = row;
        mIndex = index;
    }
    bool mIsActive = false;
    int mRow = 0;
    int mIndex = 0;
};

struct PyramidModel
{
    void addBlock(PyramidBlockModel newBlock)
    {
        int row = newBlock.mRow;
        int index = newBlock.mIndex;

        auto blockRow = mBlockModel.get()
    }

    juce::Array<juce::Array<PyramidBlockModel>> mBlockModel;
};

class PyramidFactory
{
public:
    PyramidFactory()
    {

    }

    PyramidModel createPyramid(int numRows)
    {
        PyramidModel model;

        for(int i = 0; i < numRows; i++)
        {

        }
    }

private:

};