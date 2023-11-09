#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::ios;

int main()
{
    double const EUR_RATE = 1.94;

    double vegetablesPrice, fruitsPrice, vegetableWeight, fruitsWeight;
    cin >> vegetablesPrice>> fruitsPrice>> vegetableWeight>> fruitsWeight;

    double totalIncome=(vegetablesPrice* vegetableWeight+ fruitsPrice* fruitsWeight)/ EUR_RATE;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << totalIncome << endl;
}
