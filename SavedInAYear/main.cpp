#include <iostream>

using namespace std;

int main()
{
    double monthlySavings;

    int monthsInAYear = 12;

    // Prompt the user to input the amount saved each month

    cout << "Enter the amount of money saved each month: ";

    cin >> monthlySavings;

    // Calculate the total amount saved in a year

    double totalSavings = monthlySavings * monthsInAYear;

    // Display the result

    cout << "Total amount saved in a year: " << totalSavings <<"/="<<endl;

    return 0;
}
