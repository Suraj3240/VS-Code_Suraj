#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        cout << pow(2, b - a) << endl;
    }
    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int A[a];
        int sum = 0;
        for (int i = 0; i < a; i++)
        {
            cin >> A[i];
            if (A[i] < (b - c))
                A[i] = b - c;
            sum += A[i];
        }
        cout << sum << endl;
    }
    return 0;
}


*/