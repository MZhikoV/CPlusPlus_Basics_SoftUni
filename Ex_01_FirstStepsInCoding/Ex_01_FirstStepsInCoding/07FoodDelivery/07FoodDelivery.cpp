#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    const double PRICE_CHICKEN_MENU = 10.35, PRICE_FISH_MENU = 12.4, PRICE_VEGGIE_MENU = 8.15, DELIVERY = 2.5;

    int reqChickenMenu, reqFishMenu, reqVeggieMenu;
    cin>>reqChickenMenu>>reqFishMenu>>reqVeggieMenu;

    double priceForMenus, priceForDesert, totalPrice;
    priceForMenus = PRICE_CHICKEN_MENU * reqChickenMenu + PRICE_FISH_MENU * reqFishMenu + PRICE_VEGGIE_MENU * reqVeggieMenu;
    priceForDesert = 0.2 * priceForMenus;
    totalPrice = priceForMenus + priceForDesert + DELIVERY;

    cout << totalPrice << endl;
}
