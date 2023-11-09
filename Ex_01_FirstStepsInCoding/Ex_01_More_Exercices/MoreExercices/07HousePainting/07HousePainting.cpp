#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::ios;

int main()
{
    double const useGreen = 3.4, useRed = 4.3;

    double sideX, sideY, sideH;
    cin >> sideX >> sideY >> sideH;
    
    double greenPaint = ((2 * (sideX * sideX) - 1.2 * 2) + (2 * (sideX * sideY) - 1.5 * 1.5 * 2))/useGreen;
    double redPaint =( 2 * (sideX * sideY) + 2 * (sideX * sideH / 2))/useRed;

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << greenPaint << endl << redPaint << endl;
}