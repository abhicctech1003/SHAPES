#include <iostream>

class Triangle
{
    public:
        Triangle(); // Constructor
        ~Triangle(); // Destructor
        void dimensionTriangle(double s1, double s2, double s3, double ht);
        double areaOfTriangle();
        double perimeterOfTriangle();

    private:
        double mSideOneTri, mSideTwoTri, mBaseTri, mHeightTri, mPerimeterTri, mAreaTri;
         
};

