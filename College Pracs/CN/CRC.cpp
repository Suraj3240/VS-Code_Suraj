#include <bits/stdc++.h>
using namespace std;

string xor1(string a, string b)
{
    int n = a.size();
    string ans = "";
    for (int i = 1; i < n; i++)
    {
        if (a[i] == b[i])
            ans += '0';
        else
            ans += '1';
    }
    return ans;
}

string xor_divide(string dividend, string divisor)
{
    int size = divisor.size();
    int k = size;
    int n = dividend.size();
    string temp = dividend.substr(0, size);
    while (size < n)
    {
        if (temp[0] == '1')
        {
            temp = (xor1(divisor, temp)) + dividend[size];
        }
        else
        {
            string t = "";
            for (int i = 0; i < k; i++)
                t += '0';
            temp = (xor1(t, temp)) + dividend[size];
        }
        size++;
    }
    // compute 1 more time
    if (temp[0] == '1')
    {
        temp = (xor1(divisor, temp));
    }
    else
    {
        string t = "";
        for (int i = 0; i < k; i++)
            t += '0';
        temp = (xor1(t, temp));
    }
    return temp;
}

string encode(string data, string key)
{
    int n = key.size();
    string temp = data;
    // add (n-1) '0' to data
    for (int i = 1; i < n; i++)
        temp += '0';
    string rem = xor_divide(temp, key);
    cout << "Remainder: " << rem << "\n";
    data += rem;
    cout << "Encoded Data (Data + Remainder): " << data << "\n";
    return data;
}

void receiver(string data, string key)
{
    // if remainder has all 0s, then no error
    string rem = xor_divide(data, key);
    for (int i = 0; i < rem.size(); i++)
    {
        if (rem[i] == '1')
        {
            cout << "Error detected.....\n";
            return;
        }
    }
    cout << "No error detected...\n";
    return;
}

int main()
{
    string data = "100100";
    string key = "1101";
    cout << "Sender's side: \n";
    string code = encode(data, key);

    cout << "\nReceiver's side: \n";
    receiver(code, key);
    return 0;
}