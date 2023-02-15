#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll nor, pre, nos, rs;
        cin >> nor >> pre >> nos >> rs;
        if ((nos * nor) > rs)
        {
            cout << -1 << endl;
        }
        else
        {
            ll value_b = (rs - (nos * nor)) / (pre - nor);
            ll ans = min(value_b, nos);
            cout << nos - ans << " " << ans << endl;
        }
    }
    return 0;
}