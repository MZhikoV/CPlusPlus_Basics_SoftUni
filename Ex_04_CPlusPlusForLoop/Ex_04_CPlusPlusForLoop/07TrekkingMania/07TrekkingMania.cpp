#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ios;

int main()
{
    int groupNum;
    cin >> groupNum;

    int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, peopleCount=0;

    for (int i = 0; i < groupNum; i++) {
        int groupSize;
        cin >> groupSize;

        peopleCount += groupSize;

        if (groupSize <= 5) {
            c1+= groupSize;
        }
        else if (groupSize <= 12) {
            c2 += groupSize;;
        }
        else if (groupSize <= 25) {
            c3 += groupSize;;
        }
        else if (groupSize <= 40) {
            c4 += groupSize;;
        }
        else {
            c5 += groupSize;;
        }
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << 100.0 * c1 / peopleCount << "%" << endl;
    cout << 100.0 * c2 / peopleCount << "%" << endl;
    cout << 100.0 * c3 / peopleCount << "%" << endl;
    cout << 100.0 * c4 / peopleCount << "%" << endl;
    cout << 100.0 * c5 / peopleCount << "%" << endl;

    return 0;

}
