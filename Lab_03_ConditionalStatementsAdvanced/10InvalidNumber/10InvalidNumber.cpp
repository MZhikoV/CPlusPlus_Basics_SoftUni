#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    int number;
    cin >> number;
    if (number !=0) {
        if (number < 100 || number>200) {
            cout << "invalid" << endl;
        }
    }
    
    return 0;
}
