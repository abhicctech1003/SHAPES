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
        // Member variables
        int mLengthRec;
        int mBreadthRec;
        int mAreaRec;
        int mPerimeterRec;
};

