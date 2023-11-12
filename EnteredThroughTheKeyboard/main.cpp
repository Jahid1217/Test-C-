#include <iostream>

using namespace std;

int main()
{
    double base, exponent, result= 1.0;

    // Input the base number

    cout << "Enter the base number: ";
    cin >> base;

    // Input the exponent

    cout << "Enter the exponent: ";
    cin >> exponent;

    // Calculate the result using the power function

    if (exponent > 0) {
        for (int i = 0; i < exponent; i++) {
            result *= base;
        }
    } else if (exponent < 0) {
        for (int i = 0; i < -exponent; i++) {
            result /= base;
        }
    }
    cout << "Result: " << result <<endl;
    return 0;
}
