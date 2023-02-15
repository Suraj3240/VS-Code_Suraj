#include <bits/stdc++.h>
using namespace std;

int valueRoman(char a)
{
    if (a == 'I')
        return 1;
    else if (a == 'V')
        return 5;
    else if (a == 'X')
        return 10;
    else if (a == 'L')
        return 50;
    else if (a == 'C')
        return 100;
    else if (a == 'D')
        return 500;
    else
        return 1000;
}

bool checkNext(char a, char b)
{
    if (valueRoman(a) < valueRoman(b))
        return true;
    return false;
}

int romanToInt(string s)
{
    int i = 0;
    int ans = 0;
    while (s[i] != '\0')
    {
        if (checkNext(s[i], s[i + 1]) && s[i + 1] != '\0')
        {
            int temp = valueRoman(s[i + 1]) - valueRoman(s[i]);
            ans += temp;
            i += 2;
        }
        else
        {
            ans += valueRoman(s[i]);
            i++;
        }
    }
    return ans;
}

int main()
{
    string a;
    cin >> a;

    cout << romanToInt(a);
}
