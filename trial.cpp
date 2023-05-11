#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (n == 1)
    {
        cout << "Ramos\n";
        return;
    }
    int s_size = s.size();
    bool zlatan = false;
    bool ramos = true;
    bool loop = true;
    while (loop)
    {
        bool c_zlatan = zlatan;
        bool c_ramos = ramos;
        for (int i = 0; i < s_size - 1; i++)
        {
            if ((s[i] != 'a') && (s[i] != s[i + 1]))
            {
                s[i] = 'a';
                s[i + 1] = 'a';
                zlatan = !zlatan;
                ramos = !ramos;
                break;
            }
        }
        // cout << s << "-";
        if (!ramos && c_ramos == ramos)
        {
            cout << "Zlatan\n";
            return;
        }
        if (!zlatan && c_zlatan == zlatan)
        {
            cout << "Ramos\n";
            return;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
