#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, vow = 0, consonants = 0;
        cin >> n;
        char a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        // cin >> a[n];
        for (int i = 0; i < n; i++)
        {
            if (a[i] != 'a' && a[i] != 'e' && a[i] != 'i' && a[i] != 'o' && a[i] != 'u')
            {
                consonants++;
                if (consonants == 4)
                {
                    break;
                }
                // vow++;
            }
            else
            {
                consonants = 0;
            }
        }
        if (consonants >= 4)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}
