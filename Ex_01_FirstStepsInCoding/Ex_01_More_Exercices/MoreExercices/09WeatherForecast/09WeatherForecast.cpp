#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::ios;
using std::string;

int main()
{
    string inpW;
    cin >> inpW;

    if (inpW == "sunny") {
        cout << "It's warm outside!" << endl;
    }
    else {
        cout << "It's cold outside!" << endl;
    }

    return 0;
}
