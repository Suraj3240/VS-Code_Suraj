#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long x = (log(n) / log(10)) + 1;
    cout << x << endl;
    return 0;
}