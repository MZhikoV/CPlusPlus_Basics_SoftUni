#include <iostream>
#include<math.h>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    double const PI = 3.14;

    double rad, deg;
    cin >> rad;

    deg = rad * 180 / PI;

    cout << round(deg) << endl;
}
