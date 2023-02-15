#include <bits/stdc++.h>
using namespace std;

int rounding(double n, int factor)
{
    int num1 = n / factor;
    int num2 = num1 + 1;
    if (abs(n - (num1 * factor)) > abs(n - (num2 * factor)))
    {
        return num2 * factor;
    }
    return num1 * factor;
}

int main()
{
    double n;
    int fac;
    cout << "Enter number: ";
    cin >> n;
    cout << "Enter rounding factor: ";
    cin >> fac;
    cout << "Answer is: " << rounding(n, fac);
    return 0;
}
