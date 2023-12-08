#include <bits/stdc++.h>
using namespace std;

void merge(int *A, int *B, int left, int mid, int right)
{
    int i = left, j = mid + 1;
    int k = left;
    while (i <= mid && j <= right)
    {
        if (A[i] <= A[j])
            B[k++] = A[i++];
        else
            B[k++] = A[j++];
    }
    while (i <= mid)
        B[k++] = A[i++];
    while (j <= right)
        B[k++] = A[j++];
    for (int i = 0; i < k; i++)
        A[i] = B[i];
}

void merge_sort(int *A, int *B, int left, int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2;
        merge_sort(A, B, left, mid);
        merge_sort(A, B, mid + 1, right);
        merge(A, B, left, mid, right);
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
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    display(arr, n);
    merge_sort(arr, b, 0, n - 1);
    display(arr, n);
    return 0;
    return 0;
}