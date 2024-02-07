#include <iostream>

class Line
{
    public:
        Line(); // Constructor
        ~Line(); // Destructor

        void dimensionLine(int cord1x, int cord1y, int cord2x, int cord2y);
        int lineLength();

    private:
        // Member variable
        int mPoint1x;
        int mPoint2x;
        int mPoint1y;
        int mPoint2y;
        int mLengthOfLine;
};

