#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    int c = 0;
    int curr = v[0];
    for (int i = 1; i < n; i++)
    {
        if (curr > v[i])
        {
            c += curr - v[i];
        }
        else
        {
            curr = v[i];
        }
    }
    cout << c;
    return 0;
}