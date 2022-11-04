//********** Fibonacci series using Recursion *********

#include <iostream>
using namespace std;

int fib(int n)
{
    if (n <= 2)
    {
        return 1;
    }
    return fib(n - 2) + fib(n - 1);
}

int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;

    cout << "\nThe fibonacci series at " << n << " is :" << fib(n);
    return 0;
}