#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    int temp;
    string time, outfit,shoes;
    cin >> temp >> time;

    if (time == "Morning") {
        if (temp >= 10 && temp <= 18) {
            outfit = "Sweatshirt";
            shoes = "Sneakers";
        }
        else if (temp > 18 && temp <= 24) {
            outfit = "Shirt";
            shoes = "Moccasins";
        }
        else {
            outfit = "T-Shirt";
            shoes = "Sandals";
        }
    }
    else if (time == "Afternoon") {
        if (temp >= 10 && temp <= 18) {
            outfit = "Shirt";
            shoes = "Moccasins";
        }
        else if (temp > 18 && temp <= 24) {
            outfit = "T-Shirt";
            shoes = "Sandals";
        }
        else {
            outfit = "Swim Suit";
            shoes = "Barefoot";
        }
    }
    else {
        outfit = "Shirt";
        shoes = "Moccasins";
    }

    cout << "It's " << temp << " degrees, get your " << outfit << " and " << shoes << "." << endl;

    return 0;
}
