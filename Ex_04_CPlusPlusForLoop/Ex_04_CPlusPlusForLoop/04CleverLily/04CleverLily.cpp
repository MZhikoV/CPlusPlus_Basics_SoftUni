#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::ios;

int main()
{
	int age, toyPrice,toyCount=0, br=0;
	double wmPrice, sum = 0;
	cin >> age >> wmPrice >> toyPrice;

	for (int i = 1; i <= age; i++) {
		if (i % 2 == 0) {
			br++;
			sum += 10 * br;
			
		}
		else {
			toyCount++;
		}
	}
	
	sum = sum - br + toyCount * toyPrice;

	cout.setf(ios::fixed);
	cout.precision(2);

	if (sum >= wmPrice) {
		cout << "Yes! " << sum - wmPrice << endl;
	}
	else {
		cout << "No! " << wmPrice - sum << endl;
	}

	return 0;
}
