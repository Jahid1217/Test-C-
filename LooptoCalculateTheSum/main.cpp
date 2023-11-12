#include <iostream>

using namespace std;

int main()
{
    int n;
    double sum = 0.0;


    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum += static_cast<double>((i % 2 == 0 ? -1 : 1)) / i;
    }


    cout << "Sum of the first " << n << " terms of the series: " << sum << endl;



    return 0;
}
