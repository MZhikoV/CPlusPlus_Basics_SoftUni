#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int num;
	cin >> num;

	for (int i = num; i >= 1; i--) {
		cout << i << endl;
	}

	return 0;
}
