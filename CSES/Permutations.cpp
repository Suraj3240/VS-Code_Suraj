#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int n;
    cin >> n;
    if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION";
        return 0;
    }
    if (n == 4)
    {
        cout << 2 << " " << 4 << " " << 1 << " " << 3;
        return 0;
    }
    vector<int> v(n);
    int c = 1;
    for (int i = 0; i < n; i += 2)
    {
        v[i] = c;
        c++;
    }
    for (int i = 1; i < n; i += 2)
    {
        v[i] = c;
        c++;
    }
    for (auto i : v)
        cout << i << " ";
    return 0;
}