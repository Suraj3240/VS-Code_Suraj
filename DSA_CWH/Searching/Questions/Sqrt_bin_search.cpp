#include <bits/stdc++.h>
using namespace std;

// To find the integer part of sqrt of a number
// eg: sqrt (67) = 8.1853 but ans = 8
int sqrtInteger(int n)
{
    int s = 0, e = n;
    long long int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        long long int sqr = mid * mid;
        if (sqr == n)
            return mid;
        else if (sqr > n)
            e = mid - 1;
        else
        {
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

// To get exact sqrt answer of a number
// to required number of decimal places.
double precisionAns(int n, int dec, int precision)
{
    double factor = 1;
    double ans = dec;
    for (int i = 1; i <= precision; i++)
    {
        factor /= 10;
        for (double j = ans; j * j < n; j += factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int decAns = sqrtInteger(n);
    cout << decAns << endl;
    cout << precisionAns(n, decAns, 4);

    return 0;
}