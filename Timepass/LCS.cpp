/*
3
abdcbz
acb
zxtacy
axcayz
abc
abc

LCS is: acb 3
LCS is: xay 3
LCS is: abc 3
*/

#include <bits/stdc++.h>
using namespace std;

int lenLCS(string s1, string s2)
{
    int n1 = s1.size();
    int n2 = s2.size();
    vector<vector<int>> dp(n1 + 1, vector<int>(n2 + 1, 0));
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (s1[i] == s2[j])
            {
                dp[i + 1][j + 1] = 1 + dp[i][j];
            }
            else
            {
                dp[i + 1][j + 1] = max(dp[i][j + 1], dp[i + 1][j]);
            }
        }
    }

    string lcs = "";
    int i = n1 - 1, j = n2 - 1;
    while (i >= 0 && j >= 0)
    {
        // cout << s1[i];
        int curr = dp[i + 1][j + 1];
        int top = dp[i][j + 1];
        int left = dp[i + 1][j];
        if (left == top)
        {
            if (curr == top)
                i--;
            else
            {
                lcs = s1[i] + lcs;
                i--, j--;
            }
        }
        else
        {
            if (curr == left)
                j--;
            else
                i--;
        }
    }

    cout << "LCS is: " << lcs << " ";

    return dp[n1][n2];
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        cout << lenLCS(s1, s2) << "\n";
    }
    return 0;
}