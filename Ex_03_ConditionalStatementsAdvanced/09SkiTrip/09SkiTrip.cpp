#include <iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ios;

int main()
{
    int stay;
    string stayInp, roomType, grade;
    getline(cin, stayInp);
    getline(cin, roomType);
    getline(cin, grade);

    stay = stoi(stayInp);

    double price = 0;

    if (roomType == "room for one person") {
        price = 18;
    }
    else if (roomType == "apartment") {
        price = 25;
        if (stay < 10) {
            price *= 0.7;
        }
        else if (stay >= 10 && stay <= 15) {
            price *= 0.65;
        }
        else {
            price *= 0.5;
        }
    }
    else if (roomType == "president apartment") {
        price = 35;
        if (stay < 10) {
            price *= 0.9;
        }
        else if (stay >= 10 && stay <= 15) {
            price *= 0.85;
        }
        else {
            price *= 0.8;
        }
    }

    double totalCost = (stay - 1) * price;

    if (grade == "positive") {
        totalCost *= 1.25;
    }
    else {
        totalCost *= 0.9;
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << totalCost << endl;

    return 0;

}
