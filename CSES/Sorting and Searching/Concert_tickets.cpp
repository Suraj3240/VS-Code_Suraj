#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    int n, m;
    cin >> n >> m;
    set<pair<int, int>> s;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s.insert({a[i], i});
    }
    vector<int> ans;
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        if (b[i] < s.begin()->first)
        {
            ans.push_back(-1);
            continue;
        }
        auto it = s.lower_bound({b[i], 0});
        if (it->first != b[i] && it != s.begin())
            it--;
        // cout << it->first << " " << it->second << endl;
        if (it != s.end())
        {
            ans.push_back(it->first);
        }
        else
        {
            ans.push_back(-1);
        }
        if (it != s.end())
            s.erase(it);
    }
    for (auto i : ans)
        cout << i << endl;
    return 0;
}