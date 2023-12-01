#include <iostream>
#include<climits>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int num, maxNum = INT_MIN, sum=0;
	cin >> num;

	for (int i = 0; i < num; i++) {
		int inpNum;
		cin >> inpNum;

		sum += inpNum;
		if (inpNum > maxNum) {
			maxNum = inpNum;
		}
	}
	if (sum - maxNum == maxNum) {
		cout << "Yes" << endl;
		cout << "Sum = " << maxNum << endl;
	}
	else {
		cout << "No" << endl;
		cout << "Diff = " << abs((sum - maxNum) - maxNum) << endl;
	}

	return 0;
}
