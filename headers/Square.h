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
        // Member variables
        int mSideSquare;
        int mAreaSquare;
        int mPerimeterSquare;
};


