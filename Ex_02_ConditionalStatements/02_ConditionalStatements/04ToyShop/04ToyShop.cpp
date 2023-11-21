#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::ios;

int main()
{
    const double puzzlePrice = 2.6, dollPrice = 3.0, teddybearPrice = 4.1;
    const double minionPrice = 8.2, truckPrice = 2.0;

    double tripPrice;
    cin >> tripPrice;

    int puzzleCount, dollCount, teddybearCount, minionCount, truckCount;
    cin >> puzzleCount >> dollCount >> teddybearCount >> minionCount >> truckCount;

    double totalIncome = puzzleCount * puzzlePrice + dollCount * dollPrice
        + teddybearCount * teddybearPrice + minionCount * minionPrice + truckCount * truckPrice;

    int totalCount = puzzleCount + dollCount + teddybearCount + minionCount + truckCount;

    if (totalCount >= 50)
    {
        totalIncome *= 0.75;
    }

    totalIncome *= 0.9;

    cout.setf(ios::fixed);
    cout.precision(2);

    if (totalIncome >= tripPrice)
    {
        cout << "Yes! " << totalIncome-tripPrice << " lv left." << endl;
    }
    else
    {
        cout << "Not enough money! " << tripPrice - totalIncome << " lv needed." << endl;
    }

    return 0;
}