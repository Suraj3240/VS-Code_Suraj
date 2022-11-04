//******** Passed 2 test cases *********

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
        ll a;
        ll even = 0, odd = 0;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> a;
            if (a % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if (n == 1)
        {
            if (odd == n)
            {
                cout << "Chef" << endl;
            }
            else
            {
                cout << "Chefina" << endl;
            }
        }
        else if (n % 2 == 0)
        {
            if (even == n - 1 || odd == n - 1)
            {
                cout << "Chef" << endl;
            }
            else
            {
                cout << "Chefina" << endl;
            }
        }
        else
        {
            if (odd == n || even == n - 1 || odd == n - 1)
            {
                cout << "Chef" << endl;
            }
            else
            {
                cout << "Chefina" << endl;
            }
        }
    }

    return 0;
}
