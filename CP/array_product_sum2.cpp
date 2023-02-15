#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        ll count_0 = 0, count_1 = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
                count_1++;
            else
            {
                ans += (count_1 * (count_1 + 1)) / 2;
                count_1 = 0;
            }
        }
        ans += (count_1 * (count_1 + 1)) / 2;
        cout << ans << endl;
    }

    // ll n = 99999;
    // // double ans = (99999 * (99999 + 1)) / 2;
    // // ll ans = (99999 * (99999 + 1)) / 2;
    // ll ans = (n * (n + 1)) / 2;
    // cout << ans;
    return 0;
}
