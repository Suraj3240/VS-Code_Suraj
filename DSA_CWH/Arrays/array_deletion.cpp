#include <bits/stdc++.h>
using namespace std;

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void deletion(int arr[], int size, int index)
{
    for (int i = index; i <= size - 2; i++)
    {
        arr[i] = arr[i + 1];
    }
}

int main()
{
    int arr[100] = {5, 12, 9, 7, 20, 13};
    int size = 6, index = 3;
    display(arr, size);
    cout << endl;
    deletion(arr, size, index);
    cout << "After Deletion......." << endl;
    size--;
    display(arr, size);
    cout << endl;

    return 0;
}