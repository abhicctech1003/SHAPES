
#include <iostream>

class Ellipse
{
    public:
        Ellipse(); // Constructor
        ~Ellipse(); // Destructor
        void dimensionEllipse(float majorAx, float minorAX);
        float areaOfEllipse();
        float circumferenceOfEllipse();

    private:
        float mMajorAxisEll, mMinorAxisEll, mAreaEll, mCircumferenceEll;
};


