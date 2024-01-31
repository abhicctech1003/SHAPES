
#include <iostream>

class Line
{
    int point1x, point2x, point1y, point2y, lengthOfLine;
    
    public:
        Line();
        void dimLine(int cord1x, int cord1y, int cord2x, int cord2y);
        int lineLen();
};

