#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(begin(v), end(v));
    int ans = INT64_MAX;
    // cout << ans << " ";
    if (n & 1)
    {
        int mid = v[n / 2];
        int s = 0;
        for (int i = 0; i < n; i++)
        {
            s += abs(mid - v[i]);
        }
        ans = min(ans, s);
    }
    else
    {
        int mid1 = v[(n / 2) - 1];
        int mid2 = v[n / 2];
        int s = 0;
        int s2 = 0;
        for (int i = 0; i < n; i++)
        {
            s += abs(mid1 - v[i]);
            s2 += abs(mid2 - v[i]);
        }
        ans = min({ans, s, s2});
    }
    cout << ans;
    return 0;
}