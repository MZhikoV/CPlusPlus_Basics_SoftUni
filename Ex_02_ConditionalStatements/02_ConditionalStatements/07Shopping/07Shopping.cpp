#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::ios;

int main()
{
	const double vcardPrice = 250;

	double budget;
	int vcardCount, proccCount, ramCount;
	cin >> budget >> vcardCount >> proccCount >> ramCount;

	double proccPrice = 0.35 * (vcardCount * vcardPrice);
	double ramPrice = 0.1 * (vcardCount * vcardPrice);

	double totalPrice = vcardCount * vcardPrice + proccCount * proccPrice + ramCount * ramPrice;

	if (vcardCount > proccCount)
	{
		totalPrice *= 0.85;
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	if (totalPrice <= budget)
	{
		cout << "You have " << budget - totalPrice << " leva left!" << endl;
	}
	else
	{
		cout << "Not enough money! You need " << totalPrice - budget << " leva more!" << endl;
	}

	return 0;
}
