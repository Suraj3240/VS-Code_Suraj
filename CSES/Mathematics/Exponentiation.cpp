#include <bits/stdc++.h>
using namespace std;
#define int long long int
int mod = 1e9 + 7;

int exponentiation(int a, int b)
{
    if (b == 0)
        return 1;
    if (b == 1)
        return a;
    int s = exponentiation(a, b / 2) % mod;
    if (b % 2 == 0)
    {
        return (s * s) % mod;
    }
    else
    {
        return (((s * s) % mod) * a) % mod;
    }
}

int32_t main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        cout << exponentiation(a, b) << endl;
    }
    return 0;
}