#include "../headers/Triangle.h"
using namespace std;

Triangle::Triangle() : areaTri(0.0f), perimeterTri(0){}

void Triangle::dimTri(double s1, double s2, double s3, double ht)
{
    // Assign length & breadth
    this->sideOneTri = s1;
    this->sideTwoTri = s2;
    this->baseTri = s3;
    this->heightTri = ht;

    areaTri = (float)((0.5) * baseTri * heightTri);
    perimeterTri = sideOneTri + sideTwoTri + baseTri;
}

 double Triangle::areaOfTri()
 {
    return areaTri;
 }

double Triangle::perimeterOfTri()
{
    return perimeterTri;
}
