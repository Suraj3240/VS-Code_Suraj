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
    // 2 3 4 7 9       max=sum=22
    // 1 2 3

    return 0;
}