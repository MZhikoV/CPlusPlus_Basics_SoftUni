#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int a;
    cin >> a;

    double bonusP = 0;

    if (a <= 100)
    {
        bonusP = 5;
    }
    else if (a > 1000)
    {
        bonusP = 0.1 * a;
    }
    else
    {
        bonusP = 0.2 * a;
    }

    if (a % 2 == 0)
    {
        bonusP = bonusP + 1;
    }
    else if (a % 10 == 5)
    {
        bonusP = bonusP + 2;
    }

    cout << bonusP << endl;
    cout << a + bonusP << endl;

    return 0;
}
