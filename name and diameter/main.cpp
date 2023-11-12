#include <iostream>
#include <string>

using namespace std;

int main()
{
    const int numPlanets = 4;


    string planetNames[numPlanets];
    double planetDiameters[numPlanets];


    for (int i = 0; i < numPlanets; i++) {
        cout << "Enter the name of planet " << i + 1 << ": ";
        cin >> planetNames[i];

        cout << "Enter the diameter of planet " << i + 1 << " (in kilometers): ";
        cin >> planetDiameters[i];
    }


    cout << "\nSolar System Planets and Diameters:\n";
    for (int i = 0; i < numPlanets; i++) {
        cout << "Planet Name: " << planetNames[i] << ", Diameter: " << planetDiameters[i] << " kilometers\n";
    }

    return 0;
}
