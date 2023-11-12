#include <iostream>

using namespace std;

int main()
{
    int n;

    // Prompt the user to enter the value of n
    cout << "Enter the value of n: ";
    cin >> n;

    int first = 1, second = 1, next, sum = 0;

    for (int i = 1; i <= n; i++) {
        if (i == 1 || i == 2) {
            sum += 1;
            continue;
        }

        next = first + second;
        sum += next;

        first = second;
        second = next;
    }

    // Display the result
    cout << "Sum of the first " << n << " terms of the Fibonacci series: " << sum << endl;

    return 0;
}
