#include <cmath>
#include "../headers/Ellipse.h"
using namespace std;

Ellipse::Ellipse() : 
mAreaEll(0), mCircumferenceEll(0)
{
    
}

Ellipse::~Ellipse()
{

}

void Ellipse::dimensionEllipse(float majorAx, float minorAX)
{
    // Assign length & breadth
    this->mMajorAxisEll = majorAx;
    this->mMinorAxisEll = minorAX;

    mAreaEll = M_PI * mMajorAxisEll * mMinorAxisEll; // Formula for area of ellipse
    mCircumferenceEll = M_PI * (3 * (mMajorAxisEll + mMinorAxisEll) - sqrt((3 * mMajorAxisEll + mMinorAxisEll) * (mMajorAxisEll + 3 * mMinorAxisEll))); // Formula for perimeter of ellipse

}
float Ellipse::areaOfEllipse()
 {
    return mAreaEll;
 }

float Ellipse::circumferenceOfEllipse()
{
    return mCircumferenceEll;
}
