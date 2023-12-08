#include <bits/stdc++.h>
using namespace std;
#define int long long
#define m 1000000007

int solve(int sum, int &n, vector<int> &dp)
{
    if (sum == 0)
        return 1;
    if (dp[sum] != -1)
        return dp[sum];
    int c = 0;
    for (int i = 1; i <= min((int)6, sum); i++)
    {
        c = (c + solve(sum - i, n, dp)) % m;
    }
    dp[sum] = (c % m);
    return dp[sum];
}

int32_t main()
{
    int n;
    cin >> n;
    vector<int> dp(n + 1, -1);
    int ans = solve(n, n, dp);
    cout << ans;
    return 0;
}