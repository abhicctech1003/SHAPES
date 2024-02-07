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
        // Member variables
        double mSideOneTri;
        double mSideTwoTri;
        double mBaseTri;
        double mHeightTri;
        double mPerimeterTri;
        double mAreaTri;
         
};

