#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ios;

int main()
{
	string flower;
	int flowerCount, budget;
	double price;
	cin >> flower >> flowerCount >> budget;

	if (flower == "Roses") {
		if (flowerCount > 80) {
			price = 5*flowerCount*0.9;
		}
		else {
			price = 5 * flowerCount;
		}
	}
	else if (flower == "Dahlias") {
		if (flowerCount > 90) {
			price = 3.8 * flowerCount * 0.85;
		}
		else {
			price = 3.8 * flowerCount;
		}
	}
	else if (flower == "Tulips") {
		if (flowerCount > 80) {
			price = 2.8 * flowerCount * 0.85;
		}
		else {
			price = 2.8 * flowerCount;
		}
	}
	else if (flower == "Narcissus") {
		if (flowerCount < 120) {
			price = 3 * flowerCount * 1.15;
		}
		else {
			price = 3 * flowerCount;
		}
	}
	else if (flower == "Gladiolus") {
		if (flowerCount < 80) {
			price = 2.5 * flowerCount * 1.2;
		}
		else {
			price = 2.5 * flowerCount;
		}
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	double diff = budget-price;

	if (diff >= 0) {
		cout << "Hey, you have a great garden with " << flowerCount << " " << flower << " and " << diff << " leva left."<<endl;
	}
	else {
		cout << "Not enough money, you need " << price-budget << " leva more." << endl;
	}

	return 0;
}
