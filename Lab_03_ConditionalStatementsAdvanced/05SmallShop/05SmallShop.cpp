#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string product, city;
    double quantity;
   
    cin >> product >> city >> quantity;
    
    double price = 0;

    if (city == "Sofia") {
        if (product == "coffee") {
            price = quantity * 0.5;
        }
        else if (product == "water") {
            price = quantity * 0.8;
        }
        else if (product == "beer") {
            price = quantity * 1.2;
        }
        else if (product == "sweets") {
            price = quantity * 1.45;
        }
        else if (product == "peanuts") {
            price = quantity * 1.6;
        }
    }
    else if (city == "Plovdiv") {
        if (product == "coffee") {
            price = quantity * 0.4;
        }
        else if (product == "water") {
            price = quantity * 0.7;
        }
        else if (product == "beer") {
            price = quantity * 1.15;
        }
        else if (product == "sweets") {
            price = quantity * 1.3;
        }
        else if (product == "peanuts") {
            price = quantity * 1.5;
        }
    }
    else {
        if (product == "coffee") {
            price = quantity * 0.45;
        }
        else if (product == "water") {
            price = quantity * 0.7;
        }
        else if (product == "beer") {
            price = quantity * 1.1;
        }
        else if (product == "sweets") {
            price = quantity * 1.35;
        }
        else if (product == "peanuts") {
            price = quantity * 1.55;
        }
    }

    cout << price << endl;

    return 0;
}