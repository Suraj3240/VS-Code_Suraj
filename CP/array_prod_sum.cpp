#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, count_0 = 0, count_1 = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 0)
                count_0++;
            else
                count_1++;
        }
        ll sum = 0;
        ll ans_2 = (n * (n + 1)) / 2;
        if (count_0 == n)
            cout << 0 << endl;
        else if (count_1 == n)
            cout << ans_2 << endl;
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] != 0)
                {
                    sum++;
                    for (int j = i + 1; j < n; j++)
                    {
                        if (a[j] == 1)
                            sum += 1;
                        else
                            break;
                    }
                }
            }
            cout << sum << endl;
        }
    }

    return 0;
}
