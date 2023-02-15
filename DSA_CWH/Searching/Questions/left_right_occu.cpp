#include <bits/stdc++.h>
using namespace std;
/*
arr={1 2 3 3 3 4 5}
key=3
left occurence index = 2
right occurence index = 4
*/
int leftOccurence(vector<int> arr, int key)
{
    int s = 0, e = arr.size() - 1;
    int mid = s + ((e - s) / 2);
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + ((e - s) / 2);
    }
    return ans;
}
int rightOccurence(vector<int> arr, int key)
{
    int s = 0, e = arr.size() - 1;
    int mid = s + ((e - s) / 2);
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + ((e - s) / 2);
    }
    return ans;
}
pair<int, int> leftRightOccurence(vector<int> arr, int key)
{
    pair<int, int> p;
    p.first = leftOccurence(arr, key);
    p.second = rightOccurence(arr, key);
    return p;
}

int main()
{
    int n, a;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        arr.push_back(a);
    }

    cout << leftRightOccurence(arr, 3).first << " ";
    cout << leftRightOccurence(arr, 3).second;

    return 0;
}