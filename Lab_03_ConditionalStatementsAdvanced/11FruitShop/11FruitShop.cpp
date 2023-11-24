#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ios;

int main()
{
    string fruit, day;
    double quantity, price;
    bool checkFruit=true;
    cin >> fruit >> day >> quantity;

    if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday") {
        if (fruit == "banana") {
            price = 2.5;
        }
        else if (fruit == "apple") {
            price = 1.2;
        }
        else if (fruit == "orange") {
            price = 0.85;
        }
        else if (fruit == "grapefruit") {
            price = 1.45;
        }
        else if (fruit == "kiwi") {
            price = 2.7;
        }
        else if (fruit == "pineapple") {
            price = 5.5;
        }
        else if (fruit == "grapes") {
            price = 3.85;
        }
        else {
            checkFruit = false;
        }
    }
    else if (day == "Saturday" || day == "Sunday") {
        if (fruit == "banana") {
            price = 2.7;
        }
        else if (fruit == "apple") {
            price = 1.25;
        }
        else if (fruit == "orange") {
            price = 0.9;
        }
        else if (fruit == "grapefruit") {
            price = 1.6;
        }
        else if (fruit == "kiwi") {
            price = 3.0;
        }
        else if (fruit == "pineapple") {
            price = 5.6;
        }
        else if (fruit == "grapes") {
            price = 4.2;
        }
        else {
            checkFruit = false;
        }
    }
    else {
        checkFruit = false;
    }

    if (checkFruit) {
        price *= quantity;

        cout.setf(ios::fixed);
        cout.precision(2);

        cout << price << endl;

    }
    else {
        cout << "error" << endl;
    }
    
    return 0;
}
