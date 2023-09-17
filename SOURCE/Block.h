#pragma once
#include "Util/Juce_Header.h"

class Block
{
public:
    Block(int row, int index)
    : mRow(row)
    , mIndex(index)
    {

    }
    ~Block(){}

    void setActive(bool isActive) { mIsActive = isActive;  }


    int getRow()
    {
        return mRow;
    }

    int getIndex()
    {
        return mIndex;
    }

    bool isActive() { return mIsActive; }

private:
    int mRow = 0;
    int mIndex = 0;
    bool mIsActive = false;
};