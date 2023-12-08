#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    for (int i = 0; i < m; i++)
        cin >> b[i];
    sort(b.begin(), b.end());
    int ans = 0;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if ((b[j] >= (a[i] - k)) && (b[j] <= (a[i] + k)))
        {
            ans++;
            i++, j++;
        }
        else if ((b[j] < (a[i] - k)))
        {
            j++;
        }
        else
        {
            i++;
        }
    }
    cout << ans;
    return 0;
}