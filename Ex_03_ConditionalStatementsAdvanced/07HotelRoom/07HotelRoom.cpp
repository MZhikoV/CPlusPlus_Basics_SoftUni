#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ios;

int main()
{
    string month;
    int days;
    cin >> month >> days;

    double priceStudio, priceApartment=0;

    if (month == "May" || month == "October") {
        priceStudio = 50;
        priceApartment = 65;
        if (days > 7 && days <= 14) {
            priceStudio *= 0.95;
        }
        else if (days > 14) {
            priceStudio *= 0.7;
        }
    }
    else if (month == "June" || month == "September") {
        priceStudio = 75.2;
        priceApartment = 68.7;
        if (days > 14) {
            priceStudio *= 0.8;
        }
    }
    else /*if (month == "July" || month == "August") */{
        priceStudio = 76;
        priceApartment = 77;
    }

    if (days > 14) {
        priceApartment *= 0.9;
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "Apartment: " << priceApartment * days << " lv." << endl;
    cout << "Studio: " << priceStudio*days << " lv." << endl;

    return 0;
}
