#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    int hours;
    string day;
    cin >> hours >> day;

    if (day == "Sunday" || hours < 10 || hours>18) {
        cout << "closed" << endl;
    }
    else {
        cout << "open" << endl;
    }

    return 0;
}
