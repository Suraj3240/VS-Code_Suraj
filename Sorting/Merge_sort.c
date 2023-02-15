#include <stdio.h>

void merge(int *A, int *B, int left, int mid, int right)
{
    int i = left;
    int j = mid + 1;
    int k = left;
    while (i <= mid && j <= right)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            i++;
        }
        else
        {
            B[k] = A[j];
            j++;
        }
        k++;
    }
    while (i <= mid)
    {
        B[k] = A[i];
        i++;
        k++;
    }
    while (j <= right)
    {
        B[k] = A[j];
        j++;
        k++;
    }
    for (int i = 0; i < k; i++)
    {
        A[i] = B[i];
    }
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
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int A[n];
    int B[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    display(A, n);
    merge_sort(A, B, 0, n - 1);
    display(A, n);

    return 0;
}