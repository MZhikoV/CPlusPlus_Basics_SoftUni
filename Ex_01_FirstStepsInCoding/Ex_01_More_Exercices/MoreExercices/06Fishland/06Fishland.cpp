#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::ios;

int main()
{
    double const midiPrice = 7.5;
    
    double skumriyaPrice, cacaPrice;
    cin >> skumriyaPrice >> cacaPrice;

    double palamudWeight, safridWeight;
    int midiWeight;
    cin >> palamudWeight >> safridWeight >> midiWeight;

    double palamudPrice, safridPrice;
    palamudPrice = 1.6 * skumriyaPrice;
    safridPrice = 1.8 * cacaPrice;

    double moneyRequired = palamudWeight * palamudPrice + safridWeight * safridPrice + midiWeight * midiPrice;
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << moneyRequired << endl;
}