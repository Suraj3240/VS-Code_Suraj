// Passed one test case, but failed for others

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (n == 2)
        {
            if (arr[0] == arr[1])
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
            // break;
        }
        else
        {
            if (n % 2 == 0)
            {
                if ((arr[0] == arr[n - 1]) && (arr[0] != arr[n - 2]))
                {
                    cout << "YES" << endl;
                }
                else if ((arr[0] != arr[n - 1]) && (arr[0] == arr[n - 2]))
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
            else
            {
                if ((arr[0] == arr[n - 1]) && (arr[0] == arr[n - 2]))
                {
                    cout << "YES" << endl;
                }
                else if ((arr[0] != arr[n - 1]) && (arr[0] == arr[n - 2]))
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
    }

    return 0;
}
