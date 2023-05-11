#include <bits/stdc++.h>
using namespace std;
#define ll long long
int round(int n)
{
    int rem = n % 10;
    int div = n / 10;
    if (rem >= 5)
        return ((div + 1) * 10);
    return div * 10;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        cout << 100 - round(a) << endl;
    }

    return 0;
}
