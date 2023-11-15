#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    const double priceForSquareMeter = 7.61;
    const double discountPercentage = 0.18;

    double totalYardArea;
    cin >> totalYardArea;

    double discount = totalYardArea * priceForSquareMeter * discountPercentage;

    double totalPrice = totalYardArea * priceForSquareMeter - discount;
    
    cout<<"The final price is: "<<totalPrice<<" lv."<<endl;
    cout << "The discount is: " << discount << " lv."<<endl;
}
