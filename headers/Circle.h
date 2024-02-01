#include <iostream>

class Circle
{
    public:
        Circle();
        ~Circle();
        void dimensionCircle(float rad);
        float areaOfCircle();
        float circumferenceOfCircle();

    private:
        float mRadiusCir, mAreaCir, mCircumferenceCir;
};

