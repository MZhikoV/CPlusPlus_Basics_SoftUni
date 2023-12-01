#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::ios;

int main()
{
    int num, p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0;
    cin >> num;

    for (int i = 0; i < num; i++) {
        int inpNum;
        cin >> inpNum;

        if (inpNum < 200) {
            p1++;
        }
        else if (inpNum < 400) {
            p2++;
        }
        else if (inpNum < 600) {
            p3++;
        }
        else if (inpNum < 800) {
            p4++;
        }
        else {
            p5++;
        }
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << 100.0 * p1 / num << "%" << endl;
    cout << 100.0 * p2 / num << "%" << endl;
    cout << 100.0 * p3 / num << "%" << endl;
    cout << 100.0 * p4 / num << "%" << endl;
    cout << 100.0 * p5 / num << "%" << endl;

    return 0;
}
