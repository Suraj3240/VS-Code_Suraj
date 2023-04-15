#include <bits/stdc++.h>
using namespace std;

void solve(int n)
{
    if (n == 1)
    {
        cout << n << " Not a prime number\n";
        return;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << n << " Not a prime number\n";
            return;
        }
    }
    cout << n << " It is a prime number\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        solve(n);
    }

    return 0;
}