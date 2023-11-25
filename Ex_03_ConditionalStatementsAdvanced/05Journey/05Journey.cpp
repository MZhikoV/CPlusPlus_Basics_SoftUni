#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ios;

int main()
{
	double budget;
	string season;
	cin >> budget >> season;

	double savedMoney;
	string stay, destiantion;

	if (budget <= 100) {
		destiantion = "Bulgaria";
		if (season == "summer") {
			savedMoney= budget * 0.7;
			stay = "Camp";
		}
		else {
			savedMoney = budget * 0.3;
			stay = "Hotel";
		}
	}
	else if (budget > 100 && budget <= 1000) {
		destiantion = "Balkans";
		if (season == "summer") {
			savedMoney = budget * 0.6;
			stay = "Camp";
		}
		else {
			savedMoney = budget * 0.2;
			stay = "Hotel";
		}
	}
	else {
		destiantion = "Europe";
		savedMoney = budget * 0.1;
		stay = "Hotel";
	}

	cout << "Somewhere in " << destiantion << endl;

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << stay << " - " << budget - savedMoney << endl;

	return 0;
}
