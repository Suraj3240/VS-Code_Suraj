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
        if (a % b == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            ll temp = c;
            if (temp % a != 0)
            {
                temp = c + a - (temp % a);
            }
            while (!(temp % a == 0 && temp % b != 0))
                temp += a;

            cout << temp << endl;
        }
    }

    return 0;
}
