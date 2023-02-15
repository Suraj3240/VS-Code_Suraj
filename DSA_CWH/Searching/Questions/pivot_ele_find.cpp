#include <bits/stdc++.h>
using namespace std;

/*
    find pivot element ie. smallest ele is sorted rotated array
    sorted rotated array = {7 8 9 1 2 3}
    here pivot = 1
*/

int pivotElementDistinct(vector<int> arr, int n)
{
    int s = 0, e = arr.size() - 1;
    if (arr[0] < arr[e])
        // if array is not rotated or
        // rotated n times ie. original sorted array
        return 0;
    int mid = s + ((e - s) / 2);
    while (s < e)
    {
        if (arr[mid] >= arr[0])
            s = mid + 1;
        else
            e = mid;
        mid = s + ((e - s) / 2);
    }
    return s;
}
int pivotElementRepeated(vector<int> arr, int n)
{
    int s = 0, e = arr.size() - 1;
    if (arr[0] < arr[e])
        // if array is not rotated or
        // rotated n times ie. original sorted array
        return 0;
    int mid = s + ((e - s) / 2);
    while (s < e)
    {
        if (arr[mid] > arr[e])
            s = mid + 1;
        else if (arr[mid] < arr[s])
        {
            e = mid;
            s++;
        }
        else
            e--;
        mid = s + ((e - s) / 2);
    }
    return s;
}

int main()
{
    vector<int> arr;
    int n, a;
    cin >> n; // size of vector array
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        arr.push_back(a);
    }

    // for (auto &p : arr)
    //     cout << p << " ";

    // cout << pivotElementDistinct(arr, n);
    cout << pivotElementRepeated(arr, n);

    return 0;
}