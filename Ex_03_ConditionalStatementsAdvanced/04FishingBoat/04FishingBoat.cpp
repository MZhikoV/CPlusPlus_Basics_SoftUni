#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ios;

int main()
{
    double  boatPrice, mainDiscount;
    string season;
    int budget, fishermen;
    cin >> budget >> season >> fishermen;

    if (season == "Spring") {
        boatPrice = 3000;
    }
    else if (season == "Winter") {
        boatPrice = 2600;
    }
    else if (season == "Summer" || season == "Autumn") {
        boatPrice = 4200;
    }
       
    if (fishermen <= 6) {
        mainDiscount = 0.9;
    }
    else if (fishermen >= 7 && fishermen <= 11) {
        mainDiscount = 0.85;
    }
    else {
        mainDiscount = 0.75;
    }

   boatPrice *= mainDiscount;

    if (fishermen % 2 == 0 && season != "Autumn") {
        boatPrice *= 0.95;
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    if (budget>=boatPrice) {
        cout << "Yes! You have " << budget - boatPrice << " leva left." << endl;
    }
    else {
        cout << "Not enough money! You need " << boatPrice - budget << " leva." << endl;
    }

    return 0;
}
