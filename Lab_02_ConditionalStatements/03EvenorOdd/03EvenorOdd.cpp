#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int a;
    cin >> a;

    if (a % 2 == 0)
    {
        cout << "even" << endl;
    }
    else
    {
        cout << "odd" << endl;
    }

    return 0;
}
