#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    int ans = 0;
    int i = 0, j = n - 1;
    sort(begin(a), end(a));
    while (i <= j)
    {
        if (a[i] + a[j] <= x)
            i++;
        ans++;
        j--;
    }
    cout << ans;
    return 0;
}