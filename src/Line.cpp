#include<cmath>
#include "../headers/Line.h"
using namespace std;

Line::Line() : 
mLengthOfLine(0)
{
    
}

Line::~Line()
{
    
}

void Line::dimensionLine(int cord1x, int cord1y, int cord2x, int cord2y)
{
    // Assign length & breadth
    this->mPoint1x = cord1x;
    this->mPoint1y = cord1y;
    this->mPoint2x = cord2x;
    this->mPoint2y = cord2y;

    // Formula for length of line
    mLengthOfLine = sqrt(pow((mPoint2x - mPoint1x), 2) + pow((mPoint2y - mPoint1y), 2));
}

int Line::lineLength()
{
    return mLengthOfLine;
}
