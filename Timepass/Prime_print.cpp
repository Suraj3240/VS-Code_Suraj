//******** Printing Prime Numbers *********

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the last number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int count = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            cout << i << " ";
        }
    }
    return 0;
}