#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int arr[a];
        int flag = 1;
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }
        for (int j = 0; j < a - 1; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                if ((arr[j] + arr[j + 1]) > b)
                {
                    flag = 0;
                    break;
                }
                else
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
        if (flag == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}
