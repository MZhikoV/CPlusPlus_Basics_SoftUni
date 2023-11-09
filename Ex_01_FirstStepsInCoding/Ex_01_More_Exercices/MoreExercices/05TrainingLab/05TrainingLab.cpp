#include <iostream>
#include<math.h>

using std::cin;
using std::cout;
using std::endl;
using std::ios;

int main()
{
    int const DOOR = 1, DECK = 2, CORRIDOR_WIDTH=1;

    double length, width;
    cin >> length >> width;

    int columnCount = length / 1.2;

    int rowCount = (width - CORRIDOR_WIDTH) / 0.7;

    int workplaceCount = columnCount*rowCount - DOOR - DECK;

    cout <<workplaceCount << endl;
}
