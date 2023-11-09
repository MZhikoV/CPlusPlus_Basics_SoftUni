#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::ios;

int main()
{
	const double rate = 1.79549;

	double usd;
	cin >> usd;

	double conversionUSDtoBGN = usd * rate;

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << conversionUSDtoBGN << endl;

}
