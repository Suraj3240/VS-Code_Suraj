#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter string length: ";
    int n;
    cin >> n;
    cout << "Enter string array: \n";
    vector<int> arr(n);
    for (auto &i : arr)
        cin >> i;
    cout << "Enter no of frames: ";
    int f;
    cin >> f;
    vector<int> frames(f, -1);
    int i = 0;
    int hit = 0;
    int miss = 0;
    cout << "\nString[i]\tFrame\t\t\tStatus\n";
    for (int j = 0; j < n; j++)
    {
        int a = hit;
        int curr = arr[j];
        cout << curr << "\t\t";

        // print current frames
        for (int k = 0; k < f; k++)
            cout << frames[k] << "  ";
        cout << "\t\t";

        for (int k = 0; k < f; k++)
        {
            if (curr == frames[k])
            {
                hit++;
                cout << "H\n";
                break;
            }
        }

        if (a == hit) // check if hit or not
        {
            miss++;
            frames[i] = curr;
            i = (i + 1) % f;
            cout << "F\n";
        }
    }
    cout << "Hits: " << hit << endl;
    cout << "Faults: " << miss << endl;
    return 0;
}