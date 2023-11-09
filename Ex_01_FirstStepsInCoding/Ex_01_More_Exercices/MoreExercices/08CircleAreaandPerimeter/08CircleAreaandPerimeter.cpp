#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>

using std::cin;
using std::cout;
using std::endl;
using std::ios;

int main()
{
    double r, perim, area;
    cin >> r;

    perim = 2 * M_PI * r;
    area = M_PI * pow(r, 2);

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << area << endl;
    cout << perim << endl;

    return 0;
}
