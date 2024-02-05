#include<cmath>
#include "../headers/Circle.h"
using namespace std;

Circle::Circle() : 
mAreaCir(0.0f), mCircumferenceCir(0.0f)
{
    
}

Circle::~Circle()
{

}

void Circle::dimensionCircle(float rad)
{
    // Assign radius
    this->mRadiusCir = rad;

    mAreaCir = M_PI * pow(mRadiusCir, 2); // Formula for area of circle
    mCircumferenceCir = 2 * M_PI * mRadiusCir; // Formula for perimeter of circle
}

float Circle::areaOfCircle()
 {
    return mAreaCir;
 }

float Circle::circumferenceOfCircle()
{
    return mCircumferenceCir;
}
