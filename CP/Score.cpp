#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int score;
        cin >> score;
        if (score % 100 == 0)
        {
            cout << score / 100 << endl;
        }
        else
        {
            int n = score % 100;
            if (n > 10 - (score / 100))
            {
                cout << "-1" << endl;
            }
            else
            {
                cout << (score / 100) + (score % 100) << endl;
            }
        }
    }

    return 0;
}
