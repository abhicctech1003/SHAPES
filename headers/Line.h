
#include <iostream>

class Line
{
    public:
        Line(); // Constructor
        ~Line(); // Destructor
        void dimensionLine(int cord1x, int cord1y, int cord2x, int cord2y);
        int lineLength();

    private:
        int mPoint1x, mPoint2x, mPoint1y, mPoint2y, mLengthOfLine;
};

