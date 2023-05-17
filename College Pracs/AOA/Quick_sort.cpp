#include <bits/stdc++.h>
using namespace std;

int partition(int *A, int low, int high)
{
    int pivot = A[low];
    int i = low + 1;
    int j = high;
    while (i < j)
    {
        while (A[i] <= pivot)
            i++;
        while (A[j] > pivot)
            j--;
        if (i < j)
            swap(A[i], A[j]);
    }
    swap(A[j], A[low]);
    return j;
}

void quick_sort(int *A, int low, int high)
{
    if (low < high)
    {
        int p = partition(A, low, high);
        quick_sort(A, low, p - 1);
        quick_sort(A, p + 1, high);
    }
}

void display(int *A, int n)
{
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
    cout << endl;
}
int main()
{
    cout << "Enter size of array: ";
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    display(arr, n);
    quick_sort(arr, 0, n - 1);
    display(arr, n);
    return 0;
}