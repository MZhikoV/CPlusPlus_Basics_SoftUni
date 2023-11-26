#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int numCount;
	cin >> numCount;

	int evenSum = 0, oddSum = 0;

	for (int i = 1; i <= numCount; i++) {
		int num;
		cin >> num;

		if (i % 2 == 0) {
			evenSum += num;
		}
		else {
			oddSum += num;
		}
	}

	if (evenSum == oddSum) {
		cout << "Yes" << endl;
		cout << "Sum = " << evenSum << endl;
	}
	else {
		cout << "No" << endl;
		cout << "Diff = " << abs(evenSum - oddSum) << endl;

		return 0;
	}
}
