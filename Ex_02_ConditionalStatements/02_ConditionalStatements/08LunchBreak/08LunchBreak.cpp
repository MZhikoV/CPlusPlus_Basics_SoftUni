#include <iostream>
#include <math.h>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::ios;
using std::string;

int main()
{
    string seriesName;
    int episodeDuration, restDuration;
    
    getline(cin, seriesName);
    cin >> episodeDuration >> restDuration;

    double lunchTime = 0.125 * restDuration;
    double relaxTime = 0.25 * restDuration;

    double timeNeeded = episodeDuration + lunchTime + relaxTime;

    if (timeNeeded <= restDuration)
    {
        cout << "You have enough time to watch " << seriesName << " and left with " << ceil(restDuration - timeNeeded) << " minutes free time." << endl;
    }
    else
    {
        cout << "You don't have enough time to watch " << seriesName << ", you need " << ceil(timeNeeded- restDuration) << " more minutes." << endl;
    }

    return 0;

}
