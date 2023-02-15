#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int people, total;
        // string ans;
        cin >> people >> total;
        int arr[people];
        for (int i = 0; i < people; i++)
        {
            cin >> arr[i];
            if (arr[i] > total)
            {
                cout << "0";
            }
            else
            {
                cout << "1";
                total = total - arr[i];
            }
        }
        cout << endl;
    }

    return 0;
}
