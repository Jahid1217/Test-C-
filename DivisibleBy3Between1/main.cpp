#include <iostream>

using namespace std;

int main()
{
    int number;
    int sum = 0;

    // Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> number;

    // Calculate the sum of numbers divisible by 3 between 1 and the given number
    for (int i = 3; i <= number; i += 3) {
        sum += i;
    }

    // Display the result
    cout << "Sum of numbers divisible by 3 between 1 and " << number << ": " << sum <<endl;

    return 0;
}
