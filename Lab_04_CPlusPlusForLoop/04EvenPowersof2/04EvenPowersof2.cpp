#include <iostream>
#include <math.h>

using std::cin;
using std::cout;
using std::endl;
using std::pow;

int main()
{
    int num;
    cin >> num;

    for (int i = 0; i <= num; i += 2) {
        cout << pow(2, i) << endl;
    }

    return 0;
}
