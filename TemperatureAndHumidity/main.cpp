#include <iostream>

using namespace std;

int main()
{
    int days = 5;
    double totalTemperature = 0.0;
    double totalHumidity = 0.0;

    for (int i = 1; i <= days; i++) {
        double temperature, humidity;

        // Prompt the user to input temperature and humidity readings for each day
        cout << "Enter temperature for day " << i << ": ";
        cin >> temperature;
        cout << "Enter humidity for day " << i << ": ";
        cin >> humidity;

        totalTemperature += temperature;
        totalHumidity += humidity;
    }

    // Calculate average temperature and humidity
    double averageTemperature = totalTemperature / days;
    double averageHumidity = totalHumidity / days;

    // Display the results
    cout << "Average Temperature: " << averageTemperature << " degrees Celsius" <<endl;
    cout << "Average Humidity: " << averageHumidity << "%" << endl;

    return 0;
}
