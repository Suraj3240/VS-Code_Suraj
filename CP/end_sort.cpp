#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, num1, num_last;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 1)
            {
                num1 = i;
            }
            if (arr[i] == n)
            {
                num_last = i;
            }
        }
        // if (num1 == 0 && num_last == n - 1)
        // {
        //     cout << "0" << endl;
        // }
        // else if (num1 == 0 && num_last != n - 1)
        // {
        //     cout << n - 1 - num_last;
        // }
        // else if (num1 != 0 && num_last == n - 1)
        // {
        //     cout << num1 << endl;
        // }
        // else
        // {
        if (num1 > num_last)
        {
            cout << num1 + (n - 1 - num_last - 1) << endl;
        }
        else
        {
            cout << num1 + (n - 1 - num_last) << endl;
        }
        // }
    }

    return 0;
}
