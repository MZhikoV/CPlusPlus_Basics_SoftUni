#include <iostream>
#include<math.h>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ios;

int main()
{
	int firstNum, secondNum, result=0;
	char mathOperator;
	cin >> firstNum >> secondNum >> mathOperator;

	if (mathOperator == '+') {
		result = firstNum + secondNum;
	}
	else if (mathOperator == '-') {
		result = firstNum - secondNum;
	}
	else if (mathOperator == '*') {
		result = firstNum * secondNum;
	}
	else if (mathOperator == '/' && secondNum != 0) {
		double divide =1.0* firstNum / secondNum;
		cout.setf(ios::fixed);
		cout.precision(2);
		cout << firstNum << " " << mathOperator << " " << secondNum << " = " << divide << endl;
	}
	else if (mathOperator == '%' && secondNum != 0) {
		result = firstNum % secondNum;
		cout << firstNum << " " << mathOperator << " " << secondNum << " = " << result << endl;
	}

	string type;

	if (mathOperator == '+' || mathOperator == '-' || mathOperator == '*') {
		if (result % 2 == 0) {
			type = "even";
		}
		else {
			type = "odd";
		}
		cout << firstNum << " " << mathOperator << " " << secondNum << " = " << result << " - " << type << endl;
	}
	if ((mathOperator == '/' || mathOperator == '%')&& secondNum == 0) {
		cout << "Cannot divide " << firstNum << " by zero" << endl;
	}

	return 0;
}
