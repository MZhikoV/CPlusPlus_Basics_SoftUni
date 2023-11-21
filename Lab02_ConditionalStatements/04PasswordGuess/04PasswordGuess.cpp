#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    const string corretPass = "s3cr3t!P@ssw0rd";
    
    string inputPass;
    cin >> inputPass;

    if (inputPass == corretPass)
    {
        cout << "Welcome" << endl;
    }
    else
    {
        cout << "Wrong password!" << endl;
    }
    return 0;
}