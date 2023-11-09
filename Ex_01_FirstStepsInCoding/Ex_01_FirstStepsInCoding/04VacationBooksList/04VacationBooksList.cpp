#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int bookPagesTotal, pagesForHour, requiredDays, requiredHoursForDay;
	cin >> bookPagesTotal >> pagesForHour>>requiredDays;

	requiredHoursForDay = bookPagesTotal / pagesForHour / requiredDays;
	cout << requiredHoursForDay << endl;
}
