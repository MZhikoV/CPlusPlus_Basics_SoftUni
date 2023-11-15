#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string archName;
	cin >> archName;

	int projectNumber;
	cin >> projectNumber;

	const int hoursForOneProject = 3;

	int requiredHours = hoursForOneProject * projectNumber;

	cout << "The architect " << archName << " will need " << requiredHours << " hours to complete " << projectNumber << " project/s." << endl;
}
