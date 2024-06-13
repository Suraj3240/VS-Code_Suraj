// Refer link: https://www.geeksforgeeks.org/counting-sort/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }

    // find max element and create a freq array of size (max element + 1)
    int maxi = *max_element(v.begin(), v.end());
    vector<int> freq(maxi + 1, 0);
    for (int i = 0; i < n; i++)
    {
        freq[v[i]]++;
    }

    // prefix sum of freq array to get the position of each element
    for (int i = 1; i < freq.size(); i++)
    {
        freq[i] += freq[i - 1];
    }

    // create a output array and fill it with the elements in the order of their position
    vector<int> op(n);
    for (int i = n - 1; i >= 0; i--)
    {
        op[freq[v[i]] - 1] = v[i];
        freq[v[i]]--; // to decrease the position of the element
    }

    // print the output array
    for (auto i : op)
    {
        cout << i << " ";
    }
    return 0;
}