#include <bits/stdc++.h>
using namespace std;

void print_frames(vector<int> frames, int f)
{
    for (int k = 0; k < f; k++)
        cout << frames[k] << "  ";
    cout << "\t\t";
}

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
    int idx = 0;
    unordered_set<int> s;
    unordered_map<int, int> mp;
    int hit = 0;
    int miss = 0;
    cout << "\nString[i]\tFrame\t\t\tStatus\n";
    for (int i = 0; i < n; i++)
    {
        int curr = arr[i];
        cout << curr << "\t\t";
        if (s.find(curr) != s.end())
        {
            hit++;
            // print current frames
            print_frames(frames, f);
            cout << "H\n";
            continue;
        }
        if (s.size() < f)
        {
            miss++;
            frames[idx++] = curr;
            // print current frames
            print_frames(frames, f);
            s.insert(curr);
            mp[curr] = i;
            cout << "F\n";
        }
        else
        {
            if (s.find(curr) != s.end())
            {
                hit++;
                // print current frames
                print_frames(frames, f);
                cout << "H\n";
            }
            else
            {
                int mini = INT_MAX;
                int elem;
                for (auto i : s)
                {
                    int temp = mini;
                    mini = min(mini, mp[i]);
                    if (temp != mini)
                        elem = i;
                }
                for (int x = 0; x < f; x++)
                {
                    if (frames[x] == elem)
                    {
                        frames[x] = curr;
                        break;
                    }
                }
                // print current frames
                print_frames(frames, f);
                cout << "F\n";
                miss++;
                s.erase(elem);
                s.insert(curr);
                mp[curr] = i;
            }
        }
    }
    cout << "Hits: " << hit << endl;
    cout << "Faults: " << miss << endl;
    return 0;
}