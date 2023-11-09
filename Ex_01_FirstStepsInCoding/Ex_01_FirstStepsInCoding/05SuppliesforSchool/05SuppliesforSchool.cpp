#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    const double PEN_PRICE = 5.8, MARKER_PRICE = 7.2, DETERGENT_PRICE = 1.2;

    int penPackages, markerPacages, detergentLiters, discountPercentage;
    cin >> penPackages >> markerPacages >> detergentLiters >> discountPercentage;

    double requiredMoney;
    requiredMoney = PEN_PRICE * penPackages + MARKER_PRICE * markerPacages + DETERGENT_PRICE * detergentLiters;
    requiredMoney = requiredMoney - (requiredMoney * discountPercentage / 100);

    cout << requiredMoney << endl;
}
