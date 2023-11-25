#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ios;

int main()
{
    int examHour, examMin, arriveHour, arriveMin;
    cin >> examHour >> examMin >> arriveHour >> arriveMin;

    int convExamMin, convArriveMin;

    string timeStat,timeDiff;
    int minutesDiff;

    convExamMin = examHour * 60 + examMin;
    convArriveMin = arriveHour * 60 + arriveMin;
    
    if (convExamMin - convArriveMin >= 0 && convExamMin - convArriveMin <= 30) {
        timeStat = "On time";
        timeDiff = "before";
    }
    else if (convExamMin - convArriveMin > 30) {
        timeStat = "Early";
        timeDiff = "before";
    }
    else if (convExamMin - convArriveMin < 0) {
        timeStat = "Late";
        timeDiff = "after";
    }       
    minutesDiff = abs(convExamMin - convArriveMin);

    cout << timeStat << endl;

        if (minutesDiff < 60 && minutesDiff!=0) {
            cout << minutesDiff << " minutes "<< timeDiff <<" the start" << endl;
        }
        else if (minutesDiff >= 60) {
            cout << minutesDiff / 60 << ":" << (minutesDiff % 60 < 10 ? "0":"") << minutesDiff % 60 << "hours " << timeDiff << " the start" << endl;
        }
        return 0;
}
