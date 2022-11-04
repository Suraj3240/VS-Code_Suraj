#include <bits/stdc++.h>
using namespace std;

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
void insertion(int arr[], int size, int index, int element)
{
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
}

int main()
{
    int arr[100] = {5, 12, 9, 7, 20, 13};
    int size = 6, index = 2, element = 10;
    display(arr, size);
    cout << endl;
    insertion(arr, size, index, element);
    cout << "After Insertion....." << endl;
    size++;
    display(arr, size);
    cout << endl;

    return 0;
}