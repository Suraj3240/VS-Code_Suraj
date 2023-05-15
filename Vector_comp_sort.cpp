// Sorting Vector of vector by 1st element in ascending
// and 2nd element in descending order.

#include <bits/stdc++.h>
using namespace std;

bool sorted(vector<int> a, vector<int> b)
{
    if (a[0] != b[0])
        return a[0] < b[0];
    else
        return a[1] > b[1];
}

void print(vector<vector<int>> v)
{
    for (auto &i : v)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main()
{
    vector<vector<int>> v;
    for (int i = 0; i < 4; i++)
    {
        vector<int> t;
        for (int j = 0; j < 2; j++)
        {
            int x;
            cin >> x;
            t.push_back(x);
        }
        v.push_back(t);
    }
    cout << "Normal i/p vector\n";
    print(v);
    cout << endl;
    cout << "Normal sort function\n";
    sort(v.begin(), v.end());
    print(v);
    cout << endl;
    cout << "Comparator sort\n";
    sort(v.begin(), v.end(), sorted);
    print(v);

    return 0;
}