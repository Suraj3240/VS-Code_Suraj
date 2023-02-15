#include <bits/stdc++.h>
using namespace std;

// Gives the frequency of each character in a string
// eg: abbch
//     a1b2c1h1
string countChars(string arr)
{
    sort(arr.begin(), arr.end());
    int i = 0;
    string temp = "";
    while (i < arr.length())
    {
        char a = arr[i];
        temp.push_back(a);
        int count = 0;
        while (arr[i] == a)
        {
            count++;
            i++;
        }
        // if (count > 1)
        // {
        string t = to_string(count);
        char b = t[0];
        temp.push_back(b);
        // }
    }
    return temp;
}

int main()
{
    string arr;
    getline(cin, arr);
    cout << countChars(arr);
    return 0;
}