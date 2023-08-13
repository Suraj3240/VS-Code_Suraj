#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    string str;
    cin >> str;
    int ans = 1;
    int curr = 1;
    for (int i = 1; i < str.size(); i++)
    {
        if (str[i] == str[i - 1])
            curr++;
        else
        {
            ans = max(ans, curr);
            curr = 1;
        }
    }
    ans = max(ans, curr);
    cout << ans;
    return 0;
}