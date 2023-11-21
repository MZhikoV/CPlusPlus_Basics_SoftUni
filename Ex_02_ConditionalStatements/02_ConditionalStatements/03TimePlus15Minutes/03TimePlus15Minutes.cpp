#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	const int addMin = 15;
	
	int inHour, inMin;
	cin >> inHour >> inMin;

	int totMin = (inHour * 60 + inMin) + addMin;

	int outHour, outMin;
	outHour = totMin / 60;
	if (outHour == 24)
	{
		outHour = 0;
	}
	
	outMin = totMin % 60;

	cout << outHour <<":";
	if (outMin < 10)
	{
		cout << "0" << outMin << endl;
	}
	else
	{
		cout << outMin << endl;
	}

	return 0;
}
