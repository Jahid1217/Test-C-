#include <iostream>
#include <string>
#include <cmath>

using namespace std;
int main()
{
    const int numPlanets = 4;  // There are 8 planets in the solar system
    double totalDensity = 0.0;

    // Arrays to store planet names, masses, and diameters
    string planetNames[numPlanets];
    double planetMasses[numPlanets];
    double planetDiameters[numPlanets];

    // Input planet names, masses, and diameters
    for (int i = 0; i < numPlanets; i++) {
        cout << "Enter the name of planet " << i + 1 << ": ";
        std::cin >> planetNames[i];
        cout << "Enter the mass of planet " << i + 1 << " (in kilograms): ";
        cin >> planetMasses[i];
        cout << "Enter the diameter of planet " << i + 1 << " (in kilometers): ";
        cin >> planetDiameters[i];

        double radius = planetDiameters[i] / 2.0;
        double volume = (4.0 / 3.0) * M_PI * pow(radius, 3);  // Calculate the volume of the planet

        double density = planetMasses[i] / volume;  // Calculate the density
        totalDensity += density;  // Accumulate the total density
    }

    // Calculate the average density
    double averageDensity = totalDensity / numPlanets;

    // Print the average density of the planets in the solar system
    cout << "\nAverage Density of the Planets in the Solar System: " << averageDensity << " kilograms per cubic kilometer\n";

    return 0;
}
