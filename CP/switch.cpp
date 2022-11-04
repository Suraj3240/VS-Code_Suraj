#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        char arr_ini[n];
        char arr_final[n];
        ll count_ini_0 = 0, count_ini_1 = 0;
        ll count_0 = 0, count_1 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr_ini[i];
            if (arr_ini[i] == '0')
                count_ini_0++;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr_final[i];
            if (arr_final[i] == '0')
                count_0++;
        }
        ll ans = abs(count_ini_0 - count_0);

        if (ans % 2 == 0)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }

    return 0;
}
