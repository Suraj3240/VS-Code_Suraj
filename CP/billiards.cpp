#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, lead1, lead2, sum1 = 0, sum2 = 0;
    int lead1_max = 0, lead2_max = 0;
    cin >> n;
    int arr1[n];
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
        sum1 += arr1[i];
        cin >> arr2[i];
        sum2 += arr2[i];
        if (sum1 > sum2)
        {
            lead1 = sum1 - sum2;
            if (lead1 > lead1_max)
            {
                lead1_max = lead1;
            }
        }
        else
        {
            lead2 = sum2 - sum1;
            if (lead2 > lead2_max)
            {
                lead2_max = lead2;
            }
        }
    }
    if (lead1_max > lead2_max)
    {
        cout << "1 " << lead1_max << endl;
    }
    else
    {
        cout << "2 " << lead2_max << endl;
    }

    return 0;
}
