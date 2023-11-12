#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i += 2) {
        sum += i * i;
    }
    cout << "The sum of the squares of odd numbers between 1 and " << n << " is: " << sum <<endl;

    return 0;
}
