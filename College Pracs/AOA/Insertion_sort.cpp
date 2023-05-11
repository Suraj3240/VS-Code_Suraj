#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int *arr, int n)
{
    for (int j = 1; j < n; j++)
    {
        int key = arr[j];
        int i = j - 1;
        while (key < arr[i] && i >= 0)
        {
            arr[i + 1] = arr[i];
            i--;
        }
        arr[i + 1] = key;
    }
}

void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    print(arr, n);
    insertion_sort(arr, n);
    print(arr, n);

    return 0;
}