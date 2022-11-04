#include <bits/stdc++.h>
using namespace std;

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {5, 12, 9, 7, 20, 13};
    int size = sizeof(arr) / sizeof(int);
    display(arr, size);
    cout << endl;
    sort(arr, arr + size);
    display(arr, size);

    return 0;
}