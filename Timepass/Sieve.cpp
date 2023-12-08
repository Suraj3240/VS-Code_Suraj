// check how many numbers are prime from 1-n
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<bool> sieve(n + 1, 1);
    sieve[0] = 0, sieve[1] = 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (sieve[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                sieve[j] = 0;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (sieve[i])
            cout << i << " ";
    }
    return 0;
}