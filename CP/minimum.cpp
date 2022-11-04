#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        ll count = 0;
        if (a != b && a != c && b != c)
        {
            cout << "NO" << endl;
        }
        else
        {
            if ((a < b && a < c) || (b < a && b < c) || (c < a && c < b))
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}
