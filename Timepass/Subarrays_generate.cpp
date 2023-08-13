#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &i : arr)
        cin >> i;
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        int size = 1;
        while (size <= n - i)
        {
            vector<int> t;
            for (int j = 1; j <= size; j++)
            {
                t.push_back(arr[i + j - 1]);
            }
            ans.push_back(t);
            size++;
        }
    }
    for (auto i : ans)
    {
        for (auto j : i)
            cout << j << " ";
        cout << endl;
    }
    return 0;
}