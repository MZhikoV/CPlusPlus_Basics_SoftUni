#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int timeA, timeB, timeC;
    cin >> timeA >> timeB >> timeC;

    int totalTimeSec = timeA + timeB + timeC;

    int resultMin = totalTimeSec / 60;

    int resultSec = totalTimeSec - resultMin * 60;

    if (resultSec < 10)
    {
        cout << resultMin << ":0" << resultSec << endl;
    }
    else
    {
        cout << resultMin << ":" << resultSec << endl;
    }

    return 0;
}
