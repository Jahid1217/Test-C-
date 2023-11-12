#include <iostream>
#include <string>

using namespace std;

int main()
{
     int numberOfPlanets = 8;

    double totalDistance = 0.0;


    string planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};


    for (int i = 0; i < numberOfPlanets; i++) {
        double distance;
        cout << "Enter the distance from the Sun for " << planets[i] << " (in millions of kilometers): ";
        cin >> distance;
        totalDistance += distance;
    }

    double averageDistance = totalDistance / numberOfPlanets;


    cout << "Average distance from the Sun for the " << numberOfPlanets << " planets: " << averageDistance << " million kilometers" <<endl;
    return 0;
}
