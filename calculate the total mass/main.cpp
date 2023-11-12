#include <iostream>
#include <string>

using namespace std;

int main()
{
        const int numPlanets = 8;  // There are 8 planets in the solar system
        double totalMass = 0.0;

    // Arrays to store planet names and masses
    string planetNames[numPlanets];
    double planetMasses[numPlanets];

    // Input planet names and masses
    for (int i = 0; i < numPlanets; i++) {
        cout << "Enter the name of planet " << i + 1 << ": ";
        cin >> planetNames[i];

        cout << "Enter the mass of planet " << i + 1 << " (in kilograms): ";
        cin >> planetMasses[i];

        totalMass += planetMasses[i];  // Accumulate the total mass
    }

    // Print the total mass of the solar system
    cout << "\nTotal Mass of the Solar System: " << totalMass << " kilograms\n";

    return 0;
}
