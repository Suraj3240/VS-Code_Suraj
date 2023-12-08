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
    int maxi = v[0];
    int curr = v[0];
    for (int i = 1; i < n; i++)
    {
        if (curr < 0)
            curr = 0;
        curr += v[i];
        maxi = max(maxi, curr);
    }
    cout << maxi;
    return 0;
}