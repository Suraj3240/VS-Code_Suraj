#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007

void primeFactors(int n)
{
    while (n % 2 == 0)
    {
        cout << 2 << " ";
        n /= 2;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n /= i;
        }
    }
    if (n > 2)
        cout << n;
    return;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    primeFactors(n);
    return 0;
}