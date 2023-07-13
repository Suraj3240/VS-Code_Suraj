#include <bits/stdc++.h>
using namespace std;

long long power(int a, int n)
{
    if (n <= 1)
        return a;
    if (n % 2 == 0)
    {
        return power(a, n / 2) * power(a, n / 2);
    }
    else
    {
        return power(a, n / 2) * power(a, n / 2) * a;
    }
}

int main()
{
    long long a, n;
    cin >> a >> n;
    cout << power(a, n) << endl;
    return 0;
}