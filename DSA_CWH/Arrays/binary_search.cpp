#include <bits/stdc++.h>
using namespace std;

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int BinarySearch(int arr[], int size, int element)
{
    int low, mid, high;
    low = 0;
    high = size - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
            return mid;
        if (element > arr[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main()
{
    int arr[] = {5, 12, 19, 27, 29, 113};
    int element = 11;
    int size = sizeof(arr) / sizeof(int);
    display(arr, size);
    cout << endl;
    int ans = BinarySearch(arr, size, element);
    cout << ans << endl;

    return 0;
}