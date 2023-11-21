#include <iostream>
#include <math.h>

using std::cin;
using std::cout;
using std::endl;
using std::ios;

int main()
{
	double recordTime, distanceMeters, swimmingTimeSec;
	cin >> recordTime >> distanceMeters >> swimmingTimeSec;

	const double waterResistance = 12.5;

	double resistanceTime = (floor(distanceMeters / 15)) * 12.5;

	double swimmingTime = distanceMeters * swimmingTimeSec + resistanceTime;

	cout.setf(ios::fixed);
	cout.precision(2);

	if (recordTime > swimmingTime)
	{
		cout << "Yes, he succeeded! The new world record is " << swimmingTime << " seconds." << endl;
	}
	else
	{
		cout << "No, he failed! He was " << swimmingTime- recordTime << " seconds slower." << endl;
	}
	return 0;
}
