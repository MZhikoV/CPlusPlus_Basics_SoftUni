#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    double age;
    char gender;

    cin >> age >> gender;

    if (age < 16) {
        if (gender == 'm') {
            cout << "Master" << endl;
        }
        else {
            cout << "Miss";
        }
    }
    else {
        if (gender == 'm') {
            cout << "Mr." << endl;
        }
        else {
            cout << "Ms.";
        }
    }

    return 0;
}
