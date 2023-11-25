#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ios;

int main()
{
    string movieType;
    int col, row;
    double price = 0;
    cin >> movieType >> col >> row;
    price = col * row;

    if (movieType == "Premiere") {
        price *= 12.0;
    }
    else if (movieType == "Normal") {
        price *= 7.5;
    }
    else {
        price *= 5;
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << price << " leva." << endl;

    return 0;
}
