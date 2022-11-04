#include <bits/stdc++.h>
using namespace std;

int main()
{
    string l, m, n;
    cin >> l >> m >> n;
    sort(n.begin(), n.end());
    string add = l + m;
    // cout << add << endl;
    sort(add.begin(), add.end());
    // cout << add << endl;
    if (add == n)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
