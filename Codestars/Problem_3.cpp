#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int a;
    int b;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                a = j - i;
                b = a;
                if (a < b)
                {
                    b = a;
                }
            }
        }
    }
    if (b > 0)
        cout << n - b << endl;
    else
        cout << "Weak Array" << endl;
    return 0;
}
