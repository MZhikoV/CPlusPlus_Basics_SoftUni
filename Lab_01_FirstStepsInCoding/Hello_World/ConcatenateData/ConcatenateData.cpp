#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string firstName;
    cin >> firstName;

    string lastName;
    cin >> lastName;

    int age;
    cin >> age;

    string town;
    cin >> town;

    cout << "You are " << firstName << " "<<lastName << ", a " << age << "-years old person from " << town << "." << endl;

    //"You are <firstName> <lastName>, a <age>-years old person from <town>."
}
