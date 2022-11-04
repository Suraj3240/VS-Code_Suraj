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
        char a;
        char latest;
        string final;
        for (int i = 1; i <= n; i++)
        {
            cin >> a;
            if (a == 'A')
            {
                // a = 'T';
                latest = 'T';
                final += latest;
            }
            else if (a == 'T')
            {
                // a = 'A';
                latest = 'A';
                final += latest;
            }
            else if (a == 'C')
            {
                // a = 'G';
                latest = 'G';
                final += latest;
            }
            else if (a == 'G')
            {
                // a = 'C';
                latest = 'C';
                final += latest;
            }
        }
        cout << final << endl;
    }

    return 0;
}
