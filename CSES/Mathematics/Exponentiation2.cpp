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
int expo(int a, int b)
{
    if (b == 0)
        return 1;
    if (b == 1)
        return a;
    int s = exponentiation(a, b / 2);
    if (b % 2 == 0)
    {
        return (s * s);
    }
    else
    {
        return (a * s * s);
    }
}

int32_t main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        cout << exponentiation(a, expo(b, c)) << endl;
    }
    return 0;
}