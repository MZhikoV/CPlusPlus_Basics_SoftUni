#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::ios;
using std::string;

int main()
{
    double inpDeg;
    cin >> inpDeg;

    if (inpDeg >= 26 && inpDeg <= 35) {
        cout << "Hot" << endl;
    }
    else if (inpDeg > 20 && inpDeg < 26) {
        cout << "Warm" << endl;
    }
    else if (inpDeg >= 15 && inpDeg <= 20) {
        cout << "Mild" << endl;
    }
    else if (inpDeg >= 12 && inpDeg < 15) {
        cout << "Cool" << endl;
    }
    else if (inpDeg >= 5 && inpDeg < 12) {
        cout << "Cold" << endl;
    }
    else {
        cout << "unknown" << endl;
    }

    return 0;
}
