#include <bits/stdc++.h>
using namespace std;

void print_frames(vector<int> frames, int f)
{
    for (int i = 0; i < f; i++)
        cout << frames[i] << " ";
    cout << "\t\t";
}

int main()
{
    cout << "Enter string length: ";
    int n;
    cin >> n;
    vector<int> v(n);
    cout << "Enter String array: \n";
    for (auto &i : v)
        cin >> i;
    cout << "Enter no of frames: ";
    int f;
    cin >> f;
    vector<int> frames(f, -1);
    int idx = 0;
    int hit = 0, miss = 0;
    unordered_set<int> s;
    cout << "\nString[i]\tFrame\t\t\tStatus\n";
    for (int i = 0; i < n; i++)
    {
        int curr = v[i];
        cout << curr << "\t\t";
        if (s.find(curr) != s.end())
        {
            hit++;
            print_frames(frames, f);
            cout << "H\n";
            continue;
        }
        if (s.size() < f)
        {
            miss++;
            s.insert(curr);
            frames[idx++] = curr;
            print_frames(frames, f);
            cout << "F\n";
        }
        else
        {
            if (s.find(curr) != s.end())
            {
                hit++;
                print_frames(frames, f);
                cout << "H\n";
            }
            else
            {
                int maxi = INT_MIN;
                vector<int> find(f, 100);
                for (int j = 0; j < f; j++)
                {
                    for (int k = i + 1; k < n; k++)
                    {
                        if (frames[j] == v[k])
                        {
                            find[j] = k;
                            break;
                        }
                    }
                }
                int index = 0;
                for (int j = 0; j < f; j++)
                {
                    maxi = max(maxi, find[j]);
                }
                for (int j = 0; j < f; j++)
                {
                    if (find[j] == maxi)
                    {
                        index = j;
                        break;
                    }
                }
                int elem = frames[index];
                frames[index] = curr;
                s.erase(elem);
                s.insert(curr);
                miss++;
                print_frames(frames, f);
                cout << "F\n";
            }
        }
    }
    cout << "Miss: " << miss;
    cout << "\nHit: " << hit;
    return 0;
}