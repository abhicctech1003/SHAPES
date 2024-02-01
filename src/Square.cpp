#include <cmath>
#include "../headers/Square.h"
using namespace std;

Square::Square() : mAreaSquare(0), mPerimeterSquare(0){}

Square::~Square(){}

void Square::dimensionOfSquare(int side)
{
    // Assign length & breadth
    this->mSideSquare = side;

    mAreaSquare = pow(mSideSquare, 2);
    mPerimeterSquare = 4 * (mSideSquare);
}

 int Square::areaOfSquare()
 {
    return mAreaSquare;
 }

int Square::perimeterOfSquare()
{
    return mPerimeterSquare;
}
