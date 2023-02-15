#include <bits/stdc++.h>
using namespace std;

// gives the index of the peak of the mountain array
// eg: arr={7,8,10,1,2,6}
//     gives the index 2 ie. ele 10 as max num in array
// can be done by traversing array but in O(n)
// using bin search this can be done in O(log n)
int peakElementIndex(vector<int> arr, int n)
{
    int s = 0, e = arr.size() - 1;
    int mid = s + ((e - s) / 2);
    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
            s = mid + 1;
        else
            e = mid;
        mid = s + ((e - s) / 2);
    }
    return s;
}

int main()
{
    vector<int> arr;
    int n, a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        arr.push_back(a);
    }
    cout << peakElementIndex(arr, arr.size());
    return 0;
}