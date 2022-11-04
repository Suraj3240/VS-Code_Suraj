#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    ll a[n], b[n], sum_a = 0, sum_b = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum_a += a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    sort(b, b + n);
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }

    if (b[n - 1] + b[n - 2] >= sum_a)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
