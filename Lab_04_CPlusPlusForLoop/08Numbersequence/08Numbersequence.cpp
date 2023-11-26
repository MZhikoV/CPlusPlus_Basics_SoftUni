#include <iostream>
#include<climits>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int numCount;
    cin >> numCount;

    int minNum = INT_MAX;
    int maxNum = INT_MIN;

    for (int i = 1; i <= numCount; i++) {
        int num;
        cin >> num;
        if (num > maxNum) {
            maxNum = num;
        }
        if (num < minNum) {
            minNum = num;
        }
    }
    cout << "Max number: " << maxNum << endl;
    cout << "Min number: " << minNum << endl;

    return 0;
}
