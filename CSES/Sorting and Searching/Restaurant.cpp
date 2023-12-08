#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        mp[a] = 1;
        mp[b] = -1;
    }
    int ans = 0;
    int curr = 0;
    for (auto i : mp)
    {
        curr += i.second;
        ans = max(ans, curr);
    }
    cout << ans;
    return 0;
}