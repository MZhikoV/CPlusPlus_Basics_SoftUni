#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::ios;

int main()
{
    double movieBudget, clothesPrice;
    int peopleCount;
    cin >> movieBudget >> peopleCount >> clothesPrice;

    double decorPrice = 0.1 * movieBudget;
    double clothesBudget = 0;

    if (peopleCount > 150)
    {
        clothesBudget = peopleCount * clothesPrice * 0.9;
    }
    else clothesBudget = peopleCount * clothesPrice;

    double totalMoneyNeeded = decorPrice + clothesBudget;

    cout.setf(ios::fixed);
    cout.precision(2);

    if (totalMoneyNeeded > movieBudget)
    {
        cout << "Not enough money!" << endl;
        cout << "Wingard needs " << totalMoneyNeeded - movieBudget << " leva more." << endl;
    }
    else
    {
        cout << "Action!" << endl;
        cout << "Wingard starts filming with " << movieBudget - totalMoneyNeeded << " leva left." << endl;
    }

    return 0;
}