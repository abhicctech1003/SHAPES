#include "../headers/Rectangle.h"
using namespace std;

Rectangle::Rectangle() :
mAreaRec(0), mPerimeterRec(0)
{
    
}

Rectangle::~Rectangle() 
{
    
}

void Rectangle::dimensionOfRectangle(int len, int wid)
{
    // Assign length & breadth
    this->mLengthRec = len;
    this->mBreadthRec = wid;

    mAreaRec = mLengthRec * mBreadthRec; // Formula for area of rectangle
    mPerimeterRec = 2 * (mLengthRec + mBreadthRec); // Formula for perimeter of rectangle
}

 int Rectangle::areaOfRectangle()
 {
    return mAreaRec;
 }

int Rectangle::perimeterOfRectangle()
{
    return mPerimeterRec;
}
