#include <iostream>

using namespace std;

int main()
{
     int n;
    double sum = 0.0;

    // Prompt the user to enter the value of n
    cout << "Enter the value of n: ";
    cin >> n;

    // Calculate the sum of the series
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }

    // Display the result
    cout << "Sum of the first " << n << " terms of the series: " << sum << endl;

    return 0;
}
