#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::ios;

int main()
{
    double const CONV_RATE = 32;
    
    double celsius;
    cin >>celsius;

    double farenheit=celsius*1.8+CONV_RATE;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << farenheit << endl;
}
