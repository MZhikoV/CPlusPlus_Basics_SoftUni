#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::ios;
using std::string;

int main()
{
    int tabOpen;
    double salary;
    cin >> tabOpen >> salary;
    
    string tabName;

    for (int i = 0; i < tabOpen; i++) {
        cin >> tabName;
        if (tabName == "Facebook") {
            salary -= 150;
        }
        else if (tabName == "Instagram") {
            salary -= 100;
        }
        else if (tabName == "Reddit") {
            salary -= 50;
        }
    }
    if (salary <= 0) {
        cout << "You have lost your salary." << endl;
    }
    else {
        cout << salary << endl;
    }

    return 0;
}
