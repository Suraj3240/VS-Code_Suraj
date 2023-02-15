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
        ll sum_attack = 0, sum_def = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] >= 500)
            {
                sum_attack += arr[i];
            }
            else
            {
                sum_def += 1000 - arr[i];
            }
            if (sum_def == 0)
            {
                sum_def = arr[0];
                sum_attack -= arr[0];
            }
        }
        ll final_ans;
        final_ans = sum_attack * sum_def;
        cout << final_ans << endl;
    }

    return 0;
}
