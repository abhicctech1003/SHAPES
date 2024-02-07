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
        // Member variable
        float mMajorAxisEll;
        float mMinorAxisEll;
        float mAreaEll;
        float mCircumferenceEll;
};


