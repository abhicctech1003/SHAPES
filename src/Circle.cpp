#include<cmath>
#include "../headers/Circle.h"
using namespace std;

Circle::Circle() : mAreaCir(0.0f), mCircumferenceCir(0.0f){}

Circle::~Circle()
{

}

void Circle::dimensionCircle(float rad)
{
    // Assign radius
    this->mRadiusCir = rad;

    mAreaCir = M_PI * pow(mRadiusCir, 2);
    mCircumferenceCir = 2 * M_PI * mRadiusCir;
}

float Circle::areaOfCircle()
 {
    return mAreaCir;
 }

float Circle::circumferenceOfCircle()
{
    return mCircumferenceCir;
}
