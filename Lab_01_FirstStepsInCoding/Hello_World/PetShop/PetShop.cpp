#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    int dogFoodCount, catFoodCount;
    cin >> dogFoodCount;
    cin >> catFoodCount;

    const double dogFoodPrice = 2.5;
    const double catFoodPrice = 4;

    double totalPrice = dogFoodCount * dogFoodPrice + catFoodCount * catFoodPrice;

    cout << totalPrice << " lv." << endl;
}
