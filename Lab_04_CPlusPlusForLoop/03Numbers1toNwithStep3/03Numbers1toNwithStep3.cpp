#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int num;
    cin >> num;

    for (int i = 1; i <= num; i += 3) {
        cout << i << endl;
    }

    return 0;
}
