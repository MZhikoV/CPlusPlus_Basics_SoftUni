#define _USE_MATH_DEFINES

#include <iostream>
#include<math.h>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ios;

int main()
{
    string shapeType;
    cin >> shapeType;

    double shapeArea = 0;

    cout.setf(ios::fixed);
    cout.precision(3);

    if (shapeType == "square")
    {
        double a;
        cin >> a;

        shapeArea = pow(a, 2);
    }
    else if (shapeType == "rectangle")
    {
        double a, b;
        cin >> a >> b;

        shapeArea = a * b;
    }
    else if (shapeType == "circle")
    {
        double radius;
        cin >> radius;

        shapeArea = M_PI * pow(radius, 2);
    }
    else
    {
        double sideA, height;
        cin >> sideA >> height;

        shapeArea = 0.5 * sideA * height;
    }

    cout << shapeArea << endl;

    return 0;
}