
#include <iostream>

class Triangle
{
    double sideOneTri, sideTwoTri, baseTri, heightTri, perimeterTri;
    double areaTri;

    public:
        Triangle();
        void dimTri(double s1, double s2, double s3, double ht);
        double areaOfTri();
        double perimeterOfTri();
};

