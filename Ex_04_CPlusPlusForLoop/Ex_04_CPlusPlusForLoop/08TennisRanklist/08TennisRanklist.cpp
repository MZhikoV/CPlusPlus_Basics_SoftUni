#include <iostream>
#include <math.h>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ios;

int main()
{
    int tournCount, startPoints;
    cin >> tournCount >> startPoints;

    int c1 = 0, c2 = 0, c3 = 0;

    for (int i = 0; i < tournCount; i++) {
        string tournType;
        cin >> tournType;

        if (tournType == "W") {
            c1++;
        }
        else if (tournType == "F") {
            c2++;
        }
        else if (tournType == "SF") {
            c3++;
        }
    }
    
    int finalPoints = startPoints + c1 * 2000 + c2 * 1200 + c3 * 720;

    cout << "Final points: " << finalPoints << endl;
    cout << "Average points: " << floor(1.0*(c1 * 2000 + c2 * 1200 + c3 * 720) / tournCount) << endl;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << 100.0 * c1 / (c1 + c2 + c3) << "%" << endl;

    return 0;
}