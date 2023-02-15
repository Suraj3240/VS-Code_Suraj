#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        char c;
        int count = 0;
        for (int i = 1; i <= a; i++)
        {
            cin >> c;
            for (int i = 1; i <= c / 2; i++)
            {
                if (i == ')')
                {
                    count++;
                }
            }
            for (int i = (a / 2) + 1; i <= a; i++)
            {
                if (i == '(')
                {
                    count++;
                }
            }
        }
        cout << count << endl;
    }

    return 0;
}
