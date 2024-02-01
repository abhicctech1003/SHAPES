#include <iostream>
#include "./headers/Line.h"
#include "./headers/Triangle.h"
#include "./headers/Square.h"
#include "./headers/Rectangle.h"
#include "./headers/Circle.h"
#include "./headers/Ellipse.h"
using namespace std;

int main()
{
    // Continous loop
    while(1)
    {
        cout << "Select one of following shape to get geometric dimensions" << endl;
        cout << "(1) Line" << endl
             << "(2) Triangle" << endl
             << "(3) Square" << endl
             << "(4) Rectangle" << endl
             << "(5) Circle" << endl
             << "(6) Ellipse" << endl
             << "(7) Exit" << endl;

        // Variable declarations
        int Shape;
        cin >> Shape;

        switch (Shape)
        {
        // Line
        case 1:
            {
            Line objLine;

            cout << "(1) Line is selected..!" << endl;
            cout << "Please provide point1 & point2 for getting geometrical dimension: " << endl;

            // Local variables for Line
            int lPoint1x, lPoint1y, lPoint2x, lPoint2y;
            cin >> lPoint1x >> lPoint2y >> lPoint2x >> lPoint2y;
            objLine.dimensionLine(lPoint1x, lPoint1y, lPoint2x, lPoint2y);
            cout << "Length of Line is " << objLine.lineLength() << endl;

            break;
            }

        // Triangle
        case 2:
            {
            Triangle objTriangle;

            cout << "(2) Triangle is selected..!" << endl;
            cout << "Please provide side1, side2, base & height for getting geometrical dimension: " << endl;

            // Local variables for Triangle
            int lSide1, lSide2, lBase, lHeight;
            cin >> lSide1 >> lSide2 >> lBase >> lHeight;

            objTriangle.dimensionTriangle(lSide1,lSide2,lBase,lHeight);

            cout << "Area of Triangle is " << objTriangle.areaOfTriangle() << endl;
            cout << "Perimeter of Triangle is " << objTriangle.perimeterOfTriangle() << endl;

            break;
            }

        // Square
        case 3:
            {
            Square objSquare;

            cout << "(3) Square is selected..!" << endl;
            cout << "Please provide side for getting geometrical dimension: " << endl;

            // Local variables for Square
            int lSide;
            cin >> lSide;

            objSquare.dimensionOfSquare(lSide);

            cout << "Area of Square is " << objSquare.areaOfSquare() << endl;
            cout << "Perimeter of Square is " << objSquare.perimeterOfSquare() << endl;

            break;
            }

        // Rectangle
        case 4:
           {
            Rectangle objRectangle;

            cout << "(4) Rectangle is selected..!" << endl;
            cout << "Please provide length & breadth for getting geometrical dimension: " << endl;

            // Local variables for rectangle
            int lRectLength, lRectBredth;
            cin >> lRectLength >> lRectBredth;

            objRectangle.dimensionOfRectangle(lRectLength, lRectBredth);

            cout << "Area of Rectangle is " << objRectangle.areaOfRectangle() << endl;
            cout << "Perimeter of Rectangle is " << objRectangle.perimeterOfRectangle() << endl;

            break;
            }

        // Circle
        case 5:
            {
            Circle objCircle;
    
            cout << "(5) Circle is selected..!" << endl;
            cout << "Please provide radius for getting geometrical dimension: " << endl;

            // Local variables for Circle
            float lRadius;
            cin >> lRadius;

            objCircle.dimensionCircle(lRadius);

            cout << "Area of Circle is " << objCircle.areaOfCircle() << endl;
            cout << "Circumference of Circle is " << objCircle.circumferenceOfCircle() << endl;

            break;
            }

        // Ellipse
        case 6:
            {
            Ellipse objEllipse;

            cout << "(6) Ellipse is selected..!" << endl;
            cout << "Please provide major & minor axis for getting geometrical dimension: " << endl;

            // Local variables for Ellipse
            float lMajorAx, lMinorAx;
            cin >> lMajorAx >> lMinorAx;

            objEllipse.dimensionEllipse(lMajorAx, lMinorAx);

            cout << "Area of Ellipse is " << objEllipse.areaOfEllipse() << endl;
            cout << "Circumference of Ellipse is " << objEllipse.circumferenceOfEllipse() << endl;

            break;
            }

        case 7:
            {
            exit(1);
            break;
            }
        
        
        default:
            {
            cout << "Invalid selection for shape"; 
            break;
            }
        }
        
    }

    return(0);
}
