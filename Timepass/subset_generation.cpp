#include <bits/stdc++.h>
using namespace std;

void generate_subset(vector<int> &v, int idx, vector<vector<int>> &subsets, vector<int> &temp)
{
    if (idx >= v.size()) // base condition
    {
        subsets.push_back(temp);
        return;
    }

    // exclude
    generate_subset(v, idx + 1, subsets, temp);

    // include
    temp.push_back(v[idx]);
    generate_subset(v, idx + 1, subsets, temp);
    temp.pop_back(); // backtrack
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    vector<vector<int>> subsets;
    vector<int> temp;
    generate_subset(v, 0, subsets, temp);
    for (auto i : subsets)
    {
        for (auto j : i)
            cout << j << " ";
        cout << endl;
    }

    return 0;
}