#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ios;

int main()
{
    string city;
    double sales, comission;
    bool checkInput=true;
    cin >> city >> sales;

    if (sales < 0) {
        checkInput = false;
    }
    else if (sales >= 0 && sales <= 500) {
        if (city == "Sofia") {
            comission = 0.05;
        }
        else if (city == "Varna") {
            comission = 0.045;
        }
        else if (city == "Plovdiv") {
            comission = 0.055;
        }
        else {
            checkInput = false;
        }
    }
    else if (sales >500 && sales <= 1000) {
        if (city == "Sofia") {
            comission = 0.07;
        }
        else if (city == "Varna") {
            comission = 0.075;
        }
        else if (city == "Plovdiv") {
            comission = 0.08;
        }
        else {
            checkInput = false;
        }
    }
    else if (sales > 1000 && sales <= 10000) {
        if (city == "Sofia") {
            comission = 0.08;
        }
        else if (city == "Varna") {
            comission = 0.1;
        }
        else if (city == "Plovdiv") {
            comission = 0.12;
        }
        else {
            checkInput = false;
        }
    }
    else if (sales > 10000) {
        if (city == "Sofia") {
            comission = 0.12;
        }
        else if (city == "Varna") {
            comission = 0.13;
        }
        else if (city == "Plovdiv") {
            comission = 0.145;
        }
        else {
            checkInput = false;
        }
    }

    if (checkInput) {
        cout.setf(ios::fixed);
        cout.precision(2);

        comission *= sales;

        cout << comission << endl;
    }
    else {
        cout << "error" << endl;
    }

    return 0;
}
