#pragma once
#include "Util/Juce_Header.h"

struct PyramidBlockModel
{
    bool isActive = false;
    int row = -1;
    int index = -1;
};

struct PyramidModel
{
    void addBlock(PyramidBlock)
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