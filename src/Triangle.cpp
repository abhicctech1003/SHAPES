#include "../headers/Triangle.h"
using namespace std;

Triangle::Triangle() : mAreaTri(0.0f), mPerimeterTri(0){}

Triangle::~Triangle() {}

void Triangle::dimensionTriangle(double s1, double s2, double s3, double ht)
{
    // Assign length & breadth
    this->mSideOneTri = s1;
    this->mSideTwoTri = s2;
    this->mBaseTri = s3;
    this->mHeightTri = ht;

    mAreaTri = (float)((0.5) * mBaseTri * mHeightTri);
    mPerimeterTri = mSideOneTri + mSideTwoTri + mBaseTri;
}

 double Triangle::areaOfTriangle()
 {
    return mAreaTri;
 }

double Triangle::perimeterOfTriangle()
{
    return mPerimeterTri;
}
