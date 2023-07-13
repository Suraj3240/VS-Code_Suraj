#include <bits/stdc++.h>
using namespace std;

void generate(string &a, int open, int close, vector<string> &ans)
{
    if (!open && !close)
    {
        ans.push_back(a);
        return;
    }
    if (open > 0)
    {
        a.push_back('(');
        generate(a, open - 1, close, ans);
        a.pop_back();
    }
    if (close > 0 && open < close)
    {
        a.push_back(')');
        generate(a, open, close - 1, ans);
        a.pop_back();
    }
}

int main()
{
    int n;
    cin >> n;
    vector<string> ans;
    string temp = "";
    generate(temp, n, n, ans);
    for (auto i : ans)
        cout << i << " ";
    return 0;
}