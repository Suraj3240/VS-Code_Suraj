#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    int m = a.size();
    int n = b.size();
    for (int i = 0; i < m; i++)
    {
        bool flag = true;
        for (int j = 0; j < n; j++)
        {
            if (a[i + j] != b[j])
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << "Pattern found with " << i << " shifts.\n";
        }
    }
    return 0;
}