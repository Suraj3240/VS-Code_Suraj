#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    float a = sqrt(n);
    // cout << a << endl;
    int b = (int)a;
    if (a == b)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}