//********* Fact using For Loop *********

#include <iostream>
using namespace std;

int main()
{
    int n, fact = 1;
    cout << "Enter a number:";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        fact = i * fact;
    }
    cout << "\nThe factorial of " << n << " is : " << fact;
    return 0;
}