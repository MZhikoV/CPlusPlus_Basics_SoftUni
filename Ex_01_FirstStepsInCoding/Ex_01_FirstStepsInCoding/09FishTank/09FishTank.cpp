#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int length, width, height;
    cin >> length >> width >> height;

    double percentMass;
    cin >> percentMass;

    int volumeTank = length * width * height;

    double volumeSand = volumeTank * percentMass / 100;

    double volumeWater = (volumeTank - volumeSand) / 1000;

    cout << volumeWater << endl;

}
