#include <bits/stdc++.h>
using namespace std;

int main()
{
    // unordered_map<int, int> m;
    map<int, int> m;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        m[x]++;
    }

    // for (auto it : m)
    // {
    //     cout << it.first << " " << it.second << endl;
    // }
    for (auto n : m)
    {
        cout << n.first << " " << n.second << endl;
    }
    return 0;
}