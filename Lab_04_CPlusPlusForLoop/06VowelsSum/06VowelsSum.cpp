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

    int sumVow = 0;

 /*   for (int i = 0; i < lenTxt; i++) {
        
        char currLetter = inpTxt[i];

        if (currLetter == 'a') {
            sumVow += 1;
        }
        else if (currLetter == 'e') {
            sumVow += 2;
        }
        else if (currLetter == 'i') {
            sumVow += 3;
        }
        else if (currLetter == 'o') {
            sumVow += 4;
        }
        else if (currLetter =='u') {
            sumVow += 5;
        }
    }*/

   /* for (char currLetter : inpTxt) {
        if (currLetter == 'a') {
            sumVow += 1;
        }
        else if (currLetter == 'e') {
            sumVow += 2;
        }
        else if (currLetter == 'i') {
            sumVow += 3;
        }
        else if (currLetter == 'o') {
            sumVow += 4;
        }
        else if (currLetter == 'u') {
            sumVow += 5;
        }
    }*/

    for (int i = 0; i < lenTxt; i++) {

        // char currLetter = inpTxt[i];

        if (inpTxt[i] == 'a') {
            sumVow += 1;
        }
        else if (inpTxt[i] == 'e') {
            sumVow += 2;
        }
        else if (inpTxt[i] == 'i') {
            sumVow += 3;
        }
        else if (inpTxt[i] == 'o') {
            sumVow += 4;
        }
        else if (inpTxt[i] == 'u') {
            sumVow += 5;
        }
    }

    cout << sumVow << endl;

    return 0;
}
