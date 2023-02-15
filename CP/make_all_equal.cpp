#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        map<int, int> count;
        int max_count = 0;
        for (auto i : a)
        {
            count[i]++;
            max_count = max(max_count, count[i]);
        }
        cout << (n - max_count) << endl;
    }

    return 0;
}
