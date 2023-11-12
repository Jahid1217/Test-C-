#include <iostream>

using namespace std;

int main()
{
    int number;
    int sum = 0;

    // Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> number;

    // Calculate the sum of even numbers between 1 and the given number
    for (int i = 2; i <= number; i += 2) {
        sum += i;
    }

    // Display the result
    cout << "Sum of even numbers between 1 and " << number << ": " << sum << endl;

    return 0;
}
