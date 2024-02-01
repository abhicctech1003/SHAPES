#include <iostream>

class Square
{
    public:
        Square(); // Constructor
        ~Square(); // Destructor
        void dimensionOfSquare(int side);
        int areaOfSquare();
        int perimeterOfSquare();

    private:
        int mSideSquare, mAreaSquare, mPerimeterSquare;
};


