#include <bits/stdc++.h>
using namespace std;

int checkArrays(int arr1[26], int arr2[26])
{
    for (int i = 0; i < 26; i++)
    {
        if (arr1[i] != arr2[i])
            return 0;
    }
    return 1;
}
bool permut_string(string s1, string s2)
{
    int arr1[26] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        int index = s1[i] - 'a';
        arr1[index]++;
    }

    int windowSize = s1.length();
    int i = 0;
    int arr2[26] = {0};
    while (i < windowSize && i < s2.length())
    {
        int index = s2[i] - 'a';
        arr2[index]++;
        i++;
    }
    if (checkArrays(arr1, arr2))
        return 1;
    while (i < s2.length())
    {
        // remove old char
        char oldChar = s2[i - windowSize];
        int index = oldChar - 'a';
        arr2[index]--;

        // add new char
        index = s2[i] - 'a';
        arr2[index]++;
        i++;

        if (checkArrays(arr1, arr2))
            return 1;
    }
    return 0;
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    cout << permut_string(s1, s2);

    return 0;
}