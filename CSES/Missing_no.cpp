#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int n;
    cin >> n;
    vector<int> v(n - 1);
    for (auto &i : v)
        cin >> i;
    sort(v.begin(), v.end());
    int s = 1;
    bool f = 0;
    for (auto i : v)
    {
        if (i != s)
        {
            cout << s;
            f = 1;
            break;
        }
        s++;
    }
    if (!f)
        cout << n;
    return 0;
}