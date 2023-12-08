#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    bool f = 1;
    for (int i = 0; i < n; i++)
    {
        if (mp.find(x - v[i]) != mp.end() && mp[x - v[i]] != i)
        {
            cout << i + 1 << " " << mp[x - v[i]] + 1;
            f = 0;
            break;
        }
        mp[v[i]] = i;
    }
    if (f)
        cout << "IMPOSSIBLE";
    return 0;
}