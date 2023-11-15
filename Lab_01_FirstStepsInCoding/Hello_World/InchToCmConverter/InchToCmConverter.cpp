#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    const double convRate = 2.54;

    double inch, convResult;
    cin >> inch;

    convResult = inch * convRate;

    cout << convResult << endl;
}

