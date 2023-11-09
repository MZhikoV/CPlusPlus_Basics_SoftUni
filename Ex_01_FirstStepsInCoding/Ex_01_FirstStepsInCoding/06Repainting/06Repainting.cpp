#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    const double NYLON_PRICE = 1.5, PAINT_PRICE = 14.5, RAZREDITEL_PRICE = 5, BAG_PRICE=0.4;

    int reqNylon, reqPaint, reqRazreditel, reqHours;
    cin >> reqNylon >> reqPaint >> reqRazreditel >> reqHours;

    double totalPrice,rateHour;
    totalPrice = 1.1 * (PAINT_PRICE * reqPaint) + NYLON_PRICE * (reqNylon + 2) + RAZREDITEL_PRICE * reqRazreditel + BAG_PRICE;
    rateHour = 0.3 * totalPrice;
    
    totalPrice = totalPrice + reqHours * rateHour;
    cout << totalPrice << endl;
}
