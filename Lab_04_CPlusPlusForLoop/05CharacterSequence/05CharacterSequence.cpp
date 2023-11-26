#include <iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string inpTxt;
    getline(cin, inpTxt);

    int lenTxt = inpTxt.length();

    for (int i = 0; i < lenTxt; i++) {
        cout << inpTxt[i] << endl;
    }

    return 0;
}
