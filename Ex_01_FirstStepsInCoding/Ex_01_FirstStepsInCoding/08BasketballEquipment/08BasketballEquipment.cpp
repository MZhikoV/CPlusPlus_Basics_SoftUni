#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    double yearTax;
    cin >> yearTax;

    double shoesPrice;
    shoesPrice = 0.6 * yearTax;

    double clothesPrice;
    clothesPrice = 0.8 * shoesPrice;

    double ballPrice;
    ballPrice = 0.25 * clothesPrice;

    double accessoriesPrice;
    accessoriesPrice = 0.2 * ballPrice;

    double totalCost;
    totalCost = yearTax + shoesPrice + clothesPrice + ballPrice + accessoriesPrice;
    cout << totalCost << endl;
}
