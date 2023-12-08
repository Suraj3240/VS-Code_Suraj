#include <bits/stdc++.h>
#define int long long int
using namespace std;

void generatePat(string &pat, vector<int> &lps)
{
    int m = pat.size();
    int i = 1;
    int j = 0;
    lps[0] = 0;
    while (i < m)
    {
        if (pat[i] == pat[j])
        {
            j++;
            lps[i] = j;
            i++;
        }
        else
        {
            if (j != 0)
            {
                j = lps[j - 1];
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}
int stringMatching(string &text, vector<int> &lps)
{
}
int32_t main()
{
    string text, pat;
    cin >> text >> pat;
    int m = pat.size();
    vector<int> lps(m);
    generatePat(pat, lps);
    cout << stringMatching(text, lps);
    return 0;
}