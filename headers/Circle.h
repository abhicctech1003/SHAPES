#include <iostream>

class Circle
{
    public:
        Circle(); // Constructor
        ~Circle(); // Destructor
        
        void dimensionCircle(float rad);
        float areaOfCircle();
        float circumferenceOfCircle();

    private:
        float mRadiusCir, mAreaCir, mCircumferenceCir;
};

