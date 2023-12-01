#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ios;

int main()
{
    const double POINTS_BOUNDARY = 1250.5;
    
    string actorName, pointsInp, jurryInp;
    getline(cin, actorName);
    getline(cin, pointsInp);
    getline(cin, jurryInp);

    double academyPoints = stod(pointsInp);
    int jurryCount = stoi(jurryInp);

    for (int i = 0; i < jurryCount &&academyPoints<=POINTS_BOUNDARY; i++) {
        string jurryName, jurryPointsInp;
        getline(cin, jurryName);
        getline(cin, jurryPointsInp);
        double jurryPoints = stod(jurryPointsInp);

        academyPoints += (jurryName.length() * jurryPoints) / 2;
    }

    cout.setf(ios::fixed);
    cout.precision(1);

    if (academyPoints > POINTS_BOUNDARY) {
        cout << "Congratulations, " << actorName << " got a nominee for leading role with " << academyPoints << "!"<< endl;
    }
    else {
        cout << "Sorry, " << actorName << " you need " << POINTS_BOUNDARY - academyPoints << " more!" << endl;
    }

    return 0;
}
