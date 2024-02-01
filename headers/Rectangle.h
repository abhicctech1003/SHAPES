
#include <iostream>

class Rectangle
{
    public:
        Rectangle(); // Constructor
        ~Rectangle(); // Destructor
        void dimensionOfRectangle(int len, int wid);
        int areaOfRectangle();
        int perimeterOfRectangle();

    private:
        int mLengthRec, mBreadthRec, mAreaRec, mPerimeterRec;
};

