#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    double initialDeposit, annualIncomePercent;
    int depositMonths;
    cin >> initialDeposit >> depositMonths >> annualIncomePercent;

    double finalDeposit;
    finalDeposit = initialDeposit + depositMonths * (initialDeposit * annualIncomePercent /100/ 12);
    cout << finalDeposit << endl;
}
