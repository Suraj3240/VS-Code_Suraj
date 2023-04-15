#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    cout << s << endl;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            s[i] = '4';
            s.insert(i + 1, "#4@@");
        }
    }
    cout << s << endl;

    return 0;
}